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

#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
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
      namespace ProductionVariantInstanceTypeMapper
      {

        static const int ml_c4_2xlarge_HASH = HashingUtils::HashString("ml.c4.2xlarge");
        static const int ml_c4_8xlarge_HASH = HashingUtils::HashString("ml.c4.8xlarge");
        static const int ml_c4_xlarge_HASH = HashingUtils::HashString("ml.c4.xlarge");
        static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
        static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
        static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
        static const int ml_m4_xlarge_HASH = HashingUtils::HashString("ml.m4.xlarge");
        static const int ml_p2_xlarge_HASH = HashingUtils::HashString("ml.p2.xlarge");
        static const int ml_p3_2xlarge_HASH = HashingUtils::HashString("ml.p3.2xlarge");
        static const int ml_t2_medium_HASH = HashingUtils::HashString("ml.t2.medium");


        ProductionVariantInstanceType GetProductionVariantInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ml_c4_2xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_c4_2xlarge;
          }
          else if (hashCode == ml_c4_8xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_c4_8xlarge;
          }
          else if (hashCode == ml_c4_xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_c4_xlarge;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_c5_2xlarge;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_c5_9xlarge;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_c5_xlarge;
          }
          else if (hashCode == ml_m4_xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_m4_xlarge;
          }
          else if (hashCode == ml_p2_xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_p2_xlarge;
          }
          else if (hashCode == ml_p3_2xlarge_HASH)
          {
            return ProductionVariantInstanceType::ml_p3_2xlarge;
          }
          else if (hashCode == ml_t2_medium_HASH)
          {
            return ProductionVariantInstanceType::ml_t2_medium;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductionVariantInstanceType>(hashCode);
          }

          return ProductionVariantInstanceType::NOT_SET;
        }

        Aws::String GetNameForProductionVariantInstanceType(ProductionVariantInstanceType enumValue)
        {
          switch(enumValue)
          {
          case ProductionVariantInstanceType::ml_c4_2xlarge:
            return "ml.c4.2xlarge";
          case ProductionVariantInstanceType::ml_c4_8xlarge:
            return "ml.c4.8xlarge";
          case ProductionVariantInstanceType::ml_c4_xlarge:
            return "ml.c4.xlarge";
          case ProductionVariantInstanceType::ml_c5_2xlarge:
            return "ml.c5.2xlarge";
          case ProductionVariantInstanceType::ml_c5_9xlarge:
            return "ml.c5.9xlarge";
          case ProductionVariantInstanceType::ml_c5_xlarge:
            return "ml.c5.xlarge";
          case ProductionVariantInstanceType::ml_m4_xlarge:
            return "ml.m4.xlarge";
          case ProductionVariantInstanceType::ml_p2_xlarge:
            return "ml.p2.xlarge";
          case ProductionVariantInstanceType::ml_p3_2xlarge:
            return "ml.p3.2xlarge";
          case ProductionVariantInstanceType::ml_t2_medium:
            return "ml.t2.medium";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ProductionVariantInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
