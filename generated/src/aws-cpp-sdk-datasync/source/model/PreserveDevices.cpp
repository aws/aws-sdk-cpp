/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/PreserveDevices.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace PreserveDevicesMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");


        PreserveDevices GetPreserveDevicesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return PreserveDevices::NONE;
          }
          else if (hashCode == PRESERVE_HASH)
          {
            return PreserveDevices::PRESERVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreserveDevices>(hashCode);
          }

          return PreserveDevices::NOT_SET;
        }

        Aws::String GetNameForPreserveDevices(PreserveDevices enumValue)
        {
          switch(enumValue)
          {
          case PreserveDevices::NONE:
            return "NONE";
          case PreserveDevices::PRESERVE:
            return "PRESERVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreserveDevicesMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
