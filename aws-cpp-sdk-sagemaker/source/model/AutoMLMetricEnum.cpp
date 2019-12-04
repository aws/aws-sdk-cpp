/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
