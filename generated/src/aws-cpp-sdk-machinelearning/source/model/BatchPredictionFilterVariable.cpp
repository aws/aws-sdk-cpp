/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t CreatedAt_HASH = ConstExprHashingUtils::HashString("CreatedAt");
        static constexpr uint32_t LastUpdatedAt_HASH = ConstExprHashingUtils::HashString("LastUpdatedAt");
        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");
        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t IAMUser_HASH = ConstExprHashingUtils::HashString("IAMUser");
        static constexpr uint32_t MLModelId_HASH = ConstExprHashingUtils::HashString("MLModelId");
        static constexpr uint32_t DataSourceId_HASH = ConstExprHashingUtils::HashString("DataSourceId");
        static constexpr uint32_t DataURI_HASH = ConstExprHashingUtils::HashString("DataURI");


        BatchPredictionFilterVariable GetBatchPredictionFilterVariableForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case BatchPredictionFilterVariable::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace BatchPredictionFilterVariableMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
