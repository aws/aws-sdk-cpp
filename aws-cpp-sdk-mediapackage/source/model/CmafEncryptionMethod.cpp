/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/CmafEncryptionMethod.h>
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
      namespace CmafEncryptionMethodMapper
      {

        static const int SAMPLE_AES_HASH = HashingUtils::HashString("SAMPLE_AES");
        static const int AES_CTR_HASH = HashingUtils::HashString("AES_CTR");


        CmafEncryptionMethod GetCmafEncryptionMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAMPLE_AES_HASH)
          {
            return CmafEncryptionMethod::SAMPLE_AES;
          }
          else if (hashCode == AES_CTR_HASH)
          {
            return CmafEncryptionMethod::AES_CTR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafEncryptionMethod>(hashCode);
          }

          return CmafEncryptionMethod::NOT_SET;
        }

        Aws::String GetNameForCmafEncryptionMethod(CmafEncryptionMethod enumValue)
        {
          switch(enumValue)
          {
          case CmafEncryptionMethod::SAMPLE_AES:
            return "SAMPLE_AES";
          case CmafEncryptionMethod::AES_CTR:
            return "AES_CTR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafEncryptionMethodMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
