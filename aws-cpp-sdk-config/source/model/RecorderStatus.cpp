/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RecorderStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace RecorderStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failure_HASH = HashingUtils::HashString("Failure");


        RecorderStatus GetRecorderStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return RecorderStatus::Pending;
          }
          else if (hashCode == Success_HASH)
          {
            return RecorderStatus::Success;
          }
          else if (hashCode == Failure_HASH)
          {
            return RecorderStatus::Failure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecorderStatus>(hashCode);
          }

          return RecorderStatus::NOT_SET;
        }

        Aws::String GetNameForRecorderStatus(RecorderStatus enumValue)
        {
          switch(enumValue)
          {
          case RecorderStatus::Pending:
            return "Pending";
          case RecorderStatus::Success:
            return "Success";
          case RecorderStatus::Failure:
            return "Failure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecorderStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
