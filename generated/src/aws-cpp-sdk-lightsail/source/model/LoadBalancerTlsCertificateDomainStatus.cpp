/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateDomainStatus.h>
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
      namespace LoadBalancerTlsCertificateDomainStatusMapper
      {

        static const int PENDING_VALIDATION_HASH = HashingUtils::HashString("PENDING_VALIDATION");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");


        LoadBalancerTlsCertificateDomainStatus GetLoadBalancerTlsCertificateDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VALIDATION_HASH)
          {
            return LoadBalancerTlsCertificateDomainStatus::PENDING_VALIDATION;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LoadBalancerTlsCertificateDomainStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return LoadBalancerTlsCertificateDomainStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerTlsCertificateDomainStatus>(hashCode);
          }

          return LoadBalancerTlsCertificateDomainStatus::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerTlsCertificateDomainStatus(LoadBalancerTlsCertificateDomainStatus enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerTlsCertificateDomainStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case LoadBalancerTlsCertificateDomainStatus::FAILED:
            return "FAILED";
          case LoadBalancerTlsCertificateDomainStatus::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerTlsCertificateDomainStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
