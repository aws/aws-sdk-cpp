/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/InvalidInputErrorCode.h>
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
      namespace InvalidInputErrorCodeMapper
      {

        static constexpr uint32_t INVALID_ASSESSMENT_TARGET_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_TARGET_ARN");
        static constexpr uint32_t INVALID_ASSESSMENT_TEMPLATE_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_ARN");
        static constexpr uint32_t INVALID_ASSESSMENT_RUN_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_RUN_ARN");
        static constexpr uint32_t INVALID_FINDING_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_FINDING_ARN");
        static constexpr uint32_t INVALID_RESOURCE_GROUP_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_RESOURCE_GROUP_ARN");
        static constexpr uint32_t INVALID_RULES_PACKAGE_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_RULES_PACKAGE_ARN");
        static constexpr uint32_t INVALID_RESOURCE_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_RESOURCE_ARN");
        static constexpr uint32_t INVALID_SNS_TOPIC_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_SNS_TOPIC_ARN");
        static constexpr uint32_t INVALID_IAM_ROLE_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_IAM_ROLE_ARN");
        static constexpr uint32_t INVALID_ASSESSMENT_TARGET_NAME_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_TARGET_NAME");
        static constexpr uint32_t INVALID_ASSESSMENT_TARGET_NAME_PATTERN_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_TARGET_NAME_PATTERN");
        static constexpr uint32_t INVALID_ASSESSMENT_TEMPLATE_NAME_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_NAME");
        static constexpr uint32_t INVALID_ASSESSMENT_TEMPLATE_NAME_PATTERN_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_NAME_PATTERN");
        static constexpr uint32_t INVALID_ASSESSMENT_TEMPLATE_DURATION_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_DURATION");
        static constexpr uint32_t INVALID_ASSESSMENT_TEMPLATE_DURATION_RANGE_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_DURATION_RANGE");
        static constexpr uint32_t INVALID_ASSESSMENT_RUN_DURATION_RANGE_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_RUN_DURATION_RANGE");
        static constexpr uint32_t INVALID_ASSESSMENT_RUN_START_TIME_RANGE_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_RUN_START_TIME_RANGE");
        static constexpr uint32_t INVALID_ASSESSMENT_RUN_COMPLETION_TIME_RANGE_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_RUN_COMPLETION_TIME_RANGE");
        static constexpr uint32_t INVALID_ASSESSMENT_RUN_STATE_CHANGE_TIME_RANGE_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_RUN_STATE_CHANGE_TIME_RANGE");
        static constexpr uint32_t INVALID_ASSESSMENT_RUN_STATE_HASH = ConstExprHashingUtils::HashString("INVALID_ASSESSMENT_RUN_STATE");
        static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("INVALID_TAG");
        static constexpr uint32_t INVALID_TAG_KEY_HASH = ConstExprHashingUtils::HashString("INVALID_TAG_KEY");
        static constexpr uint32_t INVALID_TAG_VALUE_HASH = ConstExprHashingUtils::HashString("INVALID_TAG_VALUE");
        static constexpr uint32_t INVALID_RESOURCE_GROUP_TAG_KEY_HASH = ConstExprHashingUtils::HashString("INVALID_RESOURCE_GROUP_TAG_KEY");
        static constexpr uint32_t INVALID_RESOURCE_GROUP_TAG_VALUE_HASH = ConstExprHashingUtils::HashString("INVALID_RESOURCE_GROUP_TAG_VALUE");
        static constexpr uint32_t INVALID_ATTRIBUTE_HASH = ConstExprHashingUtils::HashString("INVALID_ATTRIBUTE");
        static constexpr uint32_t INVALID_USER_ATTRIBUTE_HASH = ConstExprHashingUtils::HashString("INVALID_USER_ATTRIBUTE");
        static constexpr uint32_t INVALID_USER_ATTRIBUTE_KEY_HASH = ConstExprHashingUtils::HashString("INVALID_USER_ATTRIBUTE_KEY");
        static constexpr uint32_t INVALID_USER_ATTRIBUTE_VALUE_HASH = ConstExprHashingUtils::HashString("INVALID_USER_ATTRIBUTE_VALUE");
        static constexpr uint32_t INVALID_PAGINATION_TOKEN_HASH = ConstExprHashingUtils::HashString("INVALID_PAGINATION_TOKEN");
        static constexpr uint32_t INVALID_MAX_RESULTS_HASH = ConstExprHashingUtils::HashString("INVALID_MAX_RESULTS");
        static constexpr uint32_t INVALID_AGENT_ID_HASH = ConstExprHashingUtils::HashString("INVALID_AGENT_ID");
        static constexpr uint32_t INVALID_AUTO_SCALING_GROUP_HASH = ConstExprHashingUtils::HashString("INVALID_AUTO_SCALING_GROUP");
        static constexpr uint32_t INVALID_RULE_NAME_HASH = ConstExprHashingUtils::HashString("INVALID_RULE_NAME");
        static constexpr uint32_t INVALID_SEVERITY_HASH = ConstExprHashingUtils::HashString("INVALID_SEVERITY");
        static constexpr uint32_t INVALID_LOCALE_HASH = ConstExprHashingUtils::HashString("INVALID_LOCALE");
        static constexpr uint32_t INVALID_EVENT_HASH = ConstExprHashingUtils::HashString("INVALID_EVENT");
        static constexpr uint32_t ASSESSMENT_TARGET_NAME_ALREADY_TAKEN_HASH = ConstExprHashingUtils::HashString("ASSESSMENT_TARGET_NAME_ALREADY_TAKEN");
        static constexpr uint32_t ASSESSMENT_TEMPLATE_NAME_ALREADY_TAKEN_HASH = ConstExprHashingUtils::HashString("ASSESSMENT_TEMPLATE_NAME_ALREADY_TAKEN");
        static constexpr uint32_t INVALID_NUMBER_OF_ASSESSMENT_TARGET_ARNS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_ASSESSMENT_TARGET_ARNS");
        static constexpr uint32_t INVALID_NUMBER_OF_ASSESSMENT_TEMPLATE_ARNS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_ASSESSMENT_TEMPLATE_ARNS");
        static constexpr uint32_t INVALID_NUMBER_OF_ASSESSMENT_RUN_ARNS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_ASSESSMENT_RUN_ARNS");
        static constexpr uint32_t INVALID_NUMBER_OF_FINDING_ARNS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_FINDING_ARNS");
        static constexpr uint32_t INVALID_NUMBER_OF_RESOURCE_GROUP_ARNS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_RESOURCE_GROUP_ARNS");
        static constexpr uint32_t INVALID_NUMBER_OF_RULES_PACKAGE_ARNS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_RULES_PACKAGE_ARNS");
        static constexpr uint32_t INVALID_NUMBER_OF_ASSESSMENT_RUN_STATES_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_ASSESSMENT_RUN_STATES");
        static constexpr uint32_t INVALID_NUMBER_OF_TAGS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_TAGS");
        static constexpr uint32_t INVALID_NUMBER_OF_RESOURCE_GROUP_TAGS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_RESOURCE_GROUP_TAGS");
        static constexpr uint32_t INVALID_NUMBER_OF_ATTRIBUTES_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_ATTRIBUTES");
        static constexpr uint32_t INVALID_NUMBER_OF_USER_ATTRIBUTES_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_USER_ATTRIBUTES");
        static constexpr uint32_t INVALID_NUMBER_OF_AGENT_IDS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_AGENT_IDS");
        static constexpr uint32_t INVALID_NUMBER_OF_AUTO_SCALING_GROUPS_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_AUTO_SCALING_GROUPS");
        static constexpr uint32_t INVALID_NUMBER_OF_RULE_NAMES_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_RULE_NAMES");
        static constexpr uint32_t INVALID_NUMBER_OF_SEVERITIES_HASH = ConstExprHashingUtils::HashString("INVALID_NUMBER_OF_SEVERITIES");


        InvalidInputErrorCode GetInvalidInputErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_ASSESSMENT_TARGET_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_TARGET_ARN;
          }
          else if (hashCode == INVALID_ASSESSMENT_TEMPLATE_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_ARN;
          }
          else if (hashCode == INVALID_ASSESSMENT_RUN_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_ARN;
          }
          else if (hashCode == INVALID_FINDING_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_FINDING_ARN;
          }
          else if (hashCode == INVALID_RESOURCE_GROUP_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_RESOURCE_GROUP_ARN;
          }
          else if (hashCode == INVALID_RULES_PACKAGE_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_RULES_PACKAGE_ARN;
          }
          else if (hashCode == INVALID_RESOURCE_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_RESOURCE_ARN;
          }
          else if (hashCode == INVALID_SNS_TOPIC_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_SNS_TOPIC_ARN;
          }
          else if (hashCode == INVALID_IAM_ROLE_ARN_HASH)
          {
            return InvalidInputErrorCode::INVALID_IAM_ROLE_ARN;
          }
          else if (hashCode == INVALID_ASSESSMENT_TARGET_NAME_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_TARGET_NAME;
          }
          else if (hashCode == INVALID_ASSESSMENT_TARGET_NAME_PATTERN_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_TARGET_NAME_PATTERN;
          }
          else if (hashCode == INVALID_ASSESSMENT_TEMPLATE_NAME_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_NAME;
          }
          else if (hashCode == INVALID_ASSESSMENT_TEMPLATE_NAME_PATTERN_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_NAME_PATTERN;
          }
          else if (hashCode == INVALID_ASSESSMENT_TEMPLATE_DURATION_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_DURATION;
          }
          else if (hashCode == INVALID_ASSESSMENT_TEMPLATE_DURATION_RANGE_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_DURATION_RANGE;
          }
          else if (hashCode == INVALID_ASSESSMENT_RUN_DURATION_RANGE_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_DURATION_RANGE;
          }
          else if (hashCode == INVALID_ASSESSMENT_RUN_START_TIME_RANGE_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_START_TIME_RANGE;
          }
          else if (hashCode == INVALID_ASSESSMENT_RUN_COMPLETION_TIME_RANGE_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_COMPLETION_TIME_RANGE;
          }
          else if (hashCode == INVALID_ASSESSMENT_RUN_STATE_CHANGE_TIME_RANGE_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_STATE_CHANGE_TIME_RANGE;
          }
          else if (hashCode == INVALID_ASSESSMENT_RUN_STATE_HASH)
          {
            return InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_STATE;
          }
          else if (hashCode == INVALID_TAG_HASH)
          {
            return InvalidInputErrorCode::INVALID_TAG;
          }
          else if (hashCode == INVALID_TAG_KEY_HASH)
          {
            return InvalidInputErrorCode::INVALID_TAG_KEY;
          }
          else if (hashCode == INVALID_TAG_VALUE_HASH)
          {
            return InvalidInputErrorCode::INVALID_TAG_VALUE;
          }
          else if (hashCode == INVALID_RESOURCE_GROUP_TAG_KEY_HASH)
          {
            return InvalidInputErrorCode::INVALID_RESOURCE_GROUP_TAG_KEY;
          }
          else if (hashCode == INVALID_RESOURCE_GROUP_TAG_VALUE_HASH)
          {
            return InvalidInputErrorCode::INVALID_RESOURCE_GROUP_TAG_VALUE;
          }
          else if (hashCode == INVALID_ATTRIBUTE_HASH)
          {
            return InvalidInputErrorCode::INVALID_ATTRIBUTE;
          }
          else if (hashCode == INVALID_USER_ATTRIBUTE_HASH)
          {
            return InvalidInputErrorCode::INVALID_USER_ATTRIBUTE;
          }
          else if (hashCode == INVALID_USER_ATTRIBUTE_KEY_HASH)
          {
            return InvalidInputErrorCode::INVALID_USER_ATTRIBUTE_KEY;
          }
          else if (hashCode == INVALID_USER_ATTRIBUTE_VALUE_HASH)
          {
            return InvalidInputErrorCode::INVALID_USER_ATTRIBUTE_VALUE;
          }
          else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
          {
            return InvalidInputErrorCode::INVALID_PAGINATION_TOKEN;
          }
          else if (hashCode == INVALID_MAX_RESULTS_HASH)
          {
            return InvalidInputErrorCode::INVALID_MAX_RESULTS;
          }
          else if (hashCode == INVALID_AGENT_ID_HASH)
          {
            return InvalidInputErrorCode::INVALID_AGENT_ID;
          }
          else if (hashCode == INVALID_AUTO_SCALING_GROUP_HASH)
          {
            return InvalidInputErrorCode::INVALID_AUTO_SCALING_GROUP;
          }
          else if (hashCode == INVALID_RULE_NAME_HASH)
          {
            return InvalidInputErrorCode::INVALID_RULE_NAME;
          }
          else if (hashCode == INVALID_SEVERITY_HASH)
          {
            return InvalidInputErrorCode::INVALID_SEVERITY;
          }
          else if (hashCode == INVALID_LOCALE_HASH)
          {
            return InvalidInputErrorCode::INVALID_LOCALE;
          }
          else if (hashCode == INVALID_EVENT_HASH)
          {
            return InvalidInputErrorCode::INVALID_EVENT;
          }
          else if (hashCode == ASSESSMENT_TARGET_NAME_ALREADY_TAKEN_HASH)
          {
            return InvalidInputErrorCode::ASSESSMENT_TARGET_NAME_ALREADY_TAKEN;
          }
          else if (hashCode == ASSESSMENT_TEMPLATE_NAME_ALREADY_TAKEN_HASH)
          {
            return InvalidInputErrorCode::ASSESSMENT_TEMPLATE_NAME_ALREADY_TAKEN;
          }
          else if (hashCode == INVALID_NUMBER_OF_ASSESSMENT_TARGET_ARNS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_ASSESSMENT_TARGET_ARNS;
          }
          else if (hashCode == INVALID_NUMBER_OF_ASSESSMENT_TEMPLATE_ARNS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_ASSESSMENT_TEMPLATE_ARNS;
          }
          else if (hashCode == INVALID_NUMBER_OF_ASSESSMENT_RUN_ARNS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_ASSESSMENT_RUN_ARNS;
          }
          else if (hashCode == INVALID_NUMBER_OF_FINDING_ARNS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_FINDING_ARNS;
          }
          else if (hashCode == INVALID_NUMBER_OF_RESOURCE_GROUP_ARNS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_RESOURCE_GROUP_ARNS;
          }
          else if (hashCode == INVALID_NUMBER_OF_RULES_PACKAGE_ARNS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_RULES_PACKAGE_ARNS;
          }
          else if (hashCode == INVALID_NUMBER_OF_ASSESSMENT_RUN_STATES_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_ASSESSMENT_RUN_STATES;
          }
          else if (hashCode == INVALID_NUMBER_OF_TAGS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_TAGS;
          }
          else if (hashCode == INVALID_NUMBER_OF_RESOURCE_GROUP_TAGS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_RESOURCE_GROUP_TAGS;
          }
          else if (hashCode == INVALID_NUMBER_OF_ATTRIBUTES_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_ATTRIBUTES;
          }
          else if (hashCode == INVALID_NUMBER_OF_USER_ATTRIBUTES_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_USER_ATTRIBUTES;
          }
          else if (hashCode == INVALID_NUMBER_OF_AGENT_IDS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_AGENT_IDS;
          }
          else if (hashCode == INVALID_NUMBER_OF_AUTO_SCALING_GROUPS_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_AUTO_SCALING_GROUPS;
          }
          else if (hashCode == INVALID_NUMBER_OF_RULE_NAMES_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_RULE_NAMES;
          }
          else if (hashCode == INVALID_NUMBER_OF_SEVERITIES_HASH)
          {
            return InvalidInputErrorCode::INVALID_NUMBER_OF_SEVERITIES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvalidInputErrorCode>(hashCode);
          }

          return InvalidInputErrorCode::NOT_SET;
        }

        Aws::String GetNameForInvalidInputErrorCode(InvalidInputErrorCode enumValue)
        {
          switch(enumValue)
          {
          case InvalidInputErrorCode::NOT_SET:
            return {};
          case InvalidInputErrorCode::INVALID_ASSESSMENT_TARGET_ARN:
            return "INVALID_ASSESSMENT_TARGET_ARN";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_ARN:
            return "INVALID_ASSESSMENT_TEMPLATE_ARN";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_ARN:
            return "INVALID_ASSESSMENT_RUN_ARN";
          case InvalidInputErrorCode::INVALID_FINDING_ARN:
            return "INVALID_FINDING_ARN";
          case InvalidInputErrorCode::INVALID_RESOURCE_GROUP_ARN:
            return "INVALID_RESOURCE_GROUP_ARN";
          case InvalidInputErrorCode::INVALID_RULES_PACKAGE_ARN:
            return "INVALID_RULES_PACKAGE_ARN";
          case InvalidInputErrorCode::INVALID_RESOURCE_ARN:
            return "INVALID_RESOURCE_ARN";
          case InvalidInputErrorCode::INVALID_SNS_TOPIC_ARN:
            return "INVALID_SNS_TOPIC_ARN";
          case InvalidInputErrorCode::INVALID_IAM_ROLE_ARN:
            return "INVALID_IAM_ROLE_ARN";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_TARGET_NAME:
            return "INVALID_ASSESSMENT_TARGET_NAME";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_TARGET_NAME_PATTERN:
            return "INVALID_ASSESSMENT_TARGET_NAME_PATTERN";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_NAME:
            return "INVALID_ASSESSMENT_TEMPLATE_NAME";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_NAME_PATTERN:
            return "INVALID_ASSESSMENT_TEMPLATE_NAME_PATTERN";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_DURATION:
            return "INVALID_ASSESSMENT_TEMPLATE_DURATION";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_TEMPLATE_DURATION_RANGE:
            return "INVALID_ASSESSMENT_TEMPLATE_DURATION_RANGE";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_DURATION_RANGE:
            return "INVALID_ASSESSMENT_RUN_DURATION_RANGE";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_START_TIME_RANGE:
            return "INVALID_ASSESSMENT_RUN_START_TIME_RANGE";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_COMPLETION_TIME_RANGE:
            return "INVALID_ASSESSMENT_RUN_COMPLETION_TIME_RANGE";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_STATE_CHANGE_TIME_RANGE:
            return "INVALID_ASSESSMENT_RUN_STATE_CHANGE_TIME_RANGE";
          case InvalidInputErrorCode::INVALID_ASSESSMENT_RUN_STATE:
            return "INVALID_ASSESSMENT_RUN_STATE";
          case InvalidInputErrorCode::INVALID_TAG:
            return "INVALID_TAG";
          case InvalidInputErrorCode::INVALID_TAG_KEY:
            return "INVALID_TAG_KEY";
          case InvalidInputErrorCode::INVALID_TAG_VALUE:
            return "INVALID_TAG_VALUE";
          case InvalidInputErrorCode::INVALID_RESOURCE_GROUP_TAG_KEY:
            return "INVALID_RESOURCE_GROUP_TAG_KEY";
          case InvalidInputErrorCode::INVALID_RESOURCE_GROUP_TAG_VALUE:
            return "INVALID_RESOURCE_GROUP_TAG_VALUE";
          case InvalidInputErrorCode::INVALID_ATTRIBUTE:
            return "INVALID_ATTRIBUTE";
          case InvalidInputErrorCode::INVALID_USER_ATTRIBUTE:
            return "INVALID_USER_ATTRIBUTE";
          case InvalidInputErrorCode::INVALID_USER_ATTRIBUTE_KEY:
            return "INVALID_USER_ATTRIBUTE_KEY";
          case InvalidInputErrorCode::INVALID_USER_ATTRIBUTE_VALUE:
            return "INVALID_USER_ATTRIBUTE_VALUE";
          case InvalidInputErrorCode::INVALID_PAGINATION_TOKEN:
            return "INVALID_PAGINATION_TOKEN";
          case InvalidInputErrorCode::INVALID_MAX_RESULTS:
            return "INVALID_MAX_RESULTS";
          case InvalidInputErrorCode::INVALID_AGENT_ID:
            return "INVALID_AGENT_ID";
          case InvalidInputErrorCode::INVALID_AUTO_SCALING_GROUP:
            return "INVALID_AUTO_SCALING_GROUP";
          case InvalidInputErrorCode::INVALID_RULE_NAME:
            return "INVALID_RULE_NAME";
          case InvalidInputErrorCode::INVALID_SEVERITY:
            return "INVALID_SEVERITY";
          case InvalidInputErrorCode::INVALID_LOCALE:
            return "INVALID_LOCALE";
          case InvalidInputErrorCode::INVALID_EVENT:
            return "INVALID_EVENT";
          case InvalidInputErrorCode::ASSESSMENT_TARGET_NAME_ALREADY_TAKEN:
            return "ASSESSMENT_TARGET_NAME_ALREADY_TAKEN";
          case InvalidInputErrorCode::ASSESSMENT_TEMPLATE_NAME_ALREADY_TAKEN:
            return "ASSESSMENT_TEMPLATE_NAME_ALREADY_TAKEN";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_ASSESSMENT_TARGET_ARNS:
            return "INVALID_NUMBER_OF_ASSESSMENT_TARGET_ARNS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_ASSESSMENT_TEMPLATE_ARNS:
            return "INVALID_NUMBER_OF_ASSESSMENT_TEMPLATE_ARNS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_ASSESSMENT_RUN_ARNS:
            return "INVALID_NUMBER_OF_ASSESSMENT_RUN_ARNS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_FINDING_ARNS:
            return "INVALID_NUMBER_OF_FINDING_ARNS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_RESOURCE_GROUP_ARNS:
            return "INVALID_NUMBER_OF_RESOURCE_GROUP_ARNS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_RULES_PACKAGE_ARNS:
            return "INVALID_NUMBER_OF_RULES_PACKAGE_ARNS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_ASSESSMENT_RUN_STATES:
            return "INVALID_NUMBER_OF_ASSESSMENT_RUN_STATES";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_TAGS:
            return "INVALID_NUMBER_OF_TAGS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_RESOURCE_GROUP_TAGS:
            return "INVALID_NUMBER_OF_RESOURCE_GROUP_TAGS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_ATTRIBUTES:
            return "INVALID_NUMBER_OF_ATTRIBUTES";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_USER_ATTRIBUTES:
            return "INVALID_NUMBER_OF_USER_ATTRIBUTES";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_AGENT_IDS:
            return "INVALID_NUMBER_OF_AGENT_IDS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_AUTO_SCALING_GROUPS:
            return "INVALID_NUMBER_OF_AUTO_SCALING_GROUPS";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_RULE_NAMES:
            return "INVALID_NUMBER_OF_RULE_NAMES";
          case InvalidInputErrorCode::INVALID_NUMBER_OF_SEVERITIES:
            return "INVALID_NUMBER_OF_SEVERITIES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvalidInputErrorCodeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
