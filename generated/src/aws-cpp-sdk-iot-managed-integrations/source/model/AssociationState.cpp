/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/AssociationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace AssociationStateMapper
      {

        static const int ASSOCIATION_IN_PROGRESS_HASH = HashingUtils::HashString("ASSOCIATION_IN_PROGRESS");
        static const int ASSOCIATION_FAILED_HASH = HashingUtils::HashString("ASSOCIATION_FAILED");
        static const int ASSOCIATION_SUCCEEDED_HASH = HashingUtils::HashString("ASSOCIATION_SUCCEEDED");
        static const int ASSOCIATION_DELETING_HASH = HashingUtils::HashString("ASSOCIATION_DELETING");
        static const int REFRESH_TOKEN_EXPIRED_HASH = HashingUtils::HashString("REFRESH_TOKEN_EXPIRED");


        AssociationState GetAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATION_IN_PROGRESS_HASH)
          {
            return AssociationState::ASSOCIATION_IN_PROGRESS;
          }
          else if (hashCode == ASSOCIATION_FAILED_HASH)
          {
            return AssociationState::ASSOCIATION_FAILED;
          }
          else if (hashCode == ASSOCIATION_SUCCEEDED_HASH)
          {
            return AssociationState::ASSOCIATION_SUCCEEDED;
          }
          else if (hashCode == ASSOCIATION_DELETING_HASH)
          {
            return AssociationState::ASSOCIATION_DELETING;
          }
          else if (hashCode == REFRESH_TOKEN_EXPIRED_HASH)
          {
            return AssociationState::REFRESH_TOKEN_EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationState>(hashCode);
          }

          return AssociationState::NOT_SET;
        }

        Aws::String GetNameForAssociationState(AssociationState enumValue)
        {
          switch(enumValue)
          {
          case AssociationState::NOT_SET:
            return {};
          case AssociationState::ASSOCIATION_IN_PROGRESS:
            return "ASSOCIATION_IN_PROGRESS";
          case AssociationState::ASSOCIATION_FAILED:
            return "ASSOCIATION_FAILED";
          case AssociationState::ASSOCIATION_SUCCEEDED:
            return "ASSOCIATION_SUCCEEDED";
          case AssociationState::ASSOCIATION_DELETING:
            return "ASSOCIATION_DELETING";
          case AssociationState::REFRESH_TOKEN_EXPIRED:
            return "REFRESH_TOKEN_EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationStateMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
