/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/EncryptionMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace EncryptionMethodMapper
      {

        static const int AES_128_HASH = HashingUtils::HashString("AES_128");
        static const int SAMPLE_AES_HASH = HashingUtils::HashString("SAMPLE_AES");


        EncryptionMethod GetEncryptionMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES_128_HASH)
          {
            return EncryptionMethod::AES_128;
          }
          else if (hashCode == SAMPLE_AES_HASH)
          {
            return EncryptionMethod::SAMPLE_AES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionMethod>(hashCode);
          }

          return EncryptionMethod::NOT_SET;
        }

        Aws::String GetNameForEncryptionMethod(EncryptionMethod enumValue)
        {
          switch(enumValue)
          {
          case EncryptionMethod::AES_128:
            return "AES_128";
          case EncryptionMethod::SAMPLE_AES:
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

      } // namespace EncryptionMethodMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
