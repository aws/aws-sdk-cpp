/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllowedImagesSettingsDisabledState.h>
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
      namespace AllowedImagesSettingsDisabledStateMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");


        AllowedImagesSettingsDisabledState GetAllowedImagesSettingsDisabledStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return AllowedImagesSettingsDisabledState::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowedImagesSettingsDisabledState>(hashCode);
          }

          return AllowedImagesSettingsDisabledState::NOT_SET;
        }

        Aws::String GetNameForAllowedImagesSettingsDisabledState(AllowedImagesSettingsDisabledState enumValue)
        {
          switch(enumValue)
          {
          case AllowedImagesSettingsDisabledState::NOT_SET:
            return {};
          case AllowedImagesSettingsDisabledState::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowedImagesSettingsDisabledStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
