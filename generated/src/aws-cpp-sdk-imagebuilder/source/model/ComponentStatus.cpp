/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ComponentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace ComponentStatusMapper
      {

        static constexpr uint32_t DEPRECATED_HASH = ConstExprHashingUtils::HashString("DEPRECATED");


        ComponentStatus GetComponentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPRECATED_HASH)
          {
            return ComponentStatus::DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentStatus>(hashCode);
          }

          return ComponentStatus::NOT_SET;
        }

        Aws::String GetNameForComponentStatus(ComponentStatus enumValue)
        {
          switch(enumValue)
          {
          case ComponentStatus::NOT_SET:
            return {};
          case ComponentStatus::DEPRECATED:
            return "DEPRECATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
