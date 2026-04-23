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

#include <aws/workmail/model/PermissionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace PermissionTypeMapper
      {

        static const int FULL_ACCESS_HASH = HashingUtils::HashString("FULL_ACCESS");
        static const int SEND_AS_HASH = HashingUtils::HashString("SEND_AS");
        static const int SEND_ON_BEHALF_HASH = HashingUtils::HashString("SEND_ON_BEHALF");


        PermissionType GetPermissionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_ACCESS_HASH)
          {
            return PermissionType::FULL_ACCESS;
          }
          else if (hashCode == SEND_AS_HASH)
          {
            return PermissionType::SEND_AS;
          }
          else if (hashCode == SEND_ON_BEHALF_HASH)
          {
            return PermissionType::SEND_ON_BEHALF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionType>(hashCode);
          }

          return PermissionType::NOT_SET;
        }

        Aws::String GetNameForPermissionType(PermissionType enumValue)
        {
          switch(enumValue)
          {
          case PermissionType::FULL_ACCESS:
            return "FULL_ACCESS";
          case PermissionType::SEND_AS:
            return "SEND_AS";
          case PermissionType::SEND_ON_BEHALF:
            return "SEND_ON_BEHALF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionTypeMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
