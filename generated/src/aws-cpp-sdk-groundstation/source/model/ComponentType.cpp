/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ComponentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace ComponentTypeMapper
      {

        static const int LAMINAR_FLOW_HASH = HashingUtils::HashString("LAMINAR_FLOW");
        static const int PRISM_HASH = HashingUtils::HashString("PRISM");
        static const int DIGITIZER_HASH = HashingUtils::HashString("DIGITIZER");


        ComponentType GetComponentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAMINAR_FLOW_HASH)
          {
            return ComponentType::LAMINAR_FLOW;
          }
          else if (hashCode == PRISM_HASH)
          {
            return ComponentType::PRISM;
          }
          else if (hashCode == DIGITIZER_HASH)
          {
            return ComponentType::DIGITIZER;
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
          case ComponentType::LAMINAR_FLOW:
            return "LAMINAR_FLOW";
          case ComponentType::PRISM:
            return "PRISM";
          case ComponentType::DIGITIZER:
            return "DIGITIZER";
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
  } // namespace GroundStation
} // namespace Aws
