/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int INVALID_GRAPH_ARN_HASH = HashingUtils::HashString("INVALID_GRAPH_ARN");
        static const int INVALID_REQUEST_BODY_HASH = HashingUtils::HashString("INVALID_REQUEST_BODY");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_GRAPH_ARN_HASH)
          {
            return ErrorCode::INVALID_GRAPH_ARN;
          }
          else if (hashCode == INVALID_REQUEST_BODY_HASH)
          {
            return ErrorCode::INVALID_REQUEST_BODY;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ErrorCode::INTERNAL_ERROR;
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
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::INVALID_GRAPH_ARN:
            return "INVALID_GRAPH_ARN";
          case ErrorCode::INVALID_REQUEST_BODY:
            return "INVALID_REQUEST_BODY";
          case ErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
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
  } // namespace Detective
} // namespace Aws
