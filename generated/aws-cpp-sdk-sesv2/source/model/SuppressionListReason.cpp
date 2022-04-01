/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SuppressionListReason.h>
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
      namespace SuppressionListReasonMapper
      {

        static const int BOUNCE_HASH = HashingUtils::HashString("BOUNCE");
        static const int COMPLAINT_HASH = HashingUtils::HashString("COMPLAINT");


        SuppressionListReason GetSuppressionListReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOUNCE_HASH)
          {
            return SuppressionListReason::BOUNCE;
          }
          else if (hashCode == COMPLAINT_HASH)
          {
            return SuppressionListReason::COMPLAINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuppressionListReason>(hashCode);
          }

          return SuppressionListReason::NOT_SET;
        }

        Aws::String GetNameForSuppressionListReason(SuppressionListReason enumValue)
        {
          switch(enumValue)
          {
          case SuppressionListReason::BOUNCE:
            return "BOUNCE";
          case SuppressionListReason::COMPLAINT:
            return "COMPLAINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuppressionListReasonMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
