/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/UploaderStatus.h>
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
      namespace UploaderStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int USER_ERROR_HASH = HashingUtils::HashString("USER_ERROR");
        static const int SYSTEM_ERROR_HASH = HashingUtils::HashString("SYSTEM_ERROR");


        UploaderStatus GetUploaderStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return UploaderStatus::SUCCESS;
          }
          else if (hashCode == USER_ERROR_HASH)
          {
            return UploaderStatus::USER_ERROR;
          }
          else if (hashCode == SYSTEM_ERROR_HASH)
          {
            return UploaderStatus::SYSTEM_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UploaderStatus>(hashCode);
          }

          return UploaderStatus::NOT_SET;
        }

        Aws::String GetNameForUploaderStatus(UploaderStatus enumValue)
        {
          switch(enumValue)
          {
          case UploaderStatus::NOT_SET:
            return {};
          case UploaderStatus::SUCCESS:
            return "SUCCESS";
          case UploaderStatus::USER_ERROR:
            return "USER_ERROR";
          case UploaderStatus::SYSTEM_ERROR:
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

      } // namespace UploaderStatusMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
