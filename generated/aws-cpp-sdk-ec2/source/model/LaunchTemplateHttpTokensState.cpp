/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateHttpTokensState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace LaunchTemplateHttpTokensStateMapper
      {

        static const int optional_HASH = HashingUtils::HashString("optional");
        static const int required_HASH = HashingUtils::HashString("required");


        LaunchTemplateHttpTokensState GetLaunchTemplateHttpTokensStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == optional_HASH)
          {
            return LaunchTemplateHttpTokensState::optional;
          }
          else if (hashCode == required_HASH)
          {
            return LaunchTemplateHttpTokensState::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchTemplateHttpTokensState>(hashCode);
          }

          return LaunchTemplateHttpTokensState::NOT_SET;
        }

        Aws::String GetNameForLaunchTemplateHttpTokensState(LaunchTemplateHttpTokensState enumValue)
        {
          switch(enumValue)
          {
          case LaunchTemplateHttpTokensState::optional:
            return "optional";
          case LaunchTemplateHttpTokensState::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchTemplateHttpTokensStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
