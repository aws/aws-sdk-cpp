/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/NotifyWorkersFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace NotifyWorkersFailureCodeMapper
      {

        static const int SoftFailure_HASH = HashingUtils::HashString("SoftFailure");
        static const int HardFailure_HASH = HashingUtils::HashString("HardFailure");


        NotifyWorkersFailureCode GetNotifyWorkersFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SoftFailure_HASH)
          {
            return NotifyWorkersFailureCode::SoftFailure;
          }
          else if (hashCode == HardFailure_HASH)
          {
            return NotifyWorkersFailureCode::HardFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotifyWorkersFailureCode>(hashCode);
          }

          return NotifyWorkersFailureCode::NOT_SET;
        }

        Aws::String GetNameForNotifyWorkersFailureCode(NotifyWorkersFailureCode enumValue)
        {
          switch(enumValue)
          {
          case NotifyWorkersFailureCode::SoftFailure:
            return "SoftFailure";
          case NotifyWorkersFailureCode::HardFailure:
            return "HardFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotifyWorkersFailureCodeMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
