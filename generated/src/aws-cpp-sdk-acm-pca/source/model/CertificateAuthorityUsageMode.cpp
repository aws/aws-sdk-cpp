/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CertificateAuthorityUsageMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace CertificateAuthorityUsageModeMapper
      {

        static const int GENERAL_PURPOSE_HASH = HashingUtils::HashString("GENERAL_PURPOSE");
        static const int SHORT_LIVED_CERTIFICATE_HASH = HashingUtils::HashString("SHORT_LIVED_CERTIFICATE");


        CertificateAuthorityUsageMode GetCertificateAuthorityUsageModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERAL_PURPOSE_HASH)
          {
            return CertificateAuthorityUsageMode::GENERAL_PURPOSE;
          }
          else if (hashCode == SHORT_LIVED_CERTIFICATE_HASH)
          {
            return CertificateAuthorityUsageMode::SHORT_LIVED_CERTIFICATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateAuthorityUsageMode>(hashCode);
          }

          return CertificateAuthorityUsageMode::NOT_SET;
        }

        Aws::String GetNameForCertificateAuthorityUsageMode(CertificateAuthorityUsageMode enumValue)
        {
          switch(enumValue)
          {
          case CertificateAuthorityUsageMode::GENERAL_PURPOSE:
            return "GENERAL_PURPOSE";
          case CertificateAuthorityUsageMode::SHORT_LIVED_CERTIFICATE:
            return "SHORT_LIVED_CERTIFICATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateAuthorityUsageModeMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
