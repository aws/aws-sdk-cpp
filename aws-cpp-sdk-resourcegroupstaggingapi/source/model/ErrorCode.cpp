/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroupsTaggingAPI
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int InternalServiceException_HASH = HashingUtils::HashString("InternalServiceException");
        static const int InvalidParameterException_HASH = HashingUtils::HashString("InvalidParameterException");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InternalServiceException_HASH)
          {
            return ErrorCode::InternalServiceException;
          }
          else if (hashCode == InvalidParameterException_HASH)
          {
            return ErrorCode::InvalidParameterException;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::InternalServiceException:
            return "InternalServiceException";
          case ErrorCode::InvalidParameterException:
            return "InvalidParameterException";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace ResourceGroupsTaggingAPI
} // namespace Aws
