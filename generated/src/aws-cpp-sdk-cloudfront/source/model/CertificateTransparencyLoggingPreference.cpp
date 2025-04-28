/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CertificateTransparencyLoggingPreference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace CertificateTransparencyLoggingPreferenceMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        CertificateTransparencyLoggingPreference GetCertificateTransparencyLoggingPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return CertificateTransparencyLoggingPreference::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return CertificateTransparencyLoggingPreference::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateTransparencyLoggingPreference>(hashCode);
          }

          return CertificateTransparencyLoggingPreference::NOT_SET;
        }

        Aws::String GetNameForCertificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference enumValue)
        {
          switch(enumValue)
          {
          case CertificateTransparencyLoggingPreference::NOT_SET:
            return {};
          case CertificateTransparencyLoggingPreference::enabled:
            return "enabled";
          case CertificateTransparencyLoggingPreference::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateTransparencyLoggingPreferenceMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
