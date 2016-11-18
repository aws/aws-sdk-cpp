/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/model/DetailsAttributes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MachineLearning
  {
    namespace Model
    {
      namespace DetailsAttributesMapper
      {

        static const int PredictiveModelType_HASH = HashingUtils::HashString("PredictiveModelType");
        static const int Algorithm_HASH = HashingUtils::HashString("Algorithm");


        DetailsAttributes GetDetailsAttributesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PredictiveModelType_HASH)
          {
            return DetailsAttributes::PredictiveModelType;
          }
          else if (hashCode == Algorithm_HASH)
          {
            return DetailsAttributes::Algorithm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetailsAttributes>(hashCode);
          }

          return DetailsAttributes::NOT_SET;
        }

        Aws::String GetNameForDetailsAttributes(DetailsAttributes enumValue)
        {
          switch(enumValue)
          {
          case DetailsAttributes::PredictiveModelType:
            return "PredictiveModelType";
          case DetailsAttributes::Algorithm:
            return "Algorithm";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DetailsAttributesMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
