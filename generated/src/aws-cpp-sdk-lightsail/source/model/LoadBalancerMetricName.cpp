/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerMetricName.h>
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
      namespace LoadBalancerMetricNameMapper
      {

        static const int ClientTLSNegotiationErrorCount_HASH = HashingUtils::HashString("ClientTLSNegotiationErrorCount");
        static const int HealthyHostCount_HASH = HashingUtils::HashString("HealthyHostCount");
        static const int UnhealthyHostCount_HASH = HashingUtils::HashString("UnhealthyHostCount");
        static const int HTTPCode_LB_4XX_Count_HASH = HashingUtils::HashString("HTTPCode_LB_4XX_Count");
        static const int HTTPCode_LB_5XX_Count_HASH = HashingUtils::HashString("HTTPCode_LB_5XX_Count");
        static const int HTTPCode_Instance_2XX_Count_HASH = HashingUtils::HashString("HTTPCode_Instance_2XX_Count");
        static const int HTTPCode_Instance_3XX_Count_HASH = HashingUtils::HashString("HTTPCode_Instance_3XX_Count");
        static const int HTTPCode_Instance_4XX_Count_HASH = HashingUtils::HashString("HTTPCode_Instance_4XX_Count");
        static const int HTTPCode_Instance_5XX_Count_HASH = HashingUtils::HashString("HTTPCode_Instance_5XX_Count");
        static const int InstanceResponseTime_HASH = HashingUtils::HashString("InstanceResponseTime");
        static const int RejectedConnectionCount_HASH = HashingUtils::HashString("RejectedConnectionCount");
        static const int RequestCount_HASH = HashingUtils::HashString("RequestCount");


        LoadBalancerMetricName GetLoadBalancerMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ClientTLSNegotiationErrorCount_HASH)
          {
            return LoadBalancerMetricName::ClientTLSNegotiationErrorCount;
          }
          else if (hashCode == HealthyHostCount_HASH)
          {
            return LoadBalancerMetricName::HealthyHostCount;
          }
          else if (hashCode == UnhealthyHostCount_HASH)
          {
            return LoadBalancerMetricName::UnhealthyHostCount;
          }
          else if (hashCode == HTTPCode_LB_4XX_Count_HASH)
          {
            return LoadBalancerMetricName::HTTPCode_LB_4XX_Count;
          }
          else if (hashCode == HTTPCode_LB_5XX_Count_HASH)
          {
            return LoadBalancerMetricName::HTTPCode_LB_5XX_Count;
          }
          else if (hashCode == HTTPCode_Instance_2XX_Count_HASH)
          {
            return LoadBalancerMetricName::HTTPCode_Instance_2XX_Count;
          }
          else if (hashCode == HTTPCode_Instance_3XX_Count_HASH)
          {
            return LoadBalancerMetricName::HTTPCode_Instance_3XX_Count;
          }
          else if (hashCode == HTTPCode_Instance_4XX_Count_HASH)
          {
            return LoadBalancerMetricName::HTTPCode_Instance_4XX_Count;
          }
          else if (hashCode == HTTPCode_Instance_5XX_Count_HASH)
          {
            return LoadBalancerMetricName::HTTPCode_Instance_5XX_Count;
          }
          else if (hashCode == InstanceResponseTime_HASH)
          {
            return LoadBalancerMetricName::InstanceResponseTime;
          }
          else if (hashCode == RejectedConnectionCount_HASH)
          {
            return LoadBalancerMetricName::RejectedConnectionCount;
          }
          else if (hashCode == RequestCount_HASH)
          {
            return LoadBalancerMetricName::RequestCount;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerMetricName>(hashCode);
          }

          return LoadBalancerMetricName::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerMetricName(LoadBalancerMetricName enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerMetricName::ClientTLSNegotiationErrorCount:
            return "ClientTLSNegotiationErrorCount";
          case LoadBalancerMetricName::HealthyHostCount:
            return "HealthyHostCount";
          case LoadBalancerMetricName::UnhealthyHostCount:
            return "UnhealthyHostCount";
          case LoadBalancerMetricName::HTTPCode_LB_4XX_Count:
            return "HTTPCode_LB_4XX_Count";
          case LoadBalancerMetricName::HTTPCode_LB_5XX_Count:
            return "HTTPCode_LB_5XX_Count";
          case LoadBalancerMetricName::HTTPCode_Instance_2XX_Count:
            return "HTTPCode_Instance_2XX_Count";
          case LoadBalancerMetricName::HTTPCode_Instance_3XX_Count:
            return "HTTPCode_Instance_3XX_Count";
          case LoadBalancerMetricName::HTTPCode_Instance_4XX_Count:
            return "HTTPCode_Instance_4XX_Count";
          case LoadBalancerMetricName::HTTPCode_Instance_5XX_Count:
            return "HTTPCode_Instance_5XX_Count";
          case LoadBalancerMetricName::InstanceResponseTime:
            return "InstanceResponseTime";
          case LoadBalancerMetricName::RejectedConnectionCount:
            return "RejectedConnectionCount";
          case LoadBalancerMetricName::RequestCount:
            return "RequestCount";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerMetricNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
