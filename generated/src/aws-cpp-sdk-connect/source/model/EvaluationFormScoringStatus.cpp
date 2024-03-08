/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormScoringStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace EvaluationFormScoringStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        EvaluationFormScoringStatus GetEvaluationFormScoringStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EvaluationFormScoringStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EvaluationFormScoringStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationFormScoringStatus>(hashCode);
          }

          return EvaluationFormScoringStatus::NOT_SET;
        }

        Aws::String GetNameForEvaluationFormScoringStatus(EvaluationFormScoringStatus enumValue)
        {
          switch(enumValue)
          {
          case EvaluationFormScoringStatus::NOT_SET:
            return {};
          case EvaluationFormScoringStatus::ENABLED:
            return "ENABLED";
          case EvaluationFormScoringStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationFormScoringStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
