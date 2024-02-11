/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ResourceSetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace ResourceSetStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int OUT_OF_ADMIN_SCOPE_HASH = HashingUtils::HashString("OUT_OF_ADMIN_SCOPE");


        ResourceSetStatus GetResourceSetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ResourceSetStatus::ACTIVE;
          }
          else if (hashCode == OUT_OF_ADMIN_SCOPE_HASH)
          {
            return ResourceSetStatus::OUT_OF_ADMIN_SCOPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSetStatus>(hashCode);
          }

          return ResourceSetStatus::NOT_SET;
        }

        Aws::String GetNameForResourceSetStatus(ResourceSetStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceSetStatus::NOT_SET:
            return {};
          case ResourceSetStatus::ACTIVE:
            return "ACTIVE";
          case ResourceSetStatus::OUT_OF_ADMIN_SCOPE:
            return "OUT_OF_ADMIN_SCOPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSetStatusMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
