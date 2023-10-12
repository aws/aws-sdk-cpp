/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelBatchErrorCode.h>
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
      namespace CancelBatchErrorCodeMapper
      {

        static constexpr uint32_t fleetRequestIdDoesNotExist_HASH = ConstExprHashingUtils::HashString("fleetRequestIdDoesNotExist");
        static constexpr uint32_t fleetRequestIdMalformed_HASH = ConstExprHashingUtils::HashString("fleetRequestIdMalformed");
        static constexpr uint32_t fleetRequestNotInCancellableState_HASH = ConstExprHashingUtils::HashString("fleetRequestNotInCancellableState");
        static constexpr uint32_t unexpectedError_HASH = ConstExprHashingUtils::HashString("unexpectedError");


        CancelBatchErrorCode GetCancelBatchErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == fleetRequestIdDoesNotExist_HASH)
          {
            return CancelBatchErrorCode::fleetRequestIdDoesNotExist;
          }
          else if (hashCode == fleetRequestIdMalformed_HASH)
          {
            return CancelBatchErrorCode::fleetRequestIdMalformed;
          }
          else if (hashCode == fleetRequestNotInCancellableState_HASH)
          {
            return CancelBatchErrorCode::fleetRequestNotInCancellableState;
          }
          else if (hashCode == unexpectedError_HASH)
          {
            return CancelBatchErrorCode::unexpectedError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CancelBatchErrorCode>(hashCode);
          }

          return CancelBatchErrorCode::NOT_SET;
        }

        Aws::String GetNameForCancelBatchErrorCode(CancelBatchErrorCode enumValue)
        {
          switch(enumValue)
          {
          case CancelBatchErrorCode::NOT_SET:
            return {};
          case CancelBatchErrorCode::fleetRequestIdDoesNotExist:
            return "fleetRequestIdDoesNotExist";
          case CancelBatchErrorCode::fleetRequestIdMalformed:
            return "fleetRequestIdMalformed";
          case CancelBatchErrorCode::fleetRequestNotInCancellableState:
            return "fleetRequestNotInCancellableState";
          case CancelBatchErrorCode::unexpectedError:
            return "unexpectedError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CancelBatchErrorCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
