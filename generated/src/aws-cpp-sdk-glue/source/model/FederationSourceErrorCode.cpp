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

        static const int InvalidResponseException_HASH = HashingUtils::HashString("InvalidResponseException");
        static const int OperationTimeoutException_HASH = HashingUtils::HashString("OperationTimeoutException");
        static const int OperationNotSupportedException_HASH = HashingUtils::HashString("OperationNotSupportedException");
        static const int InternalServiceException_HASH = HashingUtils::HashString("InternalServiceException");
        static const int ThrottlingException_HASH = HashingUtils::HashString("ThrottlingException");


        FederationSourceErrorCode GetFederationSourceErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidResponseException_HASH)
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
          case FederationSourceErrorCode::InvalidResponseException:
            return "InvalidResponseException";
          case FederationSourceErrorCode::OperationTimeoutException:
            return "OperationTimeoutException";
          case FederationSourceErrorCode::OperationNotSupportedException:
            return "OperationNotSupportedException";
          case FederationSourceErrorCode::InternalServiceException:
            return "InternalServiceException";
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
