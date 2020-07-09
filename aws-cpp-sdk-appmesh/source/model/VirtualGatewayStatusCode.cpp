/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayStatusCode.h>
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
      namespace VirtualGatewayStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        VirtualGatewayStatusCode GetVirtualGatewayStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return VirtualGatewayStatusCode::ACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VirtualGatewayStatusCode::DELETED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return VirtualGatewayStatusCode::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualGatewayStatusCode>(hashCode);
          }

          return VirtualGatewayStatusCode::NOT_SET;
        }

        Aws::String GetNameForVirtualGatewayStatusCode(VirtualGatewayStatusCode enumValue)
        {
          switch(enumValue)
          {
          case VirtualGatewayStatusCode::ACTIVE:
            return "ACTIVE";
          case VirtualGatewayStatusCode::DELETED:
            return "DELETED";
          case VirtualGatewayStatusCode::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VirtualGatewayStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
