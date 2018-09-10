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

#include <aws/iotanalytics/model/ComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTAnalytics
  {
    namespace Model
    {
      namespace ComputeTypeMapper
      {

        static const int ACU_1_HASH = HashingUtils::HashString("ACU_1");
        static const int ACU_2_HASH = HashingUtils::HashString("ACU_2");


        ComputeType GetComputeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACU_1_HASH)
          {
            return ComputeType::ACU_1;
          }
          else if (hashCode == ACU_2_HASH)
          {
            return ComputeType::ACU_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeType>(hashCode);
          }

          return ComputeType::NOT_SET;
        }

        Aws::String GetNameForComputeType(ComputeType enumValue)
        {
          switch(enumValue)
          {
          case ComputeType::ACU_1:
            return "ACU_1";
          case ComputeType::ACU_2:
            return "ACU_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ComputeTypeMapper
    } // namespace Model
  } // namespace IoTAnalytics
} // namespace Aws
