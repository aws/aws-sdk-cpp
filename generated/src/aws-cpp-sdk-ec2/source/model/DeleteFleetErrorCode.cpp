/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteFleetErrorCode.h>
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
      namespace DeleteFleetErrorCodeMapper
      {

        static constexpr uint32_t fleetIdDoesNotExist_HASH = ConstExprHashingUtils::HashString("fleetIdDoesNotExist");
        static constexpr uint32_t fleetIdMalformed_HASH = ConstExprHashingUtils::HashString("fleetIdMalformed");
        static constexpr uint32_t fleetNotInDeletableState_HASH = ConstExprHashingUtils::HashString("fleetNotInDeletableState");
        static constexpr uint32_t unexpectedError_HASH = ConstExprHashingUtils::HashString("unexpectedError");


        DeleteFleetErrorCode GetDeleteFleetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == fleetIdDoesNotExist_HASH)
          {
            return DeleteFleetErrorCode::fleetIdDoesNotExist;
          }
          else if (hashCode == fleetIdMalformed_HASH)
          {
            return DeleteFleetErrorCode::fleetIdMalformed;
          }
          else if (hashCode == fleetNotInDeletableState_HASH)
          {
            return DeleteFleetErrorCode::fleetNotInDeletableState;
          }
          else if (hashCode == unexpectedError_HASH)
          {
            return DeleteFleetErrorCode::unexpectedError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteFleetErrorCode>(hashCode);
          }

          return DeleteFleetErrorCode::NOT_SET;
        }

        Aws::String GetNameForDeleteFleetErrorCode(DeleteFleetErrorCode enumValue)
        {
          switch(enumValue)
          {
          case DeleteFleetErrorCode::NOT_SET:
            return {};
          case DeleteFleetErrorCode::fleetIdDoesNotExist:
            return "fleetIdDoesNotExist";
          case DeleteFleetErrorCode::fleetIdMalformed:
            return "fleetIdMalformed";
          case DeleteFleetErrorCode::fleetNotInDeletableState:
            return "fleetNotInDeletableState";
          case DeleteFleetErrorCode::unexpectedError:
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

      } // namespace DeleteFleetErrorCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
