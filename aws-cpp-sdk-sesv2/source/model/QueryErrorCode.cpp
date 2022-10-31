/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/QueryErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace QueryErrorCodeMapper
      {

        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");


        QueryErrorCode GetQueryErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return QueryErrorCode::INTERNAL_FAILURE;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return QueryErrorCode::ACCESS_DENIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryErrorCode>(hashCode);
          }

          return QueryErrorCode::NOT_SET;
        }

        Aws::String GetNameForQueryErrorCode(QueryErrorCode enumValue)
        {
          switch(enumValue)
          {
          case QueryErrorCode::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case QueryErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryErrorCodeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
