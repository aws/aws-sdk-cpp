/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowStatus.h>
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
      namespace ContactFlowStatusMapper
      {

        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int SAVED_HASH = HashingUtils::HashString("SAVED");


        ContactFlowStatus GetContactFlowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISHED_HASH)
          {
            return ContactFlowStatus::PUBLISHED;
          }
          else if (hashCode == SAVED_HASH)
          {
            return ContactFlowStatus::SAVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactFlowStatus>(hashCode);
          }

          return ContactFlowStatus::NOT_SET;
        }

        Aws::String GetNameForContactFlowStatus(ContactFlowStatus enumValue)
        {
          switch(enumValue)
          {
          case ContactFlowStatus::NOT_SET:
            return {};
          case ContactFlowStatus::PUBLISHED:
            return "PUBLISHED";
          case ContactFlowStatus::SAVED:
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

      } // namespace ContactFlowStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
