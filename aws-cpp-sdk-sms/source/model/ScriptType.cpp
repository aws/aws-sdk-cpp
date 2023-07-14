/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ScriptType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ScriptTypeMapper
      {

        static const int SHELL_SCRIPT_HASH = HashingUtils::HashString("SHELL_SCRIPT");
        static const int POWERSHELL_SCRIPT_HASH = HashingUtils::HashString("POWERSHELL_SCRIPT");


        ScriptType GetScriptTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHELL_SCRIPT_HASH)
          {
            return ScriptType::SHELL_SCRIPT;
          }
          else if (hashCode == POWERSHELL_SCRIPT_HASH)
          {
            return ScriptType::POWERSHELL_SCRIPT;
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
          case ScriptType::SHELL_SCRIPT:
            return "SHELL_SCRIPT";
          case ScriptType::POWERSHELL_SCRIPT:
            return "POWERSHELL_SCRIPT";
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
  } // namespace SMS
} // namespace Aws
