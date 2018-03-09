﻿/*
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

#include <aws/medialive/model/HlsEncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace HlsEncryptionTypeMapper
      {

        static const int AES128_HASH = HashingUtils::HashString("AES128");
        static const int SAMPLE_AES_HASH = HashingUtils::HashString("SAMPLE_AES");


        HlsEncryptionType GetHlsEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES128_HASH)
          {
            return HlsEncryptionType::AES128;
          }
          else if (hashCode == SAMPLE_AES_HASH)
          {
            return HlsEncryptionType::SAMPLE_AES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsEncryptionType>(hashCode);
          }

          return HlsEncryptionType::NOT_SET;
        }

        Aws::String GetNameForHlsEncryptionType(HlsEncryptionType enumValue)
        {
          switch(enumValue)
          {
          case HlsEncryptionType::AES128:
            return "AES128";
          case HlsEncryptionType::SAMPLE_AES:
            return "SAMPLE_AES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HlsEncryptionTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
