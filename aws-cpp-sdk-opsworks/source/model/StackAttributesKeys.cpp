/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/StackAttributesKeys.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace StackAttributesKeysMapper
      {

        static const int Color_HASH = HashingUtils::HashString("Color");


        StackAttributesKeys GetStackAttributesKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Color_HASH)
          {
            return StackAttributesKeys::Color;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackAttributesKeys>(hashCode);
          }

          return StackAttributesKeys::NOT_SET;
        }

        Aws::String GetNameForStackAttributesKeys(StackAttributesKeys enumValue)
        {
          switch(enumValue)
          {
          case StackAttributesKeys::Color:
            return "Color";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackAttributesKeysMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
