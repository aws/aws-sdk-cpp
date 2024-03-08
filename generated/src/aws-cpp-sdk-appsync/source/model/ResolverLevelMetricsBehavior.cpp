/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ResolverLevelMetricsBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ResolverLevelMetricsBehaviorMapper
      {

        static const int FULL_REQUEST_RESOLVER_METRICS_HASH = HashingUtils::HashString("FULL_REQUEST_RESOLVER_METRICS");
        static const int PER_RESOLVER_METRICS_HASH = HashingUtils::HashString("PER_RESOLVER_METRICS");


        ResolverLevelMetricsBehavior GetResolverLevelMetricsBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_REQUEST_RESOLVER_METRICS_HASH)
          {
            return ResolverLevelMetricsBehavior::FULL_REQUEST_RESOLVER_METRICS;
          }
          else if (hashCode == PER_RESOLVER_METRICS_HASH)
          {
            return ResolverLevelMetricsBehavior::PER_RESOLVER_METRICS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverLevelMetricsBehavior>(hashCode);
          }

          return ResolverLevelMetricsBehavior::NOT_SET;
        }

        Aws::String GetNameForResolverLevelMetricsBehavior(ResolverLevelMetricsBehavior enumValue)
        {
          switch(enumValue)
          {
          case ResolverLevelMetricsBehavior::NOT_SET:
            return {};
          case ResolverLevelMetricsBehavior::FULL_REQUEST_RESOLVER_METRICS:
            return "FULL_REQUEST_RESOLVER_METRICS";
          case ResolverLevelMetricsBehavior::PER_RESOLVER_METRICS:
            return "PER_RESOLVER_METRICS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverLevelMetricsBehaviorMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
