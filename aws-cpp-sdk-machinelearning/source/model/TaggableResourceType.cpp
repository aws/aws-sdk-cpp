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

        static const int BatchPrediction_HASH = HashingUtils::HashString("BatchPrediction");
        static const int DataSource_HASH = HashingUtils::HashString("DataSource");
        static const int Evaluation_HASH = HashingUtils::HashString("Evaluation");
        static const int MLModel_HASH = HashingUtils::HashString("MLModel");


        TaggableResourceType GetTaggableResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace TaggableResourceTypeMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
