/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DecryptionMode.h>
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
      namespace DecryptionModeMapper
      {

        static const int AES_CTR_HASH = HashingUtils::HashString("AES_CTR");
        static const int AES_CBC_HASH = HashingUtils::HashString("AES_CBC");
        static const int AES_GCM_HASH = HashingUtils::HashString("AES_GCM");


        DecryptionMode GetDecryptionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES_CTR_HASH)
          {
            return DecryptionMode::AES_CTR;
          }
          else if (hashCode == AES_CBC_HASH)
          {
            return DecryptionMode::AES_CBC;
          }
          else if (hashCode == AES_GCM_HASH)
          {
            return DecryptionMode::AES_GCM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DecryptionMode>(hashCode);
          }

          return DecryptionMode::NOT_SET;
        }

        Aws::String GetNameForDecryptionMode(DecryptionMode enumValue)
        {
          switch(enumValue)
          {
          case DecryptionMode::AES_CTR:
            return "AES_CTR";
          case DecryptionMode::AES_CBC:
            return "AES_CBC";
          case DecryptionMode::AES_GCM:
            return "AES_GCM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DecryptionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
