/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualServiceStatusCode.h>
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
      namespace VirtualServiceStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        VirtualServiceStatusCode GetVirtualServiceStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return VirtualServiceStatusCode::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return VirtualServiceStatusCode::INACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VirtualServiceStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualServiceStatusCode>(hashCode);
          }

          return VirtualServiceStatusCode::NOT_SET;
        }

        Aws::String GetNameForVirtualServiceStatusCode(VirtualServiceStatusCode enumValue)
        {
          switch(enumValue)
          {
          case VirtualServiceStatusCode::ACTIVE:
            return "ACTIVE";
          case VirtualServiceStatusCode::INACTIVE:
            return "INACTIVE";
          case VirtualServiceStatusCode::DELETED:
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

      } // namespace VirtualServiceStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
