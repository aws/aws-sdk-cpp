/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int InternalError_HASH = HashingUtils::HashString("InternalError");
        static const int InvalidRequest_HASH = HashingUtils::HashString("InvalidRequest");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InternalError_HASH)
          {
            return ErrorCode::InternalError;
          }
          else if (hashCode == InvalidRequest_HASH)
          {
            return ErrorCode::InvalidRequest;
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
          case ErrorCode::InternalError:
            return "InternalError";
          case ErrorCode::InvalidRequest:
            return "InvalidRequest";
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
  } // namespace kendra
} // namespace Aws
