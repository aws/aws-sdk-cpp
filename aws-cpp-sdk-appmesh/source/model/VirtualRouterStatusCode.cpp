/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualRouterStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace VirtualRouterStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        VirtualRouterStatusCode GetVirtualRouterStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return VirtualRouterStatusCode::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return VirtualRouterStatusCode::INACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VirtualRouterStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualRouterStatusCode>(hashCode);
          }

          return VirtualRouterStatusCode::NOT_SET;
        }

        Aws::String GetNameForVirtualRouterStatusCode(VirtualRouterStatusCode enumValue)
        {
          switch(enumValue)
          {
          case VirtualRouterStatusCode::ACTIVE:
            return "ACTIVE";
          case VirtualRouterStatusCode::INACTIVE:
            return "INACTIVE";
          case VirtualRouterStatusCode::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VirtualRouterStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
