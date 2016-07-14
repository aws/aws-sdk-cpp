/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/s3-encryption/ContentCryptoScheme.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/Globals.h>

using namespace Aws::Utils;

namespace Aws
{
namespace S3Encryption
{
namespace ContentCryptoSchemeMapper
{
static const int cryptoScheme_CBC_HASH = HashingUtils::HashString("AES/CBC/PKCS5Padding");
static const int cryptoScheme_CTR_HASH = HashingUtils::HashString("AES/CTR/NoPadding");
static const int cryptoScheme_GCM_HASH = HashingUtils::HashString("AES/GCM/NoPadding");

ContentCryptoScheme GetContentCryptoSchemeForName(const Aws::String& name)
{
    int hashcode = HashingUtils::HashString(name.c_str());
    if (hashcode == cryptoScheme_CBC_HASH)
    {
        return ContentCryptoScheme::CBC;
    }
    else if (hashcode == cryptoScheme_CTR_HASH)
    {
        return ContentCryptoScheme::CTR;
    }
    else if (hashcode == cryptoScheme_GCM_HASH)
    {
        return ContentCryptoScheme::GCM;
    }
    EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
    if (overflowContainer)
    {
        overflowContainer->StoreOverflow(hashcode, name);
        return static_cast<ContentCryptoScheme>(hashcode);
    }

    return ContentCryptoScheme::NONE;
}

Aws::String GetNameForContentCryptoScheme(ContentCryptoScheme enumValue)
{
    switch (enumValue)
    {
    case ContentCryptoScheme::CBC:
        return "AES/CBC/PKCS5Padding";
    case ContentCryptoScheme::CTR:
        return "AES/CTR/NoPadding";
    case ContentCryptoScheme::GCM:
        return "AES/GCM/NoPadding";
    default:
        EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
        if (overflowContainer)
        {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
        }
        return "";
    }
}
}//namespace ContentCryptoSchemeMapper
}//namespace S3Encryption
}//namespace Aws