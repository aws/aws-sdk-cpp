/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CertificateBasedAuthStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace CertificateBasedAuthStatusMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int ENABLED_NO_DIRECTORY_LOGIN_FALLBACK_HASH = HashingUtils::HashString("ENABLED_NO_DIRECTORY_LOGIN_FALLBACK");


        CertificateBasedAuthStatus GetCertificateBasedAuthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CertificateBasedAuthStatus::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return CertificateBasedAuthStatus::ENABLED;
          }
          else if (hashCode == ENABLED_NO_DIRECTORY_LOGIN_FALLBACK_HASH)
          {
            return CertificateBasedAuthStatus::ENABLED_NO_DIRECTORY_LOGIN_FALLBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateBasedAuthStatus>(hashCode);
          }

          return CertificateBasedAuthStatus::NOT_SET;
        }

        Aws::String GetNameForCertificateBasedAuthStatus(CertificateBasedAuthStatus enumValue)
        {
          switch(enumValue)
          {
          case CertificateBasedAuthStatus::DISABLED:
            return "DISABLED";
          case CertificateBasedAuthStatus::ENABLED:
            return "ENABLED";
          case CertificateBasedAuthStatus::ENABLED_NO_DIRECTORY_LOGIN_FALLBACK:
            return "ENABLED_NO_DIRECTORY_LOGIN_FALLBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateBasedAuthStatusMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
