/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ResourceWarningStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace ResourceWarningStatusMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int resolved_HASH = HashingUtils::HashString("resolved");


        ResourceWarningStatus GetResourceWarningStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return ResourceWarningStatus::active;
          }
          else if (hashCode == resolved_HASH)
          {
            return ResourceWarningStatus::resolved;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceWarningStatus>(hashCode);
          }

          return ResourceWarningStatus::NOT_SET;
        }

        Aws::String GetNameForResourceWarningStatus(ResourceWarningStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceWarningStatus::NOT_SET:
            return {};
          case ResourceWarningStatus::active:
            return "active";
          case ResourceWarningStatus::resolved:
            return "resolved";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceWarningStatusMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
