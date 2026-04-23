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

#include <aws/ec2/model/InterfacePermissionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace InterfacePermissionTypeMapper
      {

        static const int INSTANCE_ATTACH_HASH = HashingUtils::HashString("INSTANCE-ATTACH");
        static const int EIP_ASSOCIATE_HASH = HashingUtils::HashString("EIP-ASSOCIATE");


        InterfacePermissionType GetInterfacePermissionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANCE_ATTACH_HASH)
          {
            return InterfacePermissionType::INSTANCE_ATTACH;
          }
          else if (hashCode == EIP_ASSOCIATE_HASH)
          {
            return InterfacePermissionType::EIP_ASSOCIATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InterfacePermissionType>(hashCode);
          }

          return InterfacePermissionType::NOT_SET;
        }

        Aws::String GetNameForInterfacePermissionType(InterfacePermissionType enumValue)
        {
          switch(enumValue)
          {
          case InterfacePermissionType::INSTANCE_ATTACH:
            return "INSTANCE-ATTACH";
          case InterfacePermissionType::EIP_ASSOCIATE:
            return "EIP-ASSOCIATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InterfacePermissionTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
