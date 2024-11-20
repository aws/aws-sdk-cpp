/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/IdleFinding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace IdleFindingMapper
      {

        static const int Idle_HASH = HashingUtils::HashString("Idle");
        static const int Unattached_HASH = HashingUtils::HashString("Unattached");


        IdleFinding GetIdleFindingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Idle_HASH)
          {
            return IdleFinding::Idle;
          }
          else if (hashCode == Unattached_HASH)
          {
            return IdleFinding::Unattached;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdleFinding>(hashCode);
          }

          return IdleFinding::NOT_SET;
        }

        Aws::String GetNameForIdleFinding(IdleFinding enumValue)
        {
          switch(enumValue)
          {
          case IdleFinding::NOT_SET:
            return {};
          case IdleFinding::Idle:
            return "Idle";
          case IdleFinding::Unattached:
            return "Unattached";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdleFindingMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
