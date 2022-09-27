/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormDataSourceType.h>
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
      namespace FormDataSourceTypeMapper
      {

        static const int DataStore_HASH = HashingUtils::HashString("DataStore");
        static const int Custom_HASH = HashingUtils::HashString("Custom");


        FormDataSourceType GetFormDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DataStore_HASH)
          {
            return FormDataSourceType::DataStore;
          }
          else if (hashCode == Custom_HASH)
          {
            return FormDataSourceType::Custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FormDataSourceType>(hashCode);
          }

          return FormDataSourceType::NOT_SET;
        }

        Aws::String GetNameForFormDataSourceType(FormDataSourceType enumValue)
        {
          switch(enumValue)
          {
          case FormDataSourceType::DataStore:
            return "DataStore";
          case FormDataSourceType::Custom:
            return "Custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormDataSourceTypeMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
