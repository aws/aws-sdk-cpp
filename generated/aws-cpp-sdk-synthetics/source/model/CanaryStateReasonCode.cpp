/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryStateReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace CanaryStateReasonCodeMapper
      {

        static const int INVALID_PERMISSIONS_HASH = HashingUtils::HashString("INVALID_PERMISSIONS");


        CanaryStateReasonCode GetCanaryStateReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_PERMISSIONS_HASH)
          {
            return CanaryStateReasonCode::INVALID_PERMISSIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CanaryStateReasonCode>(hashCode);
          }

          return CanaryStateReasonCode::NOT_SET;
        }

        Aws::String GetNameForCanaryStateReasonCode(CanaryStateReasonCode enumValue)
        {
          switch(enumValue)
          {
          case CanaryStateReasonCode::INVALID_PERMISSIONS:
            return "INVALID_PERMISSIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CanaryStateReasonCodeMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
