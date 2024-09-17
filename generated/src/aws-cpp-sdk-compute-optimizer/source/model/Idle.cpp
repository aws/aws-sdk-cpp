/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/Idle.h>
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
      namespace IdleMapper
      {

        static const int True_HASH = HashingUtils::HashString("True");
        static const int False_HASH = HashingUtils::HashString("False");


        Idle GetIdleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == True_HASH)
          {
            return Idle::True;
          }
          else if (hashCode == False_HASH)
          {
            return Idle::False;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Idle>(hashCode);
          }

          return Idle::NOT_SET;
        }

        Aws::String GetNameForIdle(Idle enumValue)
        {
          switch(enumValue)
          {
          case Idle::NOT_SET:
            return {};
          case Idle::True:
            return "True";
          case Idle::False:
            return "False";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdleMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
