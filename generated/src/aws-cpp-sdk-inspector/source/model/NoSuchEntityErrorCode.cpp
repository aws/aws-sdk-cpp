/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/NoSuchEntityErrorCode.h>
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
      namespace NoSuchEntityErrorCodeMapper
      {

        static constexpr uint32_t ASSESSMENT_TARGET_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ASSESSMENT_TARGET_DOES_NOT_EXIST");
        static constexpr uint32_t ASSESSMENT_TEMPLATE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ASSESSMENT_TEMPLATE_DOES_NOT_EXIST");
        static constexpr uint32_t ASSESSMENT_RUN_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("ASSESSMENT_RUN_DOES_NOT_EXIST");
        static constexpr uint32_t FINDING_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("FINDING_DOES_NOT_EXIST");
        static constexpr uint32_t RESOURCE_GROUP_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("RESOURCE_GROUP_DOES_NOT_EXIST");
        static constexpr uint32_t RULES_PACKAGE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("RULES_PACKAGE_DOES_NOT_EXIST");
        static constexpr uint32_t SNS_TOPIC_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("SNS_TOPIC_DOES_NOT_EXIST");
        static constexpr uint32_t IAM_ROLE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("IAM_ROLE_DOES_NOT_EXIST");


        NoSuchEntityErrorCode GetNoSuchEntityErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSESSMENT_TARGET_DOES_NOT_EXIST_HASH)
          {
            return NoSuchEntityErrorCode::ASSESSMENT_TARGET_DOES_NOT_EXIST;
          }
          else if (hashCode == ASSESSMENT_TEMPLATE_DOES_NOT_EXIST_HASH)
          {
            return NoSuchEntityErrorCode::ASSESSMENT_TEMPLATE_DOES_NOT_EXIST;
          }
          else if (hashCode == ASSESSMENT_RUN_DOES_NOT_EXIST_HASH)
          {
            return NoSuchEntityErrorCode::ASSESSMENT_RUN_DOES_NOT_EXIST;
          }
          else if (hashCode == FINDING_DOES_NOT_EXIST_HASH)
          {
            return NoSuchEntityErrorCode::FINDING_DOES_NOT_EXIST;
          }
          else if (hashCode == RESOURCE_GROUP_DOES_NOT_EXIST_HASH)
          {
            return NoSuchEntityErrorCode::RESOURCE_GROUP_DOES_NOT_EXIST;
          }
          else if (hashCode == RULES_PACKAGE_DOES_NOT_EXIST_HASH)
          {
            return NoSuchEntityErrorCode::RULES_PACKAGE_DOES_NOT_EXIST;
          }
          else if (hashCode == SNS_TOPIC_DOES_NOT_EXIST_HASH)
          {
            return NoSuchEntityErrorCode::SNS_TOPIC_DOES_NOT_EXIST;
          }
          else if (hashCode == IAM_ROLE_DOES_NOT_EXIST_HASH)
          {
            return NoSuchEntityErrorCode::IAM_ROLE_DOES_NOT_EXIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NoSuchEntityErrorCode>(hashCode);
          }

          return NoSuchEntityErrorCode::NOT_SET;
        }

        Aws::String GetNameForNoSuchEntityErrorCode(NoSuchEntityErrorCode enumValue)
        {
          switch(enumValue)
          {
          case NoSuchEntityErrorCode::NOT_SET:
            return {};
          case NoSuchEntityErrorCode::ASSESSMENT_TARGET_DOES_NOT_EXIST:
            return "ASSESSMENT_TARGET_DOES_NOT_EXIST";
          case NoSuchEntityErrorCode::ASSESSMENT_TEMPLATE_DOES_NOT_EXIST:
            return "ASSESSMENT_TEMPLATE_DOES_NOT_EXIST";
          case NoSuchEntityErrorCode::ASSESSMENT_RUN_DOES_NOT_EXIST:
            return "ASSESSMENT_RUN_DOES_NOT_EXIST";
          case NoSuchEntityErrorCode::FINDING_DOES_NOT_EXIST:
            return "FINDING_DOES_NOT_EXIST";
          case NoSuchEntityErrorCode::RESOURCE_GROUP_DOES_NOT_EXIST:
            return "RESOURCE_GROUP_DOES_NOT_EXIST";
          case NoSuchEntityErrorCode::RULES_PACKAGE_DOES_NOT_EXIST:
            return "RULES_PACKAGE_DOES_NOT_EXIST";
          case NoSuchEntityErrorCode::SNS_TOPIC_DOES_NOT_EXIST:
            return "SNS_TOPIC_DOES_NOT_EXIST";
          case NoSuchEntityErrorCode::IAM_ROLE_DOES_NOT_EXIST:
            return "IAM_ROLE_DOES_NOT_EXIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NoSuchEntityErrorCodeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
