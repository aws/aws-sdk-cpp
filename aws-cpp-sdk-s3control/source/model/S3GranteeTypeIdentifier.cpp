/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/s3control/model/S3GranteeTypeIdentifier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace S3GranteeTypeIdentifierMapper
      {

        static const int id_HASH = HashingUtils::HashString("id");
        static const int emailAddress_HASH = HashingUtils::HashString("emailAddress");
        static const int uri_HASH = HashingUtils::HashString("uri");


        S3GranteeTypeIdentifier GetS3GranteeTypeIdentifierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == id_HASH)
          {
            return S3GranteeTypeIdentifier::id;
          }
          else if (hashCode == emailAddress_HASH)
          {
            return S3GranteeTypeIdentifier::emailAddress;
          }
          else if (hashCode == uri_HASH)
          {
            return S3GranteeTypeIdentifier::uri;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3GranteeTypeIdentifier>(hashCode);
          }

          return S3GranteeTypeIdentifier::NOT_SET;
        }

        Aws::String GetNameForS3GranteeTypeIdentifier(S3GranteeTypeIdentifier enumValue)
        {
          switch(enumValue)
          {
          case S3GranteeTypeIdentifier::id:
            return "id";
          case S3GranteeTypeIdentifier::emailAddress:
            return "emailAddress";
          case S3GranteeTypeIdentifier::uri:
            return "uri";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3GranteeTypeIdentifierMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
