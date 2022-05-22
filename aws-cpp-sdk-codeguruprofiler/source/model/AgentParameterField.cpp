/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/AgentParameterField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruProfiler
  {
    namespace Model
    {
      namespace AgentParameterFieldMapper
      {

        static const int SamplingIntervalInMilliseconds_HASH = HashingUtils::HashString("SamplingIntervalInMilliseconds");
        static const int ReportingIntervalInMilliseconds_HASH = HashingUtils::HashString("ReportingIntervalInMilliseconds");
        static const int MinimumTimeForReportingInMilliseconds_HASH = HashingUtils::HashString("MinimumTimeForReportingInMilliseconds");
        static const int MemoryUsageLimitPercent_HASH = HashingUtils::HashString("MemoryUsageLimitPercent");
        static const int MaxStackDepth_HASH = HashingUtils::HashString("MaxStackDepth");


        AgentParameterField GetAgentParameterFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SamplingIntervalInMilliseconds_HASH)
          {
            return AgentParameterField::SamplingIntervalInMilliseconds;
          }
          else if (hashCode == ReportingIntervalInMilliseconds_HASH)
          {
            return AgentParameterField::ReportingIntervalInMilliseconds;
          }
          else if (hashCode == MinimumTimeForReportingInMilliseconds_HASH)
          {
            return AgentParameterField::MinimumTimeForReportingInMilliseconds;
          }
          else if (hashCode == MemoryUsageLimitPercent_HASH)
          {
            return AgentParameterField::MemoryUsageLimitPercent;
          }
          else if (hashCode == MaxStackDepth_HASH)
          {
            return AgentParameterField::MaxStackDepth;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentParameterField>(hashCode);
          }

          return AgentParameterField::NOT_SET;
        }

        Aws::String GetNameForAgentParameterField(AgentParameterField enumValue)
        {
          switch(enumValue)
          {
          case AgentParameterField::SamplingIntervalInMilliseconds:
            return "SamplingIntervalInMilliseconds";
          case AgentParameterField::ReportingIntervalInMilliseconds:
            return "ReportingIntervalInMilliseconds";
          case AgentParameterField::MinimumTimeForReportingInMilliseconds:
            return "MinimumTimeForReportingInMilliseconds";
          case AgentParameterField::MemoryUsageLimitPercent:
            return "MemoryUsageLimitPercent";
          case AgentParameterField::MaxStackDepth:
            return "MaxStackDepth";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentParameterFieldMapper
    } // namespace Model
  } // namespace CodeGuruProfiler
} // namespace Aws
