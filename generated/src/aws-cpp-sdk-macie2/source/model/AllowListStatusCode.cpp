/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AllowListStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace AllowListStatusCodeMapper
      {

        static constexpr uint32_t OK_HASH = ConstExprHashingUtils::HashString("OK");
        static constexpr uint32_t S3_OBJECT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("S3_OBJECT_NOT_FOUND");
        static constexpr uint32_t S3_USER_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("S3_USER_ACCESS_DENIED");
        static constexpr uint32_t S3_OBJECT_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("S3_OBJECT_ACCESS_DENIED");
        static constexpr uint32_t S3_THROTTLED_HASH = ConstExprHashingUtils::HashString("S3_THROTTLED");
        static constexpr uint32_t S3_OBJECT_OVERSIZE_HASH = ConstExprHashingUtils::HashString("S3_OBJECT_OVERSIZE");
        static constexpr uint32_t S3_OBJECT_EMPTY_HASH = ConstExprHashingUtils::HashString("S3_OBJECT_EMPTY");
        static constexpr uint32_t UNKNOWN_ERROR_HASH = ConstExprHashingUtils::HashString("UNKNOWN_ERROR");


        AllowListStatusCode GetAllowListStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return AllowListStatusCode::OK;
          }
          else if (hashCode == S3_OBJECT_NOT_FOUND_HASH)
          {
            return AllowListStatusCode::S3_OBJECT_NOT_FOUND;
          }
          else if (hashCode == S3_USER_ACCESS_DENIED_HASH)
          {
            return AllowListStatusCode::S3_USER_ACCESS_DENIED;
          }
          else if (hashCode == S3_OBJECT_ACCESS_DENIED_HASH)
          {
            return AllowListStatusCode::S3_OBJECT_ACCESS_DENIED;
          }
          else if (hashCode == S3_THROTTLED_HASH)
          {
            return AllowListStatusCode::S3_THROTTLED;
          }
          else if (hashCode == S3_OBJECT_OVERSIZE_HASH)
          {
            return AllowListStatusCode::S3_OBJECT_OVERSIZE;
          }
          else if (hashCode == S3_OBJECT_EMPTY_HASH)
          {
            return AllowListStatusCode::S3_OBJECT_EMPTY;
          }
          else if (hashCode == UNKNOWN_ERROR_HASH)
          {
            return AllowListStatusCode::UNKNOWN_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowListStatusCode>(hashCode);
          }

          return AllowListStatusCode::NOT_SET;
        }

        Aws::String GetNameForAllowListStatusCode(AllowListStatusCode enumValue)
        {
          switch(enumValue)
          {
          case AllowListStatusCode::NOT_SET:
            return {};
          case AllowListStatusCode::OK:
            return "OK";
          case AllowListStatusCode::S3_OBJECT_NOT_FOUND:
            return "S3_OBJECT_NOT_FOUND";
          case AllowListStatusCode::S3_USER_ACCESS_DENIED:
            return "S3_USER_ACCESS_DENIED";
          case AllowListStatusCode::S3_OBJECT_ACCESS_DENIED:
            return "S3_OBJECT_ACCESS_DENIED";
          case AllowListStatusCode::S3_THROTTLED:
            return "S3_THROTTLED";
          case AllowListStatusCode::S3_OBJECT_OVERSIZE:
            return "S3_OBJECT_OVERSIZE";
          case AllowListStatusCode::S3_OBJECT_EMPTY:
            return "S3_OBJECT_EMPTY";
          case AllowListStatusCode::UNKNOWN_ERROR:
            return "UNKNOWN_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowListStatusCodeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
