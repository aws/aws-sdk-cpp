/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace SlaStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Overdue_HASH = HashingUtils::HashString("Overdue");
        static const int Met_HASH = HashingUtils::HashString("Met");
        static const int NotMet_HASH = HashingUtils::HashString("NotMet");


        SlaStatus GetSlaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return SlaStatus::Active;
          }
          else if (hashCode == Overdue_HASH)
          {
            return SlaStatus::Overdue;
          }
          else if (hashCode == Met_HASH)
          {
            return SlaStatus::Met;
          }
          else if (hashCode == NotMet_HASH)
          {
            return SlaStatus::NotMet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlaStatus>(hashCode);
          }

          return SlaStatus::NOT_SET;
        }

        Aws::String GetNameForSlaStatus(SlaStatus enumValue)
        {
          switch(enumValue)
          {
          case SlaStatus::NOT_SET:
            return {};
          case SlaStatus::Active:
            return "Active";
          case SlaStatus::Overdue:
            return "Overdue";
          case SlaStatus::Met:
            return "Met";
          case SlaStatus::NotMet:
            return "NotMet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlaStatusMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
