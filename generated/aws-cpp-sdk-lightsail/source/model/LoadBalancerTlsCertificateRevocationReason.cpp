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

        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");
        static const int KEY_COMPROMISE_HASH = HashingUtils::HashString("KEY_COMPROMISE");
        static const int CA_COMPROMISE_HASH = HashingUtils::HashString("CA_COMPROMISE");
        static const int AFFILIATION_CHANGED_HASH = HashingUtils::HashString("AFFILIATION_CHANGED");
        static const int SUPERCEDED_HASH = HashingUtils::HashString("SUPERCEDED");
        static const int CESSATION_OF_OPERATION_HASH = HashingUtils::HashString("CESSATION_OF_OPERATION");
        static const int CERTIFICATE_HOLD_HASH = HashingUtils::HashString("CERTIFICATE_HOLD");
        static const int REMOVE_FROM_CRL_HASH = HashingUtils::HashString("REMOVE_FROM_CRL");
        static const int PRIVILEGE_WITHDRAWN_HASH = HashingUtils::HashString("PRIVILEGE_WITHDRAWN");
        static const int A_A_COMPROMISE_HASH = HashingUtils::HashString("A_A_COMPROMISE");


        LoadBalancerTlsCertificateRevocationReason GetLoadBalancerTlsCertificateRevocationReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
