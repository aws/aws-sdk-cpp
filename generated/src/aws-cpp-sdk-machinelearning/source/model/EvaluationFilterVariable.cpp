/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t CreatedAt_HASH = ConstExprHashingUtils::HashString("CreatedAt");
        static constexpr uint32_t LastUpdatedAt_HASH = ConstExprHashingUtils::HashString("LastUpdatedAt");
        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");
        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t IAMUser_HASH = ConstExprHashingUtils::HashString("IAMUser");
        static constexpr uint32_t MLModelId_HASH = ConstExprHashingUtils::HashString("MLModelId");
        static constexpr uint32_t DataSourceId_HASH = ConstExprHashingUtils::HashString("DataSourceId");
        static constexpr uint32_t DataURI_HASH = ConstExprHashingUtils::HashString("DataURI");


        EvaluationFilterVariable GetEvaluationFilterVariableForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case EvaluationFilterVariable::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace EvaluationFilterVariableMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
