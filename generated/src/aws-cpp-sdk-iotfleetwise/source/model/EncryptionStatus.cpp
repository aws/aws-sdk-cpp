/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/EncryptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace EncryptionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILURE_HASH = HashingUtils::HashString("FAILURE");


        EncryptionStatus GetEncryptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return EncryptionStatus::PENDING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return EncryptionStatus::SUCCESS;
          }
          else if (hashCode == FAILURE_HASH)
          {
            return EncryptionStatus::FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionStatus>(hashCode);
          }

          return EncryptionStatus::NOT_SET;
        }

        Aws::String GetNameForEncryptionStatus(EncryptionStatus enumValue)
        {
          switch(enumValue)
          {
          case EncryptionStatus::NOT_SET:
            return {};
          case EncryptionStatus::PENDING:
            return "PENDING";
          case EncryptionStatus::SUCCESS:
            return "SUCCESS";
          case EncryptionStatus::FAILURE:
            return "FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionStatusMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
