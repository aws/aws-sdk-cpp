/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ConversionTaskState.h>
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
      namespace ConversionTaskStateMapper
      {

        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t cancelling_HASH = ConstExprHashingUtils::HashString("cancelling");
        static constexpr uint32_t cancelled_HASH = ConstExprHashingUtils::HashString("cancelled");
        static constexpr uint32_t completed_HASH = ConstExprHashingUtils::HashString("completed");


        ConversionTaskState GetConversionTaskStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return ConversionTaskState::active;
          }
          else if (hashCode == cancelling_HASH)
          {
            return ConversionTaskState::cancelling;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ConversionTaskState::cancelled;
          }
          else if (hashCode == completed_HASH)
          {
            return ConversionTaskState::completed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversionTaskState>(hashCode);
          }

          return ConversionTaskState::NOT_SET;
        }

        Aws::String GetNameForConversionTaskState(ConversionTaskState enumValue)
        {
          switch(enumValue)
          {
          case ConversionTaskState::NOT_SET:
            return {};
          case ConversionTaskState::active:
            return "active";
          case ConversionTaskState::cancelling:
            return "cancelling";
          case ConversionTaskState::cancelled:
            return "cancelled";
          case ConversionTaskState::completed:
            return "completed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConversionTaskStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
