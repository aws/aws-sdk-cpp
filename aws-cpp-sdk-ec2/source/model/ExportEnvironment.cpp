/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ExportEnvironment.h>
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
      namespace ExportEnvironmentMapper
      {

        static const int citrix_HASH = HashingUtils::HashString("citrix");
        static const int vmware_HASH = HashingUtils::HashString("vmware");
        static const int microsoft_HASH = HashingUtils::HashString("microsoft");


        ExportEnvironment GetExportEnvironmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == citrix_HASH)
          {
            return ExportEnvironment::citrix;
          }
          else if (hashCode == vmware_HASH)
          {
            return ExportEnvironment::vmware;
          }
          else if (hashCode == microsoft_HASH)
          {
            return ExportEnvironment::microsoft;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportEnvironment>(hashCode);
          }

          return ExportEnvironment::NOT_SET;
        }

        Aws::String GetNameForExportEnvironment(ExportEnvironment enumValue)
        {
          switch(enumValue)
          {
          case ExportEnvironment::citrix:
            return "citrix";
          case ExportEnvironment::vmware:
            return "vmware";
          case ExportEnvironment::microsoft:
            return "microsoft";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportEnvironmentMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
