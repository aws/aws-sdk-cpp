/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/InsightStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace InsightStatusMapper
      {

        static constexpr uint32_t ONGOING_HASH = ConstExprHashingUtils::HashString("ONGOING");
        static constexpr uint32_t CLOSED_HASH = ConstExprHashingUtils::HashString("CLOSED");


        InsightStatus GetInsightStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONGOING_HASH)
          {
            return InsightStatus::ONGOING;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return InsightStatus::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightStatus>(hashCode);
          }

          return InsightStatus::NOT_SET;
        }

        Aws::String GetNameForInsightStatus(InsightStatus enumValue)
        {
          switch(enumValue)
          {
          case InsightStatus::NOT_SET:
            return {};
          case InsightStatus::ONGOING:
            return "ONGOING";
          case InsightStatus::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightStatusMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
