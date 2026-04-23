/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int PENDING_VALIDATION_HASH = HashingUtils::HashString("PENDING_VALIDATION");
        static const int ISSUED_HASH = HashingUtils::HashString("ISSUED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int VALIDATION_TIMED_OUT_HASH = HashingUtils::HashString("VALIDATION_TIMED_OUT");
        static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        LoadBalancerTlsCertificateStatus GetLoadBalancerTlsCertificateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
