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
#include <aws/machinelearning/model/EvaluationFilterVariable.h>
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
      namespace EvaluationFilterVariableMapper
      {

        static const int CreatedAt_HASH = HashingUtils::HashString("CreatedAt");
        static const int LastUpdatedAt_HASH = HashingUtils::HashString("LastUpdatedAt");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int IAMUser_HASH = HashingUtils::HashString("IAMUser");
        static const int MLModelId_HASH = HashingUtils::HashString("MLModelId");
        static const int DataSourceId_HASH = HashingUtils::HashString("DataSourceId");
        static const int DataURI_HASH = HashingUtils::HashString("DataURI");


        EvaluationFilterVariable GetEvaluationFilterVariableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreatedAt_HASH)
          {
            return EvaluationFilterVariable::CreatedAt;
          }
          else if (hashCode == LastUpdatedAt_HASH)
          {
            return EvaluationFilterVariable::LastUpdatedAt;
          }
          else if (hashCode == Status_HASH)
          {
            return EvaluationFilterVariable::Status;
          }
          else if (hashCode == Name_HASH)
          {
            return EvaluationFilterVariable::Name;
          }
          else if (hashCode == IAMUser_HASH)
          {
            return EvaluationFilterVariable::IAMUser;
          }
          else if (hashCode == MLModelId_HASH)
          {
            return EvaluationFilterVariable::MLModelId;
          }
          else if (hashCode == DataSourceId_HASH)
          {
            return EvaluationFilterVariable::DataSourceId;
          }
          else if (hashCode == DataURI_HASH)
          {
            return EvaluationFilterVariable::DataURI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationFilterVariable>(hashCode);
          }

          return EvaluationFilterVariable::NOT_SET;
        }

        Aws::String GetNameForEvaluationFilterVariable(EvaluationFilterVariable enumValue)
        {
          switch(enumValue)
          {
          case EvaluationFilterVariable::CreatedAt:
            return "CreatedAt";
          case EvaluationFilterVariable::LastUpdatedAt:
            return "LastUpdatedAt";
          case EvaluationFilterVariable::Status:
            return "Status";
          case EvaluationFilterVariable::Name:
            return "Name";
          case EvaluationFilterVariable::IAMUser:
            return "IAMUser";
          case EvaluationFilterVariable::MLModelId:
            return "MLModelId";
          case EvaluationFilterVariable::DataSourceId:
            return "DataSourceId";
          case EvaluationFilterVariable::DataURI:
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

      } // namespace EvaluationFilterVariableMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
