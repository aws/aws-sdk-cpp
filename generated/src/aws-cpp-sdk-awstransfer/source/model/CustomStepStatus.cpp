/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CustomStepStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace CustomStepStatusMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t FAILURE_HASH = ConstExprHashingUtils::HashString("FAILURE");


        CustomStepStatus GetCustomStepStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return CustomStepStatus::SUCCESS;
          }
          else if (hashCode == FAILURE_HASH)
          {
            return CustomStepStatus::FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomStepStatus>(hashCode);
          }

          return CustomStepStatus::NOT_SET;
        }

        Aws::String GetNameForCustomStepStatus(CustomStepStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomStepStatus::NOT_SET:
            return {};
          case CustomStepStatus::SUCCESS:
            return "SUCCESS";
          case CustomStepStatus::FAILURE:
            return "FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomStepStatusMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
