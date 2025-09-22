/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/RepairAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace RepairActionMapper
      {

        static const int Replace_HASH = HashingUtils::HashString("Replace");
        static const int Reboot_HASH = HashingUtils::HashString("Reboot");
        static const int NoAction_HASH = HashingUtils::HashString("NoAction");


        RepairAction GetRepairActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Replace_HASH)
          {
            return RepairAction::Replace;
          }
          else if (hashCode == Reboot_HASH)
          {
            return RepairAction::Reboot;
          }
          else if (hashCode == NoAction_HASH)
          {
            return RepairAction::NoAction;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepairAction>(hashCode);
          }

          return RepairAction::NOT_SET;
        }

        Aws::String GetNameForRepairAction(RepairAction enumValue)
        {
          switch(enumValue)
          {
          case RepairAction::NOT_SET:
            return {};
          case RepairAction::Replace:
            return "Replace";
          case RepairAction::Reboot:
            return "Reboot";
          case RepairAction::NoAction:
            return "NoAction";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepairActionMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
