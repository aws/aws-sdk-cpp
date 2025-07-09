/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityBlockInterconnectStatus.h>
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
      namespace CapacityBlockInterconnectStatusMapper
      {

        static const int ok_HASH = HashingUtils::HashString("ok");
        static const int impaired_HASH = HashingUtils::HashString("impaired");
        static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");


        CapacityBlockInterconnectStatus GetCapacityBlockInterconnectStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ok_HASH)
          {
            return CapacityBlockInterconnectStatus::ok;
          }
          else if (hashCode == impaired_HASH)
          {
            return CapacityBlockInterconnectStatus::impaired;
          }
          else if (hashCode == insufficient_data_HASH)
          {
            return CapacityBlockInterconnectStatus::insufficient_data;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityBlockInterconnectStatus>(hashCode);
          }

          return CapacityBlockInterconnectStatus::NOT_SET;
        }

        Aws::String GetNameForCapacityBlockInterconnectStatus(CapacityBlockInterconnectStatus enumValue)
        {
          switch(enumValue)
          {
          case CapacityBlockInterconnectStatus::NOT_SET:
            return {};
          case CapacityBlockInterconnectStatus::ok:
            return "ok";
          case CapacityBlockInterconnectStatus::impaired:
            return "impaired";
          case CapacityBlockInterconnectStatus::insufficient_data:
            return "insufficient-data";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityBlockInterconnectStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
