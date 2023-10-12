/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/TaggableResourceType.h>
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
      namespace TaggableResourceTypeMapper
      {

        static constexpr uint32_t BatchPrediction_HASH = ConstExprHashingUtils::HashString("BatchPrediction");
        static constexpr uint32_t DataSource_HASH = ConstExprHashingUtils::HashString("DataSource");
        static constexpr uint32_t Evaluation_HASH = ConstExprHashingUtils::HashString("Evaluation");
        static constexpr uint32_t MLModel_HASH = ConstExprHashingUtils::HashString("MLModel");


        TaggableResourceType GetTaggableResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BatchPrediction_HASH)
          {
            return TaggableResourceType::BatchPrediction;
          }
          else if (hashCode == DataSource_HASH)
          {
            return TaggableResourceType::DataSource;
          }
          else if (hashCode == Evaluation_HASH)
          {
            return TaggableResourceType::Evaluation;
          }
          else if (hashCode == MLModel_HASH)
          {
            return TaggableResourceType::MLModel;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaggableResourceType>(hashCode);
          }

          return TaggableResourceType::NOT_SET;
        }

        Aws::String GetNameForTaggableResourceType(TaggableResourceType enumValue)
        {
          switch(enumValue)
          {
          case TaggableResourceType::NOT_SET:
            return {};
          case TaggableResourceType::BatchPrediction:
            return "BatchPrediction";
          case TaggableResourceType::DataSource:
            return "DataSource";
          case TaggableResourceType::Evaluation:
            return "Evaluation";
          case TaggableResourceType::MLModel:
            return "MLModel";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaggableResourceTypeMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
