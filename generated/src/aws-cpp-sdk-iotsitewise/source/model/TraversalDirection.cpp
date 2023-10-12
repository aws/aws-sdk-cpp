/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/TraversalDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace TraversalDirectionMapper
      {

        static constexpr uint32_t PARENT_HASH = ConstExprHashingUtils::HashString("PARENT");
        static constexpr uint32_t CHILD_HASH = ConstExprHashingUtils::HashString("CHILD");


        TraversalDirection GetTraversalDirectionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARENT_HASH)
          {
            return TraversalDirection::PARENT;
          }
          else if (hashCode == CHILD_HASH)
          {
            return TraversalDirection::CHILD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TraversalDirection>(hashCode);
          }

          return TraversalDirection::NOT_SET;
        }

        Aws::String GetNameForTraversalDirection(TraversalDirection enumValue)
        {
          switch(enumValue)
          {
          case TraversalDirection::NOT_SET:
            return {};
          case TraversalDirection::PARENT:
            return "PARENT";
          case TraversalDirection::CHILD:
            return "CHILD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TraversalDirectionMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
