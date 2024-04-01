/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CustomerManagedFleetOperatingSystemFamily.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace CustomerManagedFleetOperatingSystemFamilyMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");
        static const int MACOS_HASH = HashingUtils::HashString("MACOS");


        CustomerManagedFleetOperatingSystemFamily GetCustomerManagedFleetOperatingSystemFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return CustomerManagedFleetOperatingSystemFamily::WINDOWS;
          }
          else if (hashCode == LINUX_HASH)
          {
            return CustomerManagedFleetOperatingSystemFamily::LINUX;
          }
          else if (hashCode == MACOS_HASH)
          {
            return CustomerManagedFleetOperatingSystemFamily::MACOS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerManagedFleetOperatingSystemFamily>(hashCode);
          }

          return CustomerManagedFleetOperatingSystemFamily::NOT_SET;
        }

        Aws::String GetNameForCustomerManagedFleetOperatingSystemFamily(CustomerManagedFleetOperatingSystemFamily enumValue)
        {
          switch(enumValue)
          {
          case CustomerManagedFleetOperatingSystemFamily::NOT_SET:
            return {};
          case CustomerManagedFleetOperatingSystemFamily::WINDOWS:
            return "WINDOWS";
          case CustomerManagedFleetOperatingSystemFamily::LINUX:
            return "LINUX";
          case CustomerManagedFleetOperatingSystemFamily::MACOS:
            return "MACOS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerManagedFleetOperatingSystemFamilyMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
