/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/MeshStatusCode.h>
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
      namespace MeshStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        MeshStatusCode GetMeshStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return MeshStatusCode::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return MeshStatusCode::INACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return MeshStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MeshStatusCode>(hashCode);
          }

          return MeshStatusCode::NOT_SET;
        }

        Aws::String GetNameForMeshStatusCode(MeshStatusCode enumValue)
        {
          switch(enumValue)
          {
          case MeshStatusCode::ACTIVE:
            return "ACTIVE";
          case MeshStatusCode::INACTIVE:
            return "INACTIVE";
          case MeshStatusCode::DELETED:
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

      } // namespace MeshStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
