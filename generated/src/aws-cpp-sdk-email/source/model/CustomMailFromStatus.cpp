/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CustomMailFromStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace CustomMailFromStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t TemporaryFailure_HASH = ConstExprHashingUtils::HashString("TemporaryFailure");


        CustomMailFromStatus GetCustomMailFromStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return CustomMailFromStatus::Pending;
          }
          else if (hashCode == Success_HASH)
          {
            return CustomMailFromStatus::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return CustomMailFromStatus::Failed;
          }
          else if (hashCode == TemporaryFailure_HASH)
          {
            return CustomMailFromStatus::TemporaryFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomMailFromStatus>(hashCode);
          }

          return CustomMailFromStatus::NOT_SET;
        }

        Aws::String GetNameForCustomMailFromStatus(CustomMailFromStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomMailFromStatus::NOT_SET:
            return {};
          case CustomMailFromStatus::Pending:
            return "Pending";
          case CustomMailFromStatus::Success:
            return "Success";
          case CustomMailFromStatus::Failed:
            return "Failed";
          case CustomMailFromStatus::TemporaryFailure:
            return "TemporaryFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomMailFromStatusMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
