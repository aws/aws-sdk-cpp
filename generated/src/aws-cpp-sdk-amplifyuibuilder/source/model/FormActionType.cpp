/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormActionType.h>
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
      namespace FormActionTypeMapper
      {

        static const int create_HASH = HashingUtils::HashString("create");
        static const int update_HASH = HashingUtils::HashString("update");


        FormActionType GetFormActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == create_HASH)
          {
            return FormActionType::create;
          }
          else if (hashCode == update_HASH)
          {
            return FormActionType::update;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FormActionType>(hashCode);
          }

          return FormActionType::NOT_SET;
        }

        Aws::String GetNameForFormActionType(FormActionType enumValue)
        {
          switch(enumValue)
          {
          case FormActionType::create:
            return "create";
          case FormActionType::update:
            return "update";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormActionTypeMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
