/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/JSScript.h>
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
      namespace JSScriptMapper
      {

        static const int jsx_HASH = HashingUtils::HashString("jsx");
        static const int tsx_HASH = HashingUtils::HashString("tsx");
        static const int js_HASH = HashingUtils::HashString("js");


        JSScript GetJSScriptForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == jsx_HASH)
          {
            return JSScript::jsx;
          }
          else if (hashCode == tsx_HASH)
          {
            return JSScript::tsx;
          }
          else if (hashCode == js_HASH)
          {
            return JSScript::js;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JSScript>(hashCode);
          }

          return JSScript::NOT_SET;
        }

        Aws::String GetNameForJSScript(JSScript enumValue)
        {
          switch(enumValue)
          {
          case JSScript::NOT_SET:
            return {};
          case JSScript::jsx:
            return "jsx";
          case JSScript::tsx:
            return "tsx";
          case JSScript::js:
            return "js";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JSScriptMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
