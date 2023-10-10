/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationStatus.h>
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
      namespace EvaluationStatusMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");


        EvaluationStatus GetEvaluationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return EvaluationStatus::DRAFT;
          }
          else if (hashCode == SUBMITTED_HASH)
          {
            return EvaluationStatus::SUBMITTED;
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
          case EvaluationStatus::DRAFT:
            return "DRAFT";
          case EvaluationStatus::SUBMITTED:
            return "SUBMITTED";
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
  } // namespace Connect
} // namespace Aws
