/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ServiceManagedFleetOperatingSystemFamily.h>
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
      namespace ServiceManagedFleetOperatingSystemFamilyMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");


        ServiceManagedFleetOperatingSystemFamily GetServiceManagedFleetOperatingSystemFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return ServiceManagedFleetOperatingSystemFamily::WINDOWS;
          }
          else if (hashCode == LINUX_HASH)
          {
            return ServiceManagedFleetOperatingSystemFamily::LINUX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceManagedFleetOperatingSystemFamily>(hashCode);
          }

          return ServiceManagedFleetOperatingSystemFamily::NOT_SET;
        }

        Aws::String GetNameForServiceManagedFleetOperatingSystemFamily(ServiceManagedFleetOperatingSystemFamily enumValue)
        {
          switch(enumValue)
          {
          case ServiceManagedFleetOperatingSystemFamily::NOT_SET:
            return {};
          case ServiceManagedFleetOperatingSystemFamily::WINDOWS:
            return "WINDOWS";
          case ServiceManagedFleetOperatingSystemFamily::LINUX:
            return "LINUX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceManagedFleetOperatingSystemFamilyMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
