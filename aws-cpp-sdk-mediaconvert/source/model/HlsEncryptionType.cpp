/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsEncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
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

            return {};
          }
        }

      } // namespace HlsEncryptionTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
