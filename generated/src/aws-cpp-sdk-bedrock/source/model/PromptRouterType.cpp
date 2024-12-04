/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PromptRouterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace PromptRouterTypeMapper
      {

        static const int custom_HASH = HashingUtils::HashString("custom");
        static const int default__HASH = HashingUtils::HashString("default");


        PromptRouterType GetPromptRouterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == custom_HASH)
          {
            return PromptRouterType::custom;
          }
          else if (hashCode == default__HASH)
          {
            return PromptRouterType::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PromptRouterType>(hashCode);
          }

          return PromptRouterType::NOT_SET;
        }

        Aws::String GetNameForPromptRouterType(PromptRouterType enumValue)
        {
          switch(enumValue)
          {
          case PromptRouterType::NOT_SET:
            return {};
          case PromptRouterType::custom:
            return "custom";
          case PromptRouterType::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PromptRouterTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
