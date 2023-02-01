/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/EvaluationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace EvaluationModeMapper
      {

        static const int DETECTIVE_HASH = HashingUtils::HashString("DETECTIVE");
        static const int PROACTIVE_HASH = HashingUtils::HashString("PROACTIVE");


        EvaluationMode GetEvaluationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DETECTIVE_HASH)
          {
            return EvaluationMode::DETECTIVE;
          }
          else if (hashCode == PROACTIVE_HASH)
          {
            return EvaluationMode::PROACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationMode>(hashCode);
          }

          return EvaluationMode::NOT_SET;
        }

        Aws::String GetNameForEvaluationMode(EvaluationMode enumValue)
        {
          switch(enumValue)
          {
          case EvaluationMode::DETECTIVE:
            return "DETECTIVE";
          case EvaluationMode::PROACTIVE:
            return "PROACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationModeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
