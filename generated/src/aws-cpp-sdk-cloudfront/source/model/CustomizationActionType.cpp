/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CustomizationActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace CustomizationActionTypeMapper
      {

        static const int override_HASH = HashingUtils::HashString("override");
        static const int disable_HASH = HashingUtils::HashString("disable");


        CustomizationActionType GetCustomizationActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == override_HASH)
          {
            return CustomizationActionType::override;
          }
          else if (hashCode == disable_HASH)
          {
            return CustomizationActionType::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomizationActionType>(hashCode);
          }

          return CustomizationActionType::NOT_SET;
        }

        Aws::String GetNameForCustomizationActionType(CustomizationActionType enumValue)
        {
          switch(enumValue)
          {
          case CustomizationActionType::NOT_SET:
            return {};
          case CustomizationActionType::override:
            return "override";
          case CustomizationActionType::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomizationActionTypeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
