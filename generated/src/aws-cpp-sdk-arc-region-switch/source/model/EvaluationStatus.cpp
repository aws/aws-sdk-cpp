/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/EvaluationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace EvaluationStatusMapper
      {

        static const int passed_HASH = HashingUtils::HashString("passed");
        static const int actionRequired_HASH = HashingUtils::HashString("actionRequired");
        static const int pendingEvaluation_HASH = HashingUtils::HashString("pendingEvaluation");
        static const int unknown_HASH = HashingUtils::HashString("unknown");


        EvaluationStatus GetEvaluationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == passed_HASH)
          {
            return EvaluationStatus::passed;
          }
          else if (hashCode == actionRequired_HASH)
          {
            return EvaluationStatus::actionRequired;
          }
          else if (hashCode == pendingEvaluation_HASH)
          {
            return EvaluationStatus::pendingEvaluation;
          }
          else if (hashCode == unknown_HASH)
          {
            return EvaluationStatus::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationStatus>(hashCode);
          }

          return EvaluationStatus::NOT_SET;
        }

        Aws::String GetNameForEvaluationStatus(EvaluationStatus enumValue)
        {
          switch(enumValue)
          {
          case EvaluationStatus::NOT_SET:
            return {};
          case EvaluationStatus::passed:
            return "passed";
          case EvaluationStatus::actionRequired:
            return "actionRequired";
          case EvaluationStatus::pendingEvaluation:
            return "pendingEvaluation";
          case EvaluationStatus::unknown:
            return "unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationStatusMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
