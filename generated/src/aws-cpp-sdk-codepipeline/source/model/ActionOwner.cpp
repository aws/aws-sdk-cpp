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

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int ThirdParty_HASH = HashingUtils::HashString("ThirdParty");
        static const int Custom_HASH = HashingUtils::HashString("Custom");


        ActionOwner GetActionOwnerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
