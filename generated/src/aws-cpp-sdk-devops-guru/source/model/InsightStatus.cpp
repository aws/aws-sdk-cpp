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

        static const int ONGOING_HASH = HashingUtils::HashString("ONGOING");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        InsightStatus GetInsightStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
