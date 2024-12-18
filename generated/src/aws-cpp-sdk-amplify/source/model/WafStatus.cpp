/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/WafStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace WafStatusMapper
      {

        static const int ASSOCIATING_HASH = HashingUtils::HashString("ASSOCIATING");
        static const int ASSOCIATION_FAILED_HASH = HashingUtils::HashString("ASSOCIATION_FAILED");
        static const int ASSOCIATION_SUCCESS_HASH = HashingUtils::HashString("ASSOCIATION_SUCCESS");
        static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
        static const int DISASSOCIATION_FAILED_HASH = HashingUtils::HashString("DISASSOCIATION_FAILED");


        WafStatus GetWafStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATING_HASH)
          {
            return WafStatus::ASSOCIATING;
          }
          else if (hashCode == ASSOCIATION_FAILED_HASH)
          {
            return WafStatus::ASSOCIATION_FAILED;
          }
          else if (hashCode == ASSOCIATION_SUCCESS_HASH)
          {
            return WafStatus::ASSOCIATION_SUCCESS;
          }
          else if (hashCode == DISASSOCIATING_HASH)
          {
            return WafStatus::DISASSOCIATING;
          }
          else if (hashCode == DISASSOCIATION_FAILED_HASH)
          {
            return WafStatus::DISASSOCIATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WafStatus>(hashCode);
          }

          return WafStatus::NOT_SET;
        }

        Aws::String GetNameForWafStatus(WafStatus enumValue)
        {
          switch(enumValue)
          {
          case WafStatus::NOT_SET:
            return {};
          case WafStatus::ASSOCIATING:
            return "ASSOCIATING";
          case WafStatus::ASSOCIATION_FAILED:
            return "ASSOCIATION_FAILED";
          case WafStatus::ASSOCIATION_SUCCESS:
            return "ASSOCIATION_SUCCESS";
          case WafStatus::DISASSOCIATING:
            return "DISASSOCIATING";
          case WafStatus::DISASSOCIATION_FAILED:
            return "DISASSOCIATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WafStatusMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
