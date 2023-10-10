/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowModuleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ContactFlowModuleStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        ContactFlowModuleState GetContactFlowModuleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ContactFlowModuleState::ACTIVE;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return ContactFlowModuleState::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactFlowModuleState>(hashCode);
          }

          return ContactFlowModuleState::NOT_SET;
        }

        Aws::String GetNameForContactFlowModuleState(ContactFlowModuleState enumValue)
        {
          switch(enumValue)
          {
          case ContactFlowModuleState::NOT_SET:
            return {};
          case ContactFlowModuleState::ACTIVE:
            return "ACTIVE";
          case ContactFlowModuleState::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactFlowModuleStateMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
