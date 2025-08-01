/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Approval.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace ApprovalMapper
      {

        static const int approve_HASH = HashingUtils::HashString("approve");
        static const int decline_HASH = HashingUtils::HashString("decline");


        Approval GetApprovalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == approve_HASH)
          {
            return Approval::approve;
          }
          else if (hashCode == decline_HASH)
          {
            return Approval::decline;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Approval>(hashCode);
          }

          return Approval::NOT_SET;
        }

        Aws::String GetNameForApproval(Approval enumValue)
        {
          switch(enumValue)
          {
          case Approval::NOT_SET:
            return {};
          case Approval::approve:
            return "approve";
          case Approval::decline:
            return "decline";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApprovalMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
