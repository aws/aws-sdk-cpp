/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/PolicyAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace PolicyActionMapper
      {

        static const int Delete_HASH = HashingUtils::HashString("Delete");
        static const int Retain_HASH = HashingUtils::HashString("Retain");
        static const int Snapshot_HASH = HashingUtils::HashString("Snapshot");
        static const int ReplaceAndDelete_HASH = HashingUtils::HashString("ReplaceAndDelete");
        static const int ReplaceAndRetain_HASH = HashingUtils::HashString("ReplaceAndRetain");
        static const int ReplaceAndSnapshot_HASH = HashingUtils::HashString("ReplaceAndSnapshot");


        PolicyAction GetPolicyActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Delete_HASH)
          {
            return PolicyAction::Delete;
          }
          else if (hashCode == Retain_HASH)
          {
            return PolicyAction::Retain;
          }
          else if (hashCode == Snapshot_HASH)
          {
            return PolicyAction::Snapshot;
          }
          else if (hashCode == ReplaceAndDelete_HASH)
          {
            return PolicyAction::ReplaceAndDelete;
          }
          else if (hashCode == ReplaceAndRetain_HASH)
          {
            return PolicyAction::ReplaceAndRetain;
          }
          else if (hashCode == ReplaceAndSnapshot_HASH)
          {
            return PolicyAction::ReplaceAndSnapshot;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyAction>(hashCode);
          }

          return PolicyAction::NOT_SET;
        }

        Aws::String GetNameForPolicyAction(PolicyAction enumValue)
        {
          switch(enumValue)
          {
          case PolicyAction::NOT_SET:
            return {};
          case PolicyAction::Delete:
            return "Delete";
          case PolicyAction::Retain:
            return "Retain";
          case PolicyAction::Snapshot:
            return "Snapshot";
          case PolicyAction::ReplaceAndDelete:
            return "ReplaceAndDelete";
          case PolicyAction::ReplaceAndRetain:
            return "ReplaceAndRetain";
          case PolicyAction::ReplaceAndSnapshot:
            return "ReplaceAndSnapshot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyActionMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
