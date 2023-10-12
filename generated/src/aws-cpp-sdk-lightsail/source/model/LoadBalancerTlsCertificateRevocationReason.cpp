/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateRevocationReason.h>
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
      namespace LoadBalancerTlsCertificateRevocationReasonMapper
      {

        static constexpr uint32_t UNSPECIFIED_HASH = ConstExprHashingUtils::HashString("UNSPECIFIED");
        static constexpr uint32_t KEY_COMPROMISE_HASH = ConstExprHashingUtils::HashString("KEY_COMPROMISE");
        static constexpr uint32_t CA_COMPROMISE_HASH = ConstExprHashingUtils::HashString("CA_COMPROMISE");
        static constexpr uint32_t AFFILIATION_CHANGED_HASH = ConstExprHashingUtils::HashString("AFFILIATION_CHANGED");
        static constexpr uint32_t SUPERCEDED_HASH = ConstExprHashingUtils::HashString("SUPERCEDED");
        static constexpr uint32_t CESSATION_OF_OPERATION_HASH = ConstExprHashingUtils::HashString("CESSATION_OF_OPERATION");
        static constexpr uint32_t CERTIFICATE_HOLD_HASH = ConstExprHashingUtils::HashString("CERTIFICATE_HOLD");
        static constexpr uint32_t REMOVE_FROM_CRL_HASH = ConstExprHashingUtils::HashString("REMOVE_FROM_CRL");
        static constexpr uint32_t PRIVILEGE_WITHDRAWN_HASH = ConstExprHashingUtils::HashString("PRIVILEGE_WITHDRAWN");
        static constexpr uint32_t A_A_COMPROMISE_HASH = ConstExprHashingUtils::HashString("A_A_COMPROMISE");


        LoadBalancerTlsCertificateRevocationReason GetLoadBalancerTlsCertificateRevocationReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNSPECIFIED_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::UNSPECIFIED;
          }
          else if (hashCode == KEY_COMPROMISE_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::KEY_COMPROMISE;
          }
          else if (hashCode == CA_COMPROMISE_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::CA_COMPROMISE;
          }
          else if (hashCode == AFFILIATION_CHANGED_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::AFFILIATION_CHANGED;
          }
          else if (hashCode == SUPERCEDED_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::SUPERCEDED;
          }
          else if (hashCode == CESSATION_OF_OPERATION_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::CESSATION_OF_OPERATION;
          }
          else if (hashCode == CERTIFICATE_HOLD_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::CERTIFICATE_HOLD;
          }
          else if (hashCode == REMOVE_FROM_CRL_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::REMOVE_FROM_CRL;
          }
          else if (hashCode == PRIVILEGE_WITHDRAWN_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::PRIVILEGE_WITHDRAWN;
          }
          else if (hashCode == A_A_COMPROMISE_HASH)
          {
            return LoadBalancerTlsCertificateRevocationReason::A_A_COMPROMISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerTlsCertificateRevocationReason>(hashCode);
          }

          return LoadBalancerTlsCertificateRevocationReason::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerTlsCertificateRevocationReason(LoadBalancerTlsCertificateRevocationReason enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerTlsCertificateRevocationReason::NOT_SET:
            return {};
          case LoadBalancerTlsCertificateRevocationReason::UNSPECIFIED:
            return "UNSPECIFIED";
          case LoadBalancerTlsCertificateRevocationReason::KEY_COMPROMISE:
            return "KEY_COMPROMISE";
          case LoadBalancerTlsCertificateRevocationReason::CA_COMPROMISE:
            return "CA_COMPROMISE";
          case LoadBalancerTlsCertificateRevocationReason::AFFILIATION_CHANGED:
            return "AFFILIATION_CHANGED";
          case LoadBalancerTlsCertificateRevocationReason::SUPERCEDED:
            return "SUPERCEDED";
          case LoadBalancerTlsCertificateRevocationReason::CESSATION_OF_OPERATION:
            return "CESSATION_OF_OPERATION";
          case LoadBalancerTlsCertificateRevocationReason::CERTIFICATE_HOLD:
            return "CERTIFICATE_HOLD";
          case LoadBalancerTlsCertificateRevocationReason::REMOVE_FROM_CRL:
            return "REMOVE_FROM_CRL";
          case LoadBalancerTlsCertificateRevocationReason::PRIVILEGE_WITHDRAWN:
            return "PRIVILEGE_WITHDRAWN";
          case LoadBalancerTlsCertificateRevocationReason::A_A_COMPROMISE:
            return "A_A_COMPROMISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerTlsCertificateRevocationReasonMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
