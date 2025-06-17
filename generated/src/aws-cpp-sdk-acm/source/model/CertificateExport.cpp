/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateExport.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace CertificateExportMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CertificateExport GetCertificateExportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CertificateExport::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CertificateExport::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateExport>(hashCode);
          }

          return CertificateExport::NOT_SET;
        }

        Aws::String GetNameForCertificateExport(CertificateExport enumValue)
        {
          switch(enumValue)
          {
          case CertificateExport::NOT_SET:
            return {};
          case CertificateExport::ENABLED:
            return "ENABLED";
          case CertificateExport::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateExportMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
