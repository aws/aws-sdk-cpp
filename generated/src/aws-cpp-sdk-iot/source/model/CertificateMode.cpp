/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CertificateMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace CertificateModeMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t SNI_ONLY_HASH = ConstExprHashingUtils::HashString("SNI_ONLY");


        CertificateMode GetCertificateModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return CertificateMode::DEFAULT;
          }
          else if (hashCode == SNI_ONLY_HASH)
          {
            return CertificateMode::SNI_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateMode>(hashCode);
          }

          return CertificateMode::NOT_SET;
        }

        Aws::String GetNameForCertificateMode(CertificateMode enumValue)
        {
          switch(enumValue)
          {
          case CertificateMode::NOT_SET:
            return {};
          case CertificateMode::DEFAULT:
            return "DEFAULT";
          case CertificateMode::SNI_ONLY:
            return "SNI_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateModeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
