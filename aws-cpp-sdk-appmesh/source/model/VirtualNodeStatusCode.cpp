/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualNodeStatusCode.h>
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
      namespace VirtualNodeStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        VirtualNodeStatusCode GetVirtualNodeStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return VirtualNodeStatusCode::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return VirtualNodeStatusCode::INACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VirtualNodeStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualNodeStatusCode>(hashCode);
          }

          return VirtualNodeStatusCode::NOT_SET;
        }

        Aws::String GetNameForVirtualNodeStatusCode(VirtualNodeStatusCode enumValue)
        {
          switch(enumValue)
          {
          case VirtualNodeStatusCode::ACTIVE:
            return "ACTIVE";
          case VirtualNodeStatusCode::INACTIVE:
            return "INACTIVE";
          case VirtualNodeStatusCode::DELETED:
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

      } // namespace VirtualNodeStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
