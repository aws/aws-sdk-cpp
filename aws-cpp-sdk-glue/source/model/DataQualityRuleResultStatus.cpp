/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityRuleResultStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace DataQualityRuleResultStatusMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        DataQualityRuleResultStatus GetDataQualityRuleResultStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return DataQualityRuleResultStatus::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return DataQualityRuleResultStatus::FAIL;
          }
          else if (hashCode == ERROR__HASH)
          {
            return DataQualityRuleResultStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataQualityRuleResultStatus>(hashCode);
          }

          return DataQualityRuleResultStatus::NOT_SET;
        }

        Aws::String GetNameForDataQualityRuleResultStatus(DataQualityRuleResultStatus enumValue)
        {
          switch(enumValue)
          {
          case DataQualityRuleResultStatus::PASS:
            return "PASS";
          case DataQualityRuleResultStatus::FAIL:
            return "FAIL";
          case DataQualityRuleResultStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataQualityRuleResultStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
