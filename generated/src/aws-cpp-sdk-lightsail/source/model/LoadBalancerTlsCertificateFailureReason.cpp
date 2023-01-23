/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateFailureReason.h>
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
      namespace LoadBalancerTlsCertificateFailureReasonMapper
      {

        static const int NO_AVAILABLE_CONTACTS_HASH = HashingUtils::HashString("NO_AVAILABLE_CONTACTS");
        static const int ADDITIONAL_VERIFICATION_REQUIRED_HASH = HashingUtils::HashString("ADDITIONAL_VERIFICATION_REQUIRED");
        static const int DOMAIN_NOT_ALLOWED_HASH = HashingUtils::HashString("DOMAIN_NOT_ALLOWED");
        static const int INVALID_PUBLIC_DOMAIN_HASH = HashingUtils::HashString("INVALID_PUBLIC_DOMAIN");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        LoadBalancerTlsCertificateFailureReason GetLoadBalancerTlsCertificateFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_AVAILABLE_CONTACTS_HASH)
          {
            return LoadBalancerTlsCertificateFailureReason::NO_AVAILABLE_CONTACTS;
          }
          else if (hashCode == ADDITIONAL_VERIFICATION_REQUIRED_HASH)
          {
            return LoadBalancerTlsCertificateFailureReason::ADDITIONAL_VERIFICATION_REQUIRED;
          }
          else if (hashCode == DOMAIN_NOT_ALLOWED_HASH)
          {
            return LoadBalancerTlsCertificateFailureReason::DOMAIN_NOT_ALLOWED;
          }
          else if (hashCode == INVALID_PUBLIC_DOMAIN_HASH)
          {
            return LoadBalancerTlsCertificateFailureReason::INVALID_PUBLIC_DOMAIN;
          }
          else if (hashCode == OTHER_HASH)
          {
            return LoadBalancerTlsCertificateFailureReason::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerTlsCertificateFailureReason>(hashCode);
          }

          return LoadBalancerTlsCertificateFailureReason::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerTlsCertificateFailureReason(LoadBalancerTlsCertificateFailureReason enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerTlsCertificateFailureReason::NO_AVAILABLE_CONTACTS:
            return "NO_AVAILABLE_CONTACTS";
          case LoadBalancerTlsCertificateFailureReason::ADDITIONAL_VERIFICATION_REQUIRED:
            return "ADDITIONAL_VERIFICATION_REQUIRED";
          case LoadBalancerTlsCertificateFailureReason::DOMAIN_NOT_ALLOWED:
            return "DOMAIN_NOT_ALLOWED";
          case LoadBalancerTlsCertificateFailureReason::INVALID_PUBLIC_DOMAIN:
            return "INVALID_PUBLIC_DOMAIN";
          case LoadBalancerTlsCertificateFailureReason::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerTlsCertificateFailureReasonMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
