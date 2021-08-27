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

        static const int INVALID_ASSESSMENT_TARGET_ARN_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_TARGET_ARN");
        static const int INVALID_ASSESSMENT_TEMPLATE_ARN_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_ARN");
        static const int INVALID_ASSESSMENT_RUN_ARN_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_RUN_ARN");
        static const int INVALID_FINDING_ARN_HASH = HashingUtils::HashString("INVALID_FINDING_ARN");
        static const int INVALID_RESOURCE_GROUP_ARN_HASH = HashingUtils::HashString("INVALID_RESOURCE_GROUP_ARN");
        static const int INVALID_RULES_PACKAGE_ARN_HASH = HashingUtils::HashString("INVALID_RULES_PACKAGE_ARN");
        static const int INVALID_RESOURCE_ARN_HASH = HashingUtils::HashString("INVALID_RESOURCE_ARN");
        static const int INVALID_SNS_TOPIC_ARN_HASH = HashingUtils::HashString("INVALID_SNS_TOPIC_ARN");
        static const int INVALID_IAM_ROLE_ARN_HASH = HashingUtils::HashString("INVALID_IAM_ROLE_ARN");
        static const int INVALID_ASSESSMENT_TARGET_NAME_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_TARGET_NAME");
        static const int INVALID_ASSESSMENT_TARGET_NAME_PATTERN_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_TARGET_NAME_PATTERN");
        static const int INVALID_ASSESSMENT_TEMPLATE_NAME_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_NAME");
        static const int INVALID_ASSESSMENT_TEMPLATE_NAME_PATTERN_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_NAME_PATTERN");
        static const int INVALID_ASSESSMENT_TEMPLATE_DURATION_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_DURATION");
        static const int INVALID_ASSESSMENT_TEMPLATE_DURATION_RANGE_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_TEMPLATE_DURATION_RANGE");
        static const int INVALID_ASSESSMENT_RUN_DURATION_RANGE_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_RUN_DURATION_RANGE");
        static const int INVALID_ASSESSMENT_RUN_START_TIME_RANGE_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_RUN_START_TIME_RANGE");
        static const int INVALID_ASSESSMENT_RUN_COMPLETION_TIME_RANGE_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_RUN_COMPLETION_TIME_RANGE");
        static const int INVALID_ASSESSMENT_RUN_STATE_CHANGE_TIME_RANGE_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_RUN_STATE_CHANGE_TIME_RANGE");
        static const int INVALID_ASSESSMENT_RUN_STATE_HASH = HashingUtils::HashString("INVALID_ASSESSMENT_RUN_STATE");
        static const int INVALID_TAG_HASH = HashingUtils::HashString("INVALID_TAG");
        static const int INVALID_TAG_KEY_HASH = HashingUtils::HashString("INVALID_TAG_KEY");
        static const int INVALID_TAG_VALUE_HASH = HashingUtils::HashString("INVALID_TAG_VALUE");
        static const int INVALID_RESOURCE_GROUP_TAG_KEY_HASH = HashingUtils::HashString("INVALID_RESOURCE_GROUP_TAG_KEY");
        static const int INVALID_RESOURCE_GROUP_TAG_VALUE_HASH = HashingUtils::HashString("INVALID_RESOURCE_GROUP_TAG_VALUE");
        static const int INVALID_ATTRIBUTE_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE");
        static const int INVALID_USER_ATTRIBUTE_HASH = HashingUtils::HashString("INVALID_USER_ATTRIBUTE");
        static const int INVALID_USER_ATTRIBUTE_KEY_HASH = HashingUtils::HashString("INVALID_USER_ATTRIBUTE_KEY");
        static const int INVALID_USER_ATTRIBUTE_VALUE_HASH = HashingUtils::HashString("INVALID_USER_ATTRIBUTE_VALUE");
        static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("INVALID_PAGINATION_TOKEN");
        static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("INVALID_MAX_RESULTS");
        static const int INVALID_AGENT_ID_HASH = HashingUtils::HashString("INVALID_AGENT_ID");
        static const int INVALID_AUTO_SCALING_GROUP_HASH = HashingUtils::HashString("INVALID_AUTO_SCALING_GROUP");
        static const int INVALID_RULE_NAME_HASH = HashingUtils::HashString("INVALID_RULE_NAME");
        static const int INVALID_SEVERITY_HASH = HashingUtils::HashString("INVALID_SEVERITY");
        static const int INVALID_LOCALE_HASH = HashingUtils::HashString("INVALID_LOCALE");
        static const int INVALID_EVENT_HASH = HashingUtils::HashString("INVALID_EVENT");
        static const int ASSESSMENT_TARGET_NAME_ALREADY_TAKEN_HASH = HashingUtils::HashString("ASSESSMENT_TARGET_NAME_ALREADY_TAKEN");
        static const int ASSESSMENT_TEMPLATE_NAME_ALREADY_TAKEN_HASH = HashingUtils::HashString("ASSESSMENT_TEMPLATE_NAME_ALREADY_TAKEN");
        static const int INVALID_NUMBER_OF_ASSESSMENT_TARGET_ARNS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_ASSESSMENT_TARGET_ARNS");
        static const int INVALID_NUMBER_OF_ASSESSMENT_TEMPLATE_ARNS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_ASSESSMENT_TEMPLATE_ARNS");
        static const int INVALID_NUMBER_OF_ASSESSMENT_RUN_ARNS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_ASSESSMENT_RUN_ARNS");
        static const int INVALID_NUMBER_OF_FINDING_ARNS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_FINDING_ARNS");
        static const int INVALID_NUMBER_OF_RESOURCE_GROUP_ARNS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_RESOURCE_GROUP_ARNS");
        static const int INVALID_NUMBER_OF_RULES_PACKAGE_ARNS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_RULES_PACKAGE_ARNS");
        static const int INVALID_NUMBER_OF_ASSESSMENT_RUN_STATES_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_ASSESSMENT_RUN_STATES");
        static const int INVALID_NUMBER_OF_TAGS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_TAGS");
        static const int INVALID_NUMBER_OF_RESOURCE_GROUP_TAGS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_RESOURCE_GROUP_TAGS");
        static const int INVALID_NUMBER_OF_ATTRIBUTES_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_ATTRIBUTES");
        static const int INVALID_NUMBER_OF_USER_ATTRIBUTES_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_USER_ATTRIBUTES");
        static const int INVALID_NUMBER_OF_AGENT_IDS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_AGENT_IDS");
        static const int INVALID_NUMBER_OF_AUTO_SCALING_GROUPS_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_AUTO_SCALING_GROUPS");
        static const int INVALID_NUMBER_OF_RULE_NAMES_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_RULE_NAMES");
        static const int INVALID_NUMBER_OF_SEVERITIES_HASH = HashingUtils::HashString("INVALID_NUMBER_OF_SEVERITIES");


        InvalidInputErrorCode GetInvalidInputErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
