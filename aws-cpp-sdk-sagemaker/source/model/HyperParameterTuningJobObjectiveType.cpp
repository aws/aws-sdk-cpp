﻿/*
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

#include <aws/sagemaker/model/HyperParameterTuningJobObjectiveType.h>
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
      namespace HyperParameterTuningJobObjectiveTypeMapper
      {

        static const int Maximize_HASH = HashingUtils::HashString("Maximize");
        static const int Minimize_HASH = HashingUtils::HashString("Minimize");


        HyperParameterTuningJobObjectiveType GetHyperParameterTuningJobObjectiveTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Maximize_HASH)
          {
            return HyperParameterTuningJobObjectiveType::Maximize;
          }
          else if (hashCode == Minimize_HASH)
          {
            return HyperParameterTuningJobObjectiveType::Minimize;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningJobObjectiveType>(hashCode);
          }

          return HyperParameterTuningJobObjectiveType::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningJobObjectiveType(HyperParameterTuningJobObjectiveType enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningJobObjectiveType::Maximize:
            return "Maximize";
          case HyperParameterTuningJobObjectiveType::Minimize:
            return "Minimize";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HyperParameterTuningJobObjectiveTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
