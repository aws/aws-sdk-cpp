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

        static constexpr uint32_t Add_HASH = ConstExprHashingUtils::HashString("Add");
        static constexpr uint32_t Modify_HASH = ConstExprHashingUtils::HashString("Modify");
        static constexpr uint32_t Remove_HASH = ConstExprHashingUtils::HashString("Remove");
        static constexpr uint32_t Import_HASH = ConstExprHashingUtils::HashString("Import");
        static constexpr uint32_t Dynamic_HASH = ConstExprHashingUtils::HashString("Dynamic");


        ChangeAction GetChangeActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == Dynamic_HASH)
          {
            return ChangeAction::Dynamic;
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
          case ChangeAction::NOT_SET:
            return {};
          case ChangeAction::Add:
            return "Add";
          case ChangeAction::Modify:
            return "Modify";
          case ChangeAction::Remove:
            return "Remove";
          case ChangeAction::Import:
            return "Import";
          case ChangeAction::Dynamic:
            return "Dynamic";
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
