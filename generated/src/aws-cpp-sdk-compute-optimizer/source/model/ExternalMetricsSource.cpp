/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExternalMetricsSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace ExternalMetricsSourceMapper
      {

        static const int Datadog_HASH = HashingUtils::HashString("Datadog");
        static const int Dynatrace_HASH = HashingUtils::HashString("Dynatrace");
        static const int NewRelic_HASH = HashingUtils::HashString("NewRelic");
        static const int Instana_HASH = HashingUtils::HashString("Instana");


        ExternalMetricsSource GetExternalMetricsSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Datadog_HASH)
          {
            return ExternalMetricsSource::Datadog;
          }
          else if (hashCode == Dynatrace_HASH)
          {
            return ExternalMetricsSource::Dynatrace;
          }
          else if (hashCode == NewRelic_HASH)
          {
            return ExternalMetricsSource::NewRelic;
          }
          else if (hashCode == Instana_HASH)
          {
            return ExternalMetricsSource::Instana;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExternalMetricsSource>(hashCode);
          }

          return ExternalMetricsSource::NOT_SET;
        }

        Aws::String GetNameForExternalMetricsSource(ExternalMetricsSource enumValue)
        {
          switch(enumValue)
          {
          case ExternalMetricsSource::Datadog:
            return "Datadog";
          case ExternalMetricsSource::Dynatrace:
            return "Dynatrace";
          case ExternalMetricsSource::NewRelic:
            return "NewRelic";
          case ExternalMetricsSource::Instana:
            return "Instana";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExternalMetricsSourceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
