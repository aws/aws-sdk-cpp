/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeAction.h>
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
      namespace ChangeActionMapper
      {

        static const int Add_HASH = HashingUtils::HashString("Add");
        static const int Modify_HASH = HashingUtils::HashString("Modify");
        static const int Remove_HASH = HashingUtils::HashString("Remove");
        static const int Import_HASH = HashingUtils::HashString("Import");


        ChangeAction GetChangeActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Add_HASH)
          {
            return ChangeAction::Add;
          }
          else if (hashCode == Modify_HASH)
          {
            return ChangeAction::Modify;
          }
          else if (hashCode == Remove_HASH)
          {
            return ChangeAction::Remove;
          }
          else if (hashCode == Import_HASH)
          {
            return ChangeAction::Import;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeAction>(hashCode);
          }

          return ChangeAction::NOT_SET;
        }

        Aws::String GetNameForChangeAction(ChangeAction enumValue)
        {
          switch(enumValue)
          {
          case ChangeAction::Add:
            return "Add";
          case ChangeAction::Modify:
            return "Modify";
          case ChangeAction::Remove:
            return "Remove";
          case ChangeAction::Import:
            return "Import";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeActionMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
