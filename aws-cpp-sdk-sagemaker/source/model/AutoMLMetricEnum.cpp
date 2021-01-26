/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLMetricEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AutoMLMetricEnumMapper
      {

        static const int Accuracy_HASH = HashingUtils::HashString("Accuracy");
        static const int MSE_HASH = HashingUtils::HashString("MSE");
        static const int F1_HASH = HashingUtils::HashString("F1");
        static const int F1macro_HASH = HashingUtils::HashString("F1macro");
        static const int AUC_HASH = HashingUtils::HashString("AUC");


        AutoMLMetricEnum GetAutoMLMetricEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Accuracy_HASH)
          {
            return AutoMLMetricEnum::Accuracy;
          }
          else if (hashCode == MSE_HASH)
          {
            return AutoMLMetricEnum::MSE;
          }
          else if (hashCode == F1_HASH)
          {
            return AutoMLMetricEnum::F1;
          }
          else if (hashCode == F1macro_HASH)
          {
            return AutoMLMetricEnum::F1macro;
          }
          else if (hashCode == AUC_HASH)
          {
            return AutoMLMetricEnum::AUC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLMetricEnum>(hashCode);
          }

          return AutoMLMetricEnum::NOT_SET;
        }

        Aws::String GetNameForAutoMLMetricEnum(AutoMLMetricEnum enumValue)
        {
          switch(enumValue)
          {
          case AutoMLMetricEnum::Accuracy:
            return "Accuracy";
          case AutoMLMetricEnum::MSE:
            return "MSE";
          case AutoMLMetricEnum::F1:
            return "F1";
          case AutoMLMetricEnum::F1macro:
            return "F1macro";
          case AutoMLMetricEnum::AUC:
            return "AUC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLMetricEnumMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
