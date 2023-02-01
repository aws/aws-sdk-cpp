/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/BadRequestReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace BadRequestReasonMapper
      {

        static const int CODE_ERROR_HASH = HashingUtils::HashString("CODE_ERROR");


        BadRequestReason GetBadRequestReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODE_ERROR_HASH)
          {
            return BadRequestReason::CODE_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BadRequestReason>(hashCode);
          }

          return BadRequestReason::NOT_SET;
        }

        Aws::String GetNameForBadRequestReason(BadRequestReason enumValue)
        {
          switch(enumValue)
          {
          case BadRequestReason::CODE_ERROR:
            return "CODE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BadRequestReasonMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
