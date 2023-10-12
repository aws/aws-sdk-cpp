/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AnalyzerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace AnalyzerStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        AnalyzerStatus GetAnalyzerStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AnalyzerStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return AnalyzerStatus::CREATING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AnalyzerStatus::DISABLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AnalyzerStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyzerStatus>(hashCode);
          }

          return AnalyzerStatus::NOT_SET;
        }

        Aws::String GetNameForAnalyzerStatus(AnalyzerStatus enumValue)
        {
          switch(enumValue)
          {
          case AnalyzerStatus::NOT_SET:
            return {};
          case AnalyzerStatus::ACTIVE:
            return "ACTIVE";
          case AnalyzerStatus::CREATING:
            return "CREATING";
          case AnalyzerStatus::DISABLED:
            return "DISABLED";
          case AnalyzerStatus::FAILED:
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

      } // namespace AnalyzerStatusMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
