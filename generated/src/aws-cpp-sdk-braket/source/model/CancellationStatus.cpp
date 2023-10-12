/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/CancellationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace CancellationStatusMapper
      {

        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        CancellationStatus GetCancellationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCELLING_HASH)
          {
            return CancellationStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return CancellationStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CancellationStatus>(hashCode);
          }

          return CancellationStatus::NOT_SET;
        }

        Aws::String GetNameForCancellationStatus(CancellationStatus enumValue)
        {
          switch(enumValue)
          {
          case CancellationStatus::NOT_SET:
            return {};
          case CancellationStatus::CANCELLING:
            return "CANCELLING";
          case CancellationStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CancellationStatusMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
