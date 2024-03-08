/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HostnameType.h>
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
      namespace HostnameTypeMapper
      {

        static const int ip_name_HASH = HashingUtils::HashString("ip-name");
        static const int resource_name_HASH = HashingUtils::HashString("resource-name");


        HostnameType GetHostnameTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ip_name_HASH)
          {
            return HostnameType::ip_name;
          }
          else if (hashCode == resource_name_HASH)
          {
            return HostnameType::resource_name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostnameType>(hashCode);
          }

          return HostnameType::NOT_SET;
        }

        Aws::String GetNameForHostnameType(HostnameType enumValue)
        {
          switch(enumValue)
          {
          case HostnameType::NOT_SET:
            return {};
          case HostnameType::ip_name:
            return "ip-name";
          case HostnameType::resource_name:
            return "resource-name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HostnameTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
