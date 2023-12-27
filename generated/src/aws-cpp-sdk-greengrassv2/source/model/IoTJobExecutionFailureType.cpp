/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IoTJobExecutionFailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace IoTJobExecutionFailureTypeMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        IoTJobExecutionFailureType GetIoTJobExecutionFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return IoTJobExecutionFailureType::FAILED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return IoTJobExecutionFailureType::REJECTED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return IoTJobExecutionFailureType::TIMED_OUT;
          }
          else if (hashCode == ALL_HASH)
          {
            return IoTJobExecutionFailureType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IoTJobExecutionFailureType>(hashCode);
          }

          return IoTJobExecutionFailureType::NOT_SET;
        }

        Aws::String GetNameForIoTJobExecutionFailureType(IoTJobExecutionFailureType enumValue)
        {
          switch(enumValue)
          {
          case IoTJobExecutionFailureType::NOT_SET:
            return {};
          case IoTJobExecutionFailureType::FAILED:
            return "FAILED";
          case IoTJobExecutionFailureType::REJECTED:
            return "REJECTED";
          case IoTJobExecutionFailureType::TIMED_OUT:
            return "TIMED_OUT";
          case IoTJobExecutionFailureType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IoTJobExecutionFailureTypeMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
