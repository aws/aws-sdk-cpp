/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/PipBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace PipBehaviorMapper
      {

        static const int STATIC__HASH = HashingUtils::HashString("STATIC");
        static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");


        PipBehavior GetPipBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return PipBehavior::STATIC_;
          }
          else if (hashCode == DYNAMIC_HASH)
          {
            return PipBehavior::DYNAMIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipBehavior>(hashCode);
          }

          return PipBehavior::NOT_SET;
        }

        Aws::String GetNameForPipBehavior(PipBehavior enumValue)
        {
          switch(enumValue)
          {
          case PipBehavior::NOT_SET:
            return {};
          case PipBehavior::STATIC_:
            return "STATIC";
          case PipBehavior::DYNAMIC:
            return "DYNAMIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipBehaviorMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
