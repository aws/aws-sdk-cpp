/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionOwner.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace ActionOwnerMapper
      {

        static constexpr uint32_t AWS_HASH = ConstExprHashingUtils::HashString("AWS");
        static constexpr uint32_t ThirdParty_HASH = ConstExprHashingUtils::HashString("ThirdParty");
        static constexpr uint32_t Custom_HASH = ConstExprHashingUtils::HashString("Custom");


        ActionOwner GetActionOwnerForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return ActionOwner::AWS;
          }
          else if (hashCode == ThirdParty_HASH)
          {
            return ActionOwner::ThirdParty;
          }
          else if (hashCode == Custom_HASH)
          {
            return ActionOwner::Custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionOwner>(hashCode);
          }

          return ActionOwner::NOT_SET;
        }

        Aws::String GetNameForActionOwner(ActionOwner enumValue)
        {
          switch(enumValue)
          {
          case ActionOwner::NOT_SET:
            return {};
          case ActionOwner::AWS:
            return "AWS";
          case ActionOwner::ThirdParty:
            return "ThirdParty";
          case ActionOwner::Custom:
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

      } // namespace ActionOwnerMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
