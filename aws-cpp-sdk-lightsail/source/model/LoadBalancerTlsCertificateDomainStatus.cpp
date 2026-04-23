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
