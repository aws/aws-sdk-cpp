/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        VirtualNodeStatusCode GetVirtualNodeStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return VirtualNodeStatusCode::ACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VirtualNodeStatusCode::DELETED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return VirtualNodeStatusCode::INACTIVE;
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
          case VirtualNodeStatusCode::DELETED:
            return "DELETED";
          case VirtualNodeStatusCode::INACTIVE:
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

      } // namespace VirtualNodeStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
