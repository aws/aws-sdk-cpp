/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StatusName.h>
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
      namespace StatusNameMapper
      {

        static const int reachability_HASH = HashingUtils::HashString("reachability");


        StatusName GetStatusNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == reachability_HASH)
          {
            return StatusName::reachability;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusName>(hashCode);
          }

          return StatusName::NOT_SET;
        }

        Aws::String GetNameForStatusName(StatusName enumValue)
        {
          switch(enumValue)
          {
          case StatusName::reachability:
            return "reachability";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
