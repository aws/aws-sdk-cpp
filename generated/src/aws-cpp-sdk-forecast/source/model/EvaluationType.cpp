/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/EvaluationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace EvaluationTypeMapper
      {

        static constexpr uint32_t SUMMARY_HASH = ConstExprHashingUtils::HashString("SUMMARY");
        static constexpr uint32_t COMPUTED_HASH = ConstExprHashingUtils::HashString("COMPUTED");


        EvaluationType GetEvaluationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUMMARY_HASH)
          {
            return EvaluationType::SUMMARY;
          }
          else if (hashCode == COMPUTED_HASH)
          {
            return EvaluationType::COMPUTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationType>(hashCode);
          }

          return EvaluationType::NOT_SET;
        }

        Aws::String GetNameForEvaluationType(EvaluationType enumValue)
        {
          switch(enumValue)
          {
          case EvaluationType::NOT_SET:
            return {};
          case EvaluationType::SUMMARY:
            return "SUMMARY";
          case EvaluationType::COMPUTED:
            return "COMPUTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationTypeMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
