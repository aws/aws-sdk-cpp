/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ShutdownBehavior.h>
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
      namespace ShutdownBehaviorMapper
      {

        static const int stop_HASH = HashingUtils::HashString("stop");
        static const int terminate_HASH = HashingUtils::HashString("terminate");


        ShutdownBehavior GetShutdownBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == stop_HASH)
          {
            return ShutdownBehavior::stop;
          }
          else if (hashCode == terminate_HASH)
          {
            return ShutdownBehavior::terminate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShutdownBehavior>(hashCode);
          }

          return ShutdownBehavior::NOT_SET;
        }

        Aws::String GetNameForShutdownBehavior(ShutdownBehavior enumValue)
        {
          switch(enumValue)
          {
          case ShutdownBehavior::stop:
            return "stop";
          case ShutdownBehavior::terminate:
            return "terminate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShutdownBehaviorMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
