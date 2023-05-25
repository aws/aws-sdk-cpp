/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateRenewalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace LoadBalancerTlsCertificateRenewalStatusMapper
      {

        static const int PENDING_AUTO_RENEWAL_HASH = HashingUtils::HashString("PENDING_AUTO_RENEWAL");
        static const int PENDING_VALIDATION_HASH = HashingUtils::HashString("PENDING_VALIDATION");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        LoadBalancerTlsCertificateRenewalStatus GetLoadBalancerTlsCertificateRenewalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_AUTO_RENEWAL_HASH)
          {
            return LoadBalancerTlsCertificateRenewalStatus::PENDING_AUTO_RENEWAL;
          }
          else if (hashCode == PENDING_VALIDATION_HASH)
          {
            return LoadBalancerTlsCertificateRenewalStatus::PENDING_VALIDATION;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return LoadBalancerTlsCertificateRenewalStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LoadBalancerTlsCertificateRenewalStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerTlsCertificateRenewalStatus>(hashCode);
          }

          return LoadBalancerTlsCertificateRenewalStatus::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerTlsCertificateRenewalStatus(LoadBalancerTlsCertificateRenewalStatus enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerTlsCertificateRenewalStatus::PENDING_AUTO_RENEWAL:
            return "PENDING_AUTO_RENEWAL";
          case LoadBalancerTlsCertificateRenewalStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case LoadBalancerTlsCertificateRenewalStatus::SUCCESS:
            return "SUCCESS";
          case LoadBalancerTlsCertificateRenewalStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerTlsCertificateRenewalStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
