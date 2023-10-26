/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/JSModule.h>
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
      namespace JSModuleMapper
      {

        static const int es2020_HASH = HashingUtils::HashString("es2020");
        static const int esnext_HASH = HashingUtils::HashString("esnext");


        JSModule GetJSModuleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == es2020_HASH)
          {
            return JSModule::es2020;
          }
          else if (hashCode == esnext_HASH)
          {
            return JSModule::esnext;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JSModule>(hashCode);
          }

          return JSModule::NOT_SET;
        }

        Aws::String GetNameForJSModule(JSModule enumValue)
        {
          switch(enumValue)
          {
          case JSModule::NOT_SET:
            return {};
          case JSModule::es2020:
            return "es2020";
          case JSModule::esnext:
            return "esnext";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JSModuleMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
