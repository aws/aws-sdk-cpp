/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowState.h>
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
      namespace ContactFlowStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        ContactFlowState GetContactFlowStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ContactFlowState::ACTIVE;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return ContactFlowState::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactFlowState>(hashCode);
          }

          return ContactFlowState::NOT_SET;
        }

        Aws::String GetNameForContactFlowState(ContactFlowState enumValue)
        {
          switch(enumValue)
          {
          case ContactFlowState::NOT_SET:
            return {};
          case ContactFlowState::ACTIVE:
            return "ACTIVE";
          case ContactFlowState::ARCHIVED:
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

      } // namespace ContactFlowStateMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
