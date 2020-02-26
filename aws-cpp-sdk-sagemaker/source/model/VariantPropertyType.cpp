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

#include <aws/sagemaker/model/VariantPropertyType.h>
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
      namespace VariantPropertyTypeMapper
      {

        static const int DesiredInstanceCount_HASH = HashingUtils::HashString("DesiredInstanceCount");
        static const int DesiredWeight_HASH = HashingUtils::HashString("DesiredWeight");
        static const int DataCaptureConfig_HASH = HashingUtils::HashString("DataCaptureConfig");


        VariantPropertyType GetVariantPropertyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DesiredInstanceCount_HASH)
          {
            return VariantPropertyType::DesiredInstanceCount;
          }
          else if (hashCode == DesiredWeight_HASH)
          {
            return VariantPropertyType::DesiredWeight;
          }
          else if (hashCode == DataCaptureConfig_HASH)
          {
            return VariantPropertyType::DataCaptureConfig;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VariantPropertyType>(hashCode);
          }

          return VariantPropertyType::NOT_SET;
        }

        Aws::String GetNameForVariantPropertyType(VariantPropertyType enumValue)
        {
          switch(enumValue)
          {
          case VariantPropertyType::DesiredInstanceCount:
            return "DesiredInstanceCount";
          case VariantPropertyType::DesiredWeight:
            return "DesiredWeight";
          case VariantPropertyType::DataCaptureConfig:
            return "DataCaptureConfig";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VariantPropertyTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
