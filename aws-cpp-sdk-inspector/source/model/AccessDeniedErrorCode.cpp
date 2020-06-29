/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AccessDeniedErrorCode.h>
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
      namespace AccessDeniedErrorCodeMapper
      {

        static const int ACCESS_DENIED_TO_ASSESSMENT_TARGET_HASH = HashingUtils::HashString("ACCESS_DENIED_TO_ASSESSMENT_TARGET");
        static const int ACCESS_DENIED_TO_ASSESSMENT_TEMPLATE_HASH = HashingUtils::HashString("ACCESS_DENIED_TO_ASSESSMENT_TEMPLATE");
        static const int ACCESS_DENIED_TO_ASSESSMENT_RUN_HASH = HashingUtils::HashString("ACCESS_DENIED_TO_ASSESSMENT_RUN");
        static const int ACCESS_DENIED_TO_FINDING_HASH = HashingUtils::HashString("ACCESS_DENIED_TO_FINDING");
        static const int ACCESS_DENIED_TO_RESOURCE_GROUP_HASH = HashingUtils::HashString("ACCESS_DENIED_TO_RESOURCE_GROUP");
        static const int ACCESS_DENIED_TO_RULES_PACKAGE_HASH = HashingUtils::HashString("ACCESS_DENIED_TO_RULES_PACKAGE");
        static const int ACCESS_DENIED_TO_SNS_TOPIC_HASH = HashingUtils::HashString("ACCESS_DENIED_TO_SNS_TOPIC");
        static const int ACCESS_DENIED_TO_IAM_ROLE_HASH = HashingUtils::HashString("ACCESS_DENIED_TO_IAM_ROLE");


        AccessDeniedErrorCode GetAccessDeniedErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_TO_ASSESSMENT_TARGET_HASH)
          {
            return AccessDeniedErrorCode::ACCESS_DENIED_TO_ASSESSMENT_TARGET;
          }
          else if (hashCode == ACCESS_DENIED_TO_ASSESSMENT_TEMPLATE_HASH)
          {
            return AccessDeniedErrorCode::ACCESS_DENIED_TO_ASSESSMENT_TEMPLATE;
          }
          else if (hashCode == ACCESS_DENIED_TO_ASSESSMENT_RUN_HASH)
          {
            return AccessDeniedErrorCode::ACCESS_DENIED_TO_ASSESSMENT_RUN;
          }
          else if (hashCode == ACCESS_DENIED_TO_FINDING_HASH)
          {
            return AccessDeniedErrorCode::ACCESS_DENIED_TO_FINDING;
          }
          else if (hashCode == ACCESS_DENIED_TO_RESOURCE_GROUP_HASH)
          {
            return AccessDeniedErrorCode::ACCESS_DENIED_TO_RESOURCE_GROUP;
          }
          else if (hashCode == ACCESS_DENIED_TO_RULES_PACKAGE_HASH)
          {
            return AccessDeniedErrorCode::ACCESS_DENIED_TO_RULES_PACKAGE;
          }
          else if (hashCode == ACCESS_DENIED_TO_SNS_TOPIC_HASH)
          {
            return AccessDeniedErrorCode::ACCESS_DENIED_TO_SNS_TOPIC;
          }
          else if (hashCode == ACCESS_DENIED_TO_IAM_ROLE_HASH)
          {
            return AccessDeniedErrorCode::ACCESS_DENIED_TO_IAM_ROLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessDeniedErrorCode>(hashCode);
          }

          return AccessDeniedErrorCode::NOT_SET;
        }

        Aws::String GetNameForAccessDeniedErrorCode(AccessDeniedErrorCode enumValue)
        {
          switch(enumValue)
          {
          case AccessDeniedErrorCode::ACCESS_DENIED_TO_ASSESSMENT_TARGET:
            return "ACCESS_DENIED_TO_ASSESSMENT_TARGET";
          case AccessDeniedErrorCode::ACCESS_DENIED_TO_ASSESSMENT_TEMPLATE:
            return "ACCESS_DENIED_TO_ASSESSMENT_TEMPLATE";
          case AccessDeniedErrorCode::ACCESS_DENIED_TO_ASSESSMENT_RUN:
            return "ACCESS_DENIED_TO_ASSESSMENT_RUN";
          case AccessDeniedErrorCode::ACCESS_DENIED_TO_FINDING:
            return "ACCESS_DENIED_TO_FINDING";
          case AccessDeniedErrorCode::ACCESS_DENIED_TO_RESOURCE_GROUP:
            return "ACCESS_DENIED_TO_RESOURCE_GROUP";
          case AccessDeniedErrorCode::ACCESS_DENIED_TO_RULES_PACKAGE:
            return "ACCESS_DENIED_TO_RULES_PACKAGE";
          case AccessDeniedErrorCode::ACCESS_DENIED_TO_SNS_TOPIC:
            return "ACCESS_DENIED_TO_SNS_TOPIC";
          case AccessDeniedErrorCode::ACCESS_DENIED_TO_IAM_ROLE:
            return "ACCESS_DENIED_TO_IAM_ROLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessDeniedErrorCodeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
