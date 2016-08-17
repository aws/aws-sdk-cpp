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
#include <aws/machinelearning/model/BatchPredictionFilterVariable.h>
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
      namespace BatchPredictionFilterVariableMapper
      {

        static const int CreatedAt_HASH = HashingUtils::HashString("CreatedAt");
        static const int LastUpdatedAt_HASH = HashingUtils::HashString("LastUpdatedAt");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int IAMUser_HASH = HashingUtils::HashString("IAMUser");
        static const int MLModelId_HASH = HashingUtils::HashString("MLModelId");
        static const int DataSourceId_HASH = HashingUtils::HashString("DataSourceId");
        static const int DataURI_HASH = HashingUtils::HashString("DataURI");


        BatchPredictionFilterVariable GetBatchPredictionFilterVariableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreatedAt_HASH)
          {
            return BatchPredictionFilterVariable::CreatedAt;
          }
          else if (hashCode == LastUpdatedAt_HASH)
          {
            return BatchPredictionFilterVariable::LastUpdatedAt;
          }
          else if (hashCode == Status_HASH)
          {
            return BatchPredictionFilterVariable::Status;
          }
          else if (hashCode == Name_HASH)
          {
            return BatchPredictionFilterVariable::Name;
          }
          else if (hashCode == IAMUser_HASH)
          {
            return BatchPredictionFilterVariable::IAMUser;
          }
          else if (hashCode == MLModelId_HASH)
          {
            return BatchPredictionFilterVariable::MLModelId;
          }
          else if (hashCode == DataSourceId_HASH)
          {
            return BatchPredictionFilterVariable::DataSourceId;
          }
          else if (hashCode == DataURI_HASH)
          {
            return BatchPredictionFilterVariable::DataURI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchPredictionFilterVariable>(hashCode);
          }

          return BatchPredictionFilterVariable::NOT_SET;
        }

        Aws::String GetNameForBatchPredictionFilterVariable(BatchPredictionFilterVariable enumValue)
        {
          switch(enumValue)
          {
          case BatchPredictionFilterVariable::CreatedAt:
            return "CreatedAt";
          case BatchPredictionFilterVariable::LastUpdatedAt:
            return "LastUpdatedAt";
          case BatchPredictionFilterVariable::Status:
            return "Status";
          case BatchPredictionFilterVariable::Name:
            return "Name";
          case BatchPredictionFilterVariable::IAMUser:
            return "IAMUser";
          case BatchPredictionFilterVariable::MLModelId:
            return "MLModelId";
          case BatchPredictionFilterVariable::DataSourceId:
            return "DataSourceId";
          case BatchPredictionFilterVariable::DataURI:
            return "DataURI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BatchPredictionFilterVariableMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
