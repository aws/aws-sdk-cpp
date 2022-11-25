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

        static const int fleetIdDoesNotExist_HASH = HashingUtils::HashString("fleetIdDoesNotExist");
        static const int fleetIdMalformed_HASH = HashingUtils::HashString("fleetIdMalformed");
        static const int fleetNotInDeletableState_HASH = HashingUtils::HashString("fleetNotInDeletableState");
        static const int unexpectedError_HASH = HashingUtils::HashString("unexpectedError");


        DeleteFleetErrorCode GetDeleteFleetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
