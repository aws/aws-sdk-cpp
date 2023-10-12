/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/RecorderStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace RecorderStatusMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t USER_ERROR_HASH = ConstExprHashingUtils::HashString("USER_ERROR");
        static constexpr uint32_t SYSTEM_ERROR_HASH = ConstExprHashingUtils::HashString("SYSTEM_ERROR");


        RecorderStatus GetRecorderStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return RecorderStatus::SUCCESS;
          }
          else if (hashCode == USER_ERROR_HASH)
          {
            return RecorderStatus::USER_ERROR;
          }
          else if (hashCode == SYSTEM_ERROR_HASH)
          {
            return RecorderStatus::SYSTEM_ERROR;
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
          case RecorderStatus::NOT_SET:
            return {};
          case RecorderStatus::SUCCESS:
            return "SUCCESS";
          case RecorderStatus::USER_ERROR:
            return "USER_ERROR";
          case RecorderStatus::SYSTEM_ERROR:
            return "SYSTEM_ERROR";
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
  } // namespace KinesisVideo
} // namespace Aws
