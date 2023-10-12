/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowModuleStatus.h>
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
      namespace ContactFlowModuleStatusMapper
      {

        static constexpr uint32_t PUBLISHED_HASH = ConstExprHashingUtils::HashString("PUBLISHED");
        static constexpr uint32_t SAVED_HASH = ConstExprHashingUtils::HashString("SAVED");


        ContactFlowModuleStatus GetContactFlowModuleStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISHED_HASH)
          {
            return ContactFlowModuleStatus::PUBLISHED;
          }
          else if (hashCode == SAVED_HASH)
          {
            return ContactFlowModuleStatus::SAVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactFlowModuleStatus>(hashCode);
          }

          return ContactFlowModuleStatus::NOT_SET;
        }

        Aws::String GetNameForContactFlowModuleStatus(ContactFlowModuleStatus enumValue)
        {
          switch(enumValue)
          {
          case ContactFlowModuleStatus::NOT_SET:
            return {};
          case ContactFlowModuleStatus::PUBLISHED:
            return "PUBLISHED";
          case ContactFlowModuleStatus::SAVED:
            return "SAVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactFlowModuleStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
