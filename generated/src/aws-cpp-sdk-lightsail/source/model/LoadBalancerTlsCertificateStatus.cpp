/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateStatus.h>
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
      namespace LoadBalancerTlsCertificateStatusMapper
      {

        static constexpr uint32_t PENDING_VALIDATION_HASH = ConstExprHashingUtils::HashString("PENDING_VALIDATION");
        static constexpr uint32_t ISSUED_HASH = ConstExprHashingUtils::HashString("ISSUED");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");
        static constexpr uint32_t VALIDATION_TIMED_OUT_HASH = ConstExprHashingUtils::HashString("VALIDATION_TIMED_OUT");
        static constexpr uint32_t REVOKED_HASH = ConstExprHashingUtils::HashString("REVOKED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        LoadBalancerTlsCertificateStatus GetLoadBalancerTlsCertificateStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VALIDATION_HASH)
          {
            return LoadBalancerTlsCertificateStatus::PENDING_VALIDATION;
          }
          else if (hashCode == ISSUED_HASH)
          {
            return LoadBalancerTlsCertificateStatus::ISSUED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return LoadBalancerTlsCertificateStatus::INACTIVE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return LoadBalancerTlsCertificateStatus::EXPIRED;
          }
          else if (hashCode == VALIDATION_TIMED_OUT_HASH)
          {
            return LoadBalancerTlsCertificateStatus::VALIDATION_TIMED_OUT;
          }
          else if (hashCode == REVOKED_HASH)
          {
            return LoadBalancerTlsCertificateStatus::REVOKED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LoadBalancerTlsCertificateStatus::FAILED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return LoadBalancerTlsCertificateStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerTlsCertificateStatus>(hashCode);
          }

          return LoadBalancerTlsCertificateStatus::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerTlsCertificateStatus(LoadBalancerTlsCertificateStatus enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerTlsCertificateStatus::NOT_SET:
            return {};
          case LoadBalancerTlsCertificateStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case LoadBalancerTlsCertificateStatus::ISSUED:
            return "ISSUED";
          case LoadBalancerTlsCertificateStatus::INACTIVE:
            return "INACTIVE";
          case LoadBalancerTlsCertificateStatus::EXPIRED:
            return "EXPIRED";
          case LoadBalancerTlsCertificateStatus::VALIDATION_TIMED_OUT:
            return "VALIDATION_TIMED_OUT";
          case LoadBalancerTlsCertificateStatus::REVOKED:
            return "REVOKED";
          case LoadBalancerTlsCertificateStatus::FAILED:
            return "FAILED";
          case LoadBalancerTlsCertificateStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerTlsCertificateStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
