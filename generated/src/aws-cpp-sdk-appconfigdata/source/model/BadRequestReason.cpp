/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/BadRequestReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfigData
  {
    namespace Model
    {
      namespace BadRequestReasonMapper
      {

        static const int InvalidParameters_HASH = HashingUtils::HashString("InvalidParameters");


        BadRequestReason GetBadRequestReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidParameters_HASH)
          {
            return BadRequestReason::InvalidParameters;
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
          case BadRequestReason::NOT_SET:
            return {};
          case BadRequestReason::InvalidParameters:
            return "InvalidParameters";
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
  } // namespace AppConfigData
} // namespace Aws
