/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormVersionStatus.h>
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
      namespace EvaluationFormVersionStatusMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        EvaluationFormVersionStatus GetEvaluationFormVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return EvaluationFormVersionStatus::DRAFT;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return EvaluationFormVersionStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationFormVersionStatus>(hashCode);
          }

          return EvaluationFormVersionStatus::NOT_SET;
        }

        Aws::String GetNameForEvaluationFormVersionStatus(EvaluationFormVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case EvaluationFormVersionStatus::NOT_SET:
            return {};
          case EvaluationFormVersionStatus::DRAFT:
            return "DRAFT";
          case EvaluationFormVersionStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationFormVersionStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
