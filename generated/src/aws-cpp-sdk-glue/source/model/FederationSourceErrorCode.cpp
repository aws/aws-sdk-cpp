/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FederationSourceErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace FederationSourceErrorCodeMapper
      {

        static const int AccessDeniedException_HASH = HashingUtils::HashString("AccessDeniedException");
        static const int EntityNotFoundException_HASH = HashingUtils::HashString("EntityNotFoundException");
        static const int InvalidCredentialsException_HASH = HashingUtils::HashString("InvalidCredentialsException");
        static const int InvalidInputException_HASH = HashingUtils::HashString("InvalidInputException");
        static const int InvalidResponseException_HASH = HashingUtils::HashString("InvalidResponseException");
        static const int OperationTimeoutException_HASH = HashingUtils::HashString("OperationTimeoutException");
        static const int OperationNotSupportedException_HASH = HashingUtils::HashString("OperationNotSupportedException");
        static const int InternalServiceException_HASH = HashingUtils::HashString("InternalServiceException");
        static const int PartialFailureException_HASH = HashingUtils::HashString("PartialFailureException");
        static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");


        FederationSourceErrorCode GetFederationSourceErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccessDeniedException_HASH)
          {
            return FederationSourceErrorCode::AccessDeniedException;
          }
          else if (hashCode == EntityNotFoundException_HASH)
          {
            return FederationSourceErrorCode::EntityNotFoundException;
          }
          else if (hashCode == InvalidCredentialsException_HASH)
          {
            return FederationSourceErrorCode::InvalidCredentialsException;
          }
          else if (hashCode == InvalidInputException_HASH)
          {
            return FederationSourceErrorCode::InvalidInputException;
          }
          else if (hashCode == InvalidResponseException_HASH)
          {
            return FederationSourceErrorCode::InvalidResponseException;
          }
          else if (hashCode == OperationTimeoutException_HASH)
          {
            return FederationSourceErrorCode::OperationTimeoutException;
          }
          else if (hashCode == OperationNotSupportedException_HASH)
          {
            return FederationSourceErrorCode::OperationNotSupportedException;
          }
          else if (hashCode == InternalServiceException_HASH)
          {
            return FederationSourceErrorCode::InternalServiceException;
          }
          else if (hashCode == PartialFailureException_HASH)
          {
            return FederationSourceErrorCode::PartialFailureException;
          }
          else if (hashCode == ThrottlingException_HASH)
          {
            return FederationSourceErrorCode::ThrottlingException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FederationSourceErrorCode>(hashCode);
          }

          return FederationSourceErrorCode::NOT_SET;
        }

        Aws::String GetNameForFederationSourceErrorCode(FederationSourceErrorCode enumValue)
        {
          switch(enumValue)
          {
          case FederationSourceErrorCode::NOT_SET:
            return {};
          case FederationSourceErrorCode::AccessDeniedException:
            return "AccessDeniedException";
          case FederationSourceErrorCode::EntityNotFoundException:
            return "EntityNotFoundException";
          case FederationSourceErrorCode::InvalidCredentialsException:
            return "InvalidCredentialsException";
          case FederationSourceErrorCode::InvalidInputException:
            return "InvalidInputException";
          case FederationSourceErrorCode::InvalidResponseException:
            return "InvalidResponseException";
          case FederationSourceErrorCode::OperationTimeoutException:
            return "OperationTimeoutException";
          case FederationSourceErrorCode::OperationNotSupportedException:
            return "OperationNotSupportedException";
          case FederationSourceErrorCode::InternalServiceException:
            return "InternalServiceException";
          case FederationSourceErrorCode::PartialFailureException:
            return "PartialFailureException";
          case FederationSourceErrorCode::ThrottlingException:
            return "ThrottlingException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FederationSourceErrorCodeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
