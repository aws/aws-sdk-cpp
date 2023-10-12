/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateDnsRecordCreationStateCode.h>
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
      namespace LoadBalancerTlsCertificateDnsRecordCreationStateCodeMapper
      {

        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        LoadBalancerTlsCertificateDnsRecordCreationStateCode GetLoadBalancerTlsCertificateDnsRecordCreationStateCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return LoadBalancerTlsCertificateDnsRecordCreationStateCode::SUCCEEDED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return LoadBalancerTlsCertificateDnsRecordCreationStateCode::STARTED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LoadBalancerTlsCertificateDnsRecordCreationStateCode::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerTlsCertificateDnsRecordCreationStateCode>(hashCode);
          }

          return LoadBalancerTlsCertificateDnsRecordCreationStateCode::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerTlsCertificateDnsRecordCreationStateCode(LoadBalancerTlsCertificateDnsRecordCreationStateCode enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerTlsCertificateDnsRecordCreationStateCode::NOT_SET:
            return {};
          case LoadBalancerTlsCertificateDnsRecordCreationStateCode::SUCCEEDED:
            return "SUCCEEDED";
          case LoadBalancerTlsCertificateDnsRecordCreationStateCode::STARTED:
            return "STARTED";
          case LoadBalancerTlsCertificateDnsRecordCreationStateCode::FAILED:
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

      } // namespace LoadBalancerTlsCertificateDnsRecordCreationStateCodeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
