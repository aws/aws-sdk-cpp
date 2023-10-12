/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ComponentType.h>
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
      namespace ComponentTypeMapper
      {

        static constexpr uint32_t BUILD_HASH = ConstExprHashingUtils::HashString("BUILD");
        static constexpr uint32_t TEST_HASH = ConstExprHashingUtils::HashString("TEST");


        ComponentType GetComponentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILD_HASH)
          {
            return ComponentType::BUILD;
          }
          else if (hashCode == TEST_HASH)
          {
            return ComponentType::TEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentType>(hashCode);
          }

          return ComponentType::NOT_SET;
        }

        Aws::String GetNameForComponentType(ComponentType enumValue)
        {
          switch(enumValue)
          {
          case ComponentType::NOT_SET:
            return {};
          case ComponentType::BUILD:
            return "BUILD";
          case ComponentType::TEST:
            return "TEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
