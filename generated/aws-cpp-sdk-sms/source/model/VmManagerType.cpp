/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/VmManagerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace VmManagerTypeMapper
      {

        static const int VSPHERE_HASH = HashingUtils::HashString("VSPHERE");
        static const int SCVMM_HASH = HashingUtils::HashString("SCVMM");
        static const int HYPERV_MANAGER_HASH = HashingUtils::HashString("HYPERV-MANAGER");


        VmManagerType GetVmManagerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VSPHERE_HASH)
          {
            return VmManagerType::VSPHERE;
          }
          else if (hashCode == SCVMM_HASH)
          {
            return VmManagerType::SCVMM;
          }
          else if (hashCode == HYPERV_MANAGER_HASH)
          {
            return VmManagerType::HYPERV_MANAGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VmManagerType>(hashCode);
          }

          return VmManagerType::NOT_SET;
        }

        Aws::String GetNameForVmManagerType(VmManagerType enumValue)
        {
          switch(enumValue)
          {
          case VmManagerType::VSPHERE:
            return "VSPHERE";
          case VmManagerType::SCVMM:
            return "SCVMM";
          case VmManagerType::HYPERV_MANAGER:
            return "HYPERV-MANAGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VmManagerTypeMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
