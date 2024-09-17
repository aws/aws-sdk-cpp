/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EdgeDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace EdgeDirectionMapper
      {

        static const int UPSTREAM_HASH = HashingUtils::HashString("UPSTREAM");
        static const int DOWNSTREAM_HASH = HashingUtils::HashString("DOWNSTREAM");


        EdgeDirection GetEdgeDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPSTREAM_HASH)
          {
            return EdgeDirection::UPSTREAM;
          }
          else if (hashCode == DOWNSTREAM_HASH)
          {
            return EdgeDirection::DOWNSTREAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EdgeDirection>(hashCode);
          }

          return EdgeDirection::NOT_SET;
        }

        Aws::String GetNameForEdgeDirection(EdgeDirection enumValue)
        {
          switch(enumValue)
          {
          case EdgeDirection::NOT_SET:
            return {};
          case EdgeDirection::UPSTREAM:
            return "UPSTREAM";
          case EdgeDirection::DOWNSTREAM:
            return "DOWNSTREAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EdgeDirectionMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
