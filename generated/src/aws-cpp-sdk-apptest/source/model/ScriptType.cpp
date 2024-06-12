/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/ScriptType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace ScriptTypeMapper
      {

        static const int Selenium_HASH = HashingUtils::HashString("Selenium");


        ScriptType GetScriptTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Selenium_HASH)
          {
            return ScriptType::Selenium;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScriptType>(hashCode);
          }

          return ScriptType::NOT_SET;
        }

        Aws::String GetNameForScriptType(ScriptType enumValue)
        {
          switch(enumValue)
          {
          case ScriptType::NOT_SET:
            return {};
          case ScriptType::Selenium:
            return "Selenium";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScriptTypeMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
