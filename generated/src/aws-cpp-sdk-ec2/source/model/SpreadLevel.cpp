/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpreadLevel.h>
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
      namespace SpreadLevelMapper
      {

        static const int host_HASH = HashingUtils::HashString("host");
        static const int rack_HASH = HashingUtils::HashString("rack");


        SpreadLevel GetSpreadLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == host_HASH)
          {
            return SpreadLevel::host;
          }
          else if (hashCode == rack_HASH)
          {
            return SpreadLevel::rack;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpreadLevel>(hashCode);
          }

          return SpreadLevel::NOT_SET;
        }

        Aws::String GetNameForSpreadLevel(SpreadLevel enumValue)
        {
          switch(enumValue)
          {
          case SpreadLevel::NOT_SET:
            return {};
          case SpreadLevel::host:
            return "host";
          case SpreadLevel::rack:
            return "rack";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpreadLevelMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
