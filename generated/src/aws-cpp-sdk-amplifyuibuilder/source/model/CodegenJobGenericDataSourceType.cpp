/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenJobGenericDataSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace CodegenJobGenericDataSourceTypeMapper
      {

        static const int DataStore_HASH = HashingUtils::HashString("DataStore");


        CodegenJobGenericDataSourceType GetCodegenJobGenericDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DataStore_HASH)
          {
            return CodegenJobGenericDataSourceType::DataStore;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodegenJobGenericDataSourceType>(hashCode);
          }

          return CodegenJobGenericDataSourceType::NOT_SET;
        }

        Aws::String GetNameForCodegenJobGenericDataSourceType(CodegenJobGenericDataSourceType enumValue)
        {
          switch(enumValue)
          {
          case CodegenJobGenericDataSourceType::NOT_SET:
            return {};
          case CodegenJobGenericDataSourceType::DataStore:
            return "DataStore";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodegenJobGenericDataSourceTypeMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
