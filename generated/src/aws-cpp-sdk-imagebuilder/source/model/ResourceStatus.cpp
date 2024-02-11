/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ResourceStatus.h>
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
      namespace ResourceStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ResourceStatus::AVAILABLE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ResourceStatus::DELETED;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return ResourceStatus::DEPRECATED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ResourceStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStatus>(hashCode);
          }

          return ResourceStatus::NOT_SET;
        }

        Aws::String GetNameForResourceStatus(ResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceStatus::NOT_SET:
            return {};
          case ResourceStatus::AVAILABLE:
            return "AVAILABLE";
          case ResourceStatus::DELETED:
            return "DELETED";
          case ResourceStatus::DEPRECATED:
            return "DEPRECATED";
          case ResourceStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
