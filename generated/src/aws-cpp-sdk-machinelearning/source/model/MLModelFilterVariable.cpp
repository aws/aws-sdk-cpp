/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/MLModelFilterVariable.h>
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
      namespace MLModelFilterVariableMapper
      {

        static constexpr uint32_t CreatedAt_HASH = ConstExprHashingUtils::HashString("CreatedAt");
        static constexpr uint32_t LastUpdatedAt_HASH = ConstExprHashingUtils::HashString("LastUpdatedAt");
        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");
        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t IAMUser_HASH = ConstExprHashingUtils::HashString("IAMUser");
        static constexpr uint32_t TrainingDataSourceId_HASH = ConstExprHashingUtils::HashString("TrainingDataSourceId");
        static constexpr uint32_t RealtimeEndpointStatus_HASH = ConstExprHashingUtils::HashString("RealtimeEndpointStatus");
        static constexpr uint32_t MLModelType_HASH = ConstExprHashingUtils::HashString("MLModelType");
        static constexpr uint32_t Algorithm_HASH = ConstExprHashingUtils::HashString("Algorithm");
        static constexpr uint32_t TrainingDataURI_HASH = ConstExprHashingUtils::HashString("TrainingDataURI");


        MLModelFilterVariable GetMLModelFilterVariableForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreatedAt_HASH)
          {
            return MLModelFilterVariable::CreatedAt;
          }
          else if (hashCode == LastUpdatedAt_HASH)
          {
            return MLModelFilterVariable::LastUpdatedAt;
          }
          else if (hashCode == Status_HASH)
          {
            return MLModelFilterVariable::Status;
          }
          else if (hashCode == Name_HASH)
          {
            return MLModelFilterVariable::Name;
          }
          else if (hashCode == IAMUser_HASH)
          {
            return MLModelFilterVariable::IAMUser;
          }
          else if (hashCode == TrainingDataSourceId_HASH)
          {
            return MLModelFilterVariable::TrainingDataSourceId;
          }
          else if (hashCode == RealtimeEndpointStatus_HASH)
          {
            return MLModelFilterVariable::RealtimeEndpointStatus;
          }
          else if (hashCode == MLModelType_HASH)
          {
            return MLModelFilterVariable::MLModelType;
          }
          else if (hashCode == Algorithm_HASH)
          {
            return MLModelFilterVariable::Algorithm;
          }
          else if (hashCode == TrainingDataURI_HASH)
          {
            return MLModelFilterVariable::TrainingDataURI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MLModelFilterVariable>(hashCode);
          }

          return MLModelFilterVariable::NOT_SET;
        }

        Aws::String GetNameForMLModelFilterVariable(MLModelFilterVariable enumValue)
        {
          switch(enumValue)
          {
          case MLModelFilterVariable::NOT_SET:
            return {};
          case MLModelFilterVariable::CreatedAt:
            return "CreatedAt";
          case MLModelFilterVariable::LastUpdatedAt:
            return "LastUpdatedAt";
          case MLModelFilterVariable::Status:
            return "Status";
          case MLModelFilterVariable::Name:
            return "Name";
          case MLModelFilterVariable::IAMUser:
            return "IAMUser";
          case MLModelFilterVariable::TrainingDataSourceId:
            return "TrainingDataSourceId";
          case MLModelFilterVariable::RealtimeEndpointStatus:
            return "RealtimeEndpointStatus";
          case MLModelFilterVariable::MLModelType:
            return "MLModelType";
          case MLModelFilterVariable::Algorithm:
            return "Algorithm";
          case MLModelFilterVariable::TrainingDataURI:
            return "TrainingDataURI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MLModelFilterVariableMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
