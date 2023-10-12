/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentRunState.h>
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
      namespace AssessmentRunStateMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t START_DATA_COLLECTION_PENDING_HASH = ConstExprHashingUtils::HashString("START_DATA_COLLECTION_PENDING");
        static constexpr uint32_t START_DATA_COLLECTION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("START_DATA_COLLECTION_IN_PROGRESS");
        static constexpr uint32_t COLLECTING_DATA_HASH = ConstExprHashingUtils::HashString("COLLECTING_DATA");
        static constexpr uint32_t STOP_DATA_COLLECTION_PENDING_HASH = ConstExprHashingUtils::HashString("STOP_DATA_COLLECTION_PENDING");
        static constexpr uint32_t DATA_COLLECTED_HASH = ConstExprHashingUtils::HashString("DATA_COLLECTED");
        static constexpr uint32_t START_EVALUATING_RULES_PENDING_HASH = ConstExprHashingUtils::HashString("START_EVALUATING_RULES_PENDING");
        static constexpr uint32_t EVALUATING_RULES_HASH = ConstExprHashingUtils::HashString("EVALUATING_RULES");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t COMPLETED_WITH_ERRORS_HASH = ConstExprHashingUtils::HashString("COMPLETED_WITH_ERRORS");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");


        AssessmentRunState GetAssessmentRunStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return AssessmentRunState::CREATED;
          }
          else if (hashCode == START_DATA_COLLECTION_PENDING_HASH)
          {
            return AssessmentRunState::START_DATA_COLLECTION_PENDING;
          }
          else if (hashCode == START_DATA_COLLECTION_IN_PROGRESS_HASH)
          {
            return AssessmentRunState::START_DATA_COLLECTION_IN_PROGRESS;
          }
          else if (hashCode == COLLECTING_DATA_HASH)
          {
            return AssessmentRunState::COLLECTING_DATA;
          }
          else if (hashCode == STOP_DATA_COLLECTION_PENDING_HASH)
          {
            return AssessmentRunState::STOP_DATA_COLLECTION_PENDING;
          }
          else if (hashCode == DATA_COLLECTED_HASH)
          {
            return AssessmentRunState::DATA_COLLECTED;
          }
          else if (hashCode == START_EVALUATING_RULES_PENDING_HASH)
          {
            return AssessmentRunState::START_EVALUATING_RULES_PENDING;
          }
          else if (hashCode == EVALUATING_RULES_HASH)
          {
            return AssessmentRunState::EVALUATING_RULES;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssessmentRunState::FAILED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AssessmentRunState::ERROR_;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AssessmentRunState::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_ERRORS_HASH)
          {
            return AssessmentRunState::COMPLETED_WITH_ERRORS;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return AssessmentRunState::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentRunState>(hashCode);
          }

          return AssessmentRunState::NOT_SET;
        }

        Aws::String GetNameForAssessmentRunState(AssessmentRunState enumValue)
        {
          switch(enumValue)
          {
          case AssessmentRunState::NOT_SET:
            return {};
          case AssessmentRunState::CREATED:
            return "CREATED";
          case AssessmentRunState::START_DATA_COLLECTION_PENDING:
            return "START_DATA_COLLECTION_PENDING";
          case AssessmentRunState::START_DATA_COLLECTION_IN_PROGRESS:
            return "START_DATA_COLLECTION_IN_PROGRESS";
          case AssessmentRunState::COLLECTING_DATA:
            return "COLLECTING_DATA";
          case AssessmentRunState::STOP_DATA_COLLECTION_PENDING:
            return "STOP_DATA_COLLECTION_PENDING";
          case AssessmentRunState::DATA_COLLECTED:
            return "DATA_COLLECTED";
          case AssessmentRunState::START_EVALUATING_RULES_PENDING:
            return "START_EVALUATING_RULES_PENDING";
          case AssessmentRunState::EVALUATING_RULES:
            return "EVALUATING_RULES";
          case AssessmentRunState::FAILED:
            return "FAILED";
          case AssessmentRunState::ERROR_:
            return "ERROR";
          case AssessmentRunState::COMPLETED:
            return "COMPLETED";
          case AssessmentRunState::COMPLETED_WITH_ERRORS:
            return "COMPLETED_WITH_ERRORS";
          case AssessmentRunState::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssessmentRunStateMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
