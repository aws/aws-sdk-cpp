/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
