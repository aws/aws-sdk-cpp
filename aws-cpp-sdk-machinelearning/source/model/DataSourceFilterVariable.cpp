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
#include <aws/machinelearning/model/DataSourceFilterVariable.h>
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
      namespace DataSourceFilterVariableMapper
      {

        static const int CreatedAt_HASH = HashingUtils::HashString("CreatedAt");
        static const int LastUpdatedAt_HASH = HashingUtils::HashString("LastUpdatedAt");
        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int DataLocationS3_HASH = HashingUtils::HashString("DataLocationS3");
        static const int IAMUser_HASH = HashingUtils::HashString("IAMUser");


        DataSourceFilterVariable GetDataSourceFilterVariableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreatedAt_HASH)
          {
            return DataSourceFilterVariable::CreatedAt;
          }
          else if (hashCode == LastUpdatedAt_HASH)
          {
            return DataSourceFilterVariable::LastUpdatedAt;
          }
          else if (hashCode == Status_HASH)
          {
            return DataSourceFilterVariable::Status;
          }
          else if (hashCode == Name_HASH)
          {
            return DataSourceFilterVariable::Name;
          }
          else if (hashCode == DataLocationS3_HASH)
          {
            return DataSourceFilterVariable::DataLocationS3;
          }
          else if (hashCode == IAMUser_HASH)
          {
            return DataSourceFilterVariable::IAMUser;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceFilterVariable>(hashCode);
          }

          return DataSourceFilterVariable::NOT_SET;
        }

        Aws::String GetNameForDataSourceFilterVariable(DataSourceFilterVariable enumValue)
        {
          switch(enumValue)
          {
          case DataSourceFilterVariable::CreatedAt:
            return "CreatedAt";
          case DataSourceFilterVariable::LastUpdatedAt:
            return "LastUpdatedAt";
          case DataSourceFilterVariable::Status:
            return "Status";
          case DataSourceFilterVariable::Name:
            return "Name";
          case DataSourceFilterVariable::DataLocationS3:
            return "DataLocationS3";
          case DataSourceFilterVariable::IAMUser:
            return "IAMUser";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DataSourceFilterVariableMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
