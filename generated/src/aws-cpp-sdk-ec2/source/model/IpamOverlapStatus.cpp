/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamOverlapStatus.h>
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
      namespace IpamOverlapStatusMapper
      {

        static const int overlapping_HASH = HashingUtils::HashString("overlapping");
        static const int nonoverlapping_HASH = HashingUtils::HashString("nonoverlapping");
        static const int ignored_HASH = HashingUtils::HashString("ignored");


        IpamOverlapStatus GetIpamOverlapStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == overlapping_HASH)
          {
            return IpamOverlapStatus::overlapping;
          }
          else if (hashCode == nonoverlapping_HASH)
          {
            return IpamOverlapStatus::nonoverlapping;
          }
          else if (hashCode == ignored_HASH)
          {
            return IpamOverlapStatus::ignored;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamOverlapStatus>(hashCode);
          }

          return IpamOverlapStatus::NOT_SET;
        }

        Aws::String GetNameForIpamOverlapStatus(IpamOverlapStatus enumValue)
        {
          switch(enumValue)
          {
          case IpamOverlapStatus::NOT_SET:
            return {};
          case IpamOverlapStatus::overlapping:
            return "overlapping";
          case IpamOverlapStatus::nonoverlapping:
            return "nonoverlapping";
          case IpamOverlapStatus::ignored:
            return "ignored";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamOverlapStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
