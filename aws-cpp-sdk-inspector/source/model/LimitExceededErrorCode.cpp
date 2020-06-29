/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/LimitExceededErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace LimitExceededErrorCodeMapper
      {

        static const int ASSESSMENT_TARGET_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ASSESSMENT_TARGET_LIMIT_EXCEEDED");
        static const int ASSESSMENT_TEMPLATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ASSESSMENT_TEMPLATE_LIMIT_EXCEEDED");
        static const int ASSESSMENT_RUN_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ASSESSMENT_RUN_LIMIT_EXCEEDED");
        static const int RESOURCE_GROUP_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RESOURCE_GROUP_LIMIT_EXCEEDED");
        static const int EVENT_SUBSCRIPTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("EVENT_SUBSCRIPTION_LIMIT_EXCEEDED");


        LimitExceededErrorCode GetLimitExceededErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSESSMENT_TARGET_LIMIT_EXCEEDED_HASH)
          {
            return LimitExceededErrorCode::ASSESSMENT_TARGET_LIMIT_EXCEEDED;
          }
          else if (hashCode == ASSESSMENT_TEMPLATE_LIMIT_EXCEEDED_HASH)
          {
            return LimitExceededErrorCode::ASSESSMENT_TEMPLATE_LIMIT_EXCEEDED;
          }
          else if (hashCode == ASSESSMENT_RUN_LIMIT_EXCEEDED_HASH)
          {
            return LimitExceededErrorCode::ASSESSMENT_RUN_LIMIT_EXCEEDED;
          }
          else if (hashCode == RESOURCE_GROUP_LIMIT_EXCEEDED_HASH)
          {
            return LimitExceededErrorCode::RESOURCE_GROUP_LIMIT_EXCEEDED;
          }
          else if (hashCode == EVENT_SUBSCRIPTION_LIMIT_EXCEEDED_HASH)
          {
            return LimitExceededErrorCode::EVENT_SUBSCRIPTION_LIMIT_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LimitExceededErrorCode>(hashCode);
          }

          return LimitExceededErrorCode::NOT_SET;
        }

        Aws::String GetNameForLimitExceededErrorCode(LimitExceededErrorCode enumValue)
        {
          switch(enumValue)
          {
          case LimitExceededErrorCode::ASSESSMENT_TARGET_LIMIT_EXCEEDED:
            return "ASSESSMENT_TARGET_LIMIT_EXCEEDED";
          case LimitExceededErrorCode::ASSESSMENT_TEMPLATE_LIMIT_EXCEEDED:
            return "ASSESSMENT_TEMPLATE_LIMIT_EXCEEDED";
          case LimitExceededErrorCode::ASSESSMENT_RUN_LIMIT_EXCEEDED:
            return "ASSESSMENT_RUN_LIMIT_EXCEEDED";
          case LimitExceededErrorCode::RESOURCE_GROUP_LIMIT_EXCEEDED:
            return "RESOURCE_GROUP_LIMIT_EXCEEDED";
          case LimitExceededErrorCode::EVENT_SUBSCRIPTION_LIMIT_EXCEEDED:
            return "EVENT_SUBSCRIPTION_LIMIT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LimitExceededErrorCodeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
