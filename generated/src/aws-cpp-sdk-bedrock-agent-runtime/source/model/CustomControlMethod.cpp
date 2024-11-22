/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/CustomControlMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace CustomControlMethodMapper
      {

        static const int RETURN_CONTROL_HASH = HashingUtils::HashString("RETURN_CONTROL");


        CustomControlMethod GetCustomControlMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETURN_CONTROL_HASH)
          {
            return CustomControlMethod::RETURN_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomControlMethod>(hashCode);
          }

          return CustomControlMethod::NOT_SET;
        }

        Aws::String GetNameForCustomControlMethod(CustomControlMethod enumValue)
        {
          switch(enumValue)
          {
          case CustomControlMethod::NOT_SET:
            return {};
          case CustomControlMethod::RETURN_CONTROL:
            return "RETURN_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomControlMethodMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
