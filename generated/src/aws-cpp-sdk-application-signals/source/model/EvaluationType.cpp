/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/EvaluationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationSignals
  {
    namespace Model
    {
      namespace EvaluationTypeMapper
      {

        static const int PeriodBased_HASH = HashingUtils::HashString("PeriodBased");
        static const int RequestBased_HASH = HashingUtils::HashString("RequestBased");


        EvaluationType GetEvaluationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PeriodBased_HASH)
          {
            return EvaluationType::PeriodBased;
          }
          else if (hashCode == RequestBased_HASH)
          {
            return EvaluationType::RequestBased;
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
          case EvaluationType::PeriodBased:
            return "PeriodBased";
          case EvaluationType::RequestBased:
            return "RequestBased";
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
  } // namespace ApplicationSignals
} // namespace Aws
