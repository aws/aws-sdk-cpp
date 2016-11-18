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

        static const int CreatedAt_HASH = HashingUtils::HashString("CreatedAt");
        static const int LastUpdatedAt_HASH = HashingUtils::HashString("LastUpdatedAt");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int IAMUser_HASH = HashingUtils::HashString("IAMUser");
        static const int TrainingDataSourceId_HASH = HashingUtils::HashString("TrainingDataSourceId");
        static const int RealtimeEndpointStatus_HASH = HashingUtils::HashString("RealtimeEndpointStatus");
        static const int MLModelType_HASH = HashingUtils::HashString("MLModelType");
        static const int Algorithm_HASH = HashingUtils::HashString("Algorithm");
        static const int TrainingDataURI_HASH = HashingUtils::HashString("TrainingDataURI");


        MLModelFilterVariable GetMLModelFilterVariableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace MLModelFilterVariableMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
