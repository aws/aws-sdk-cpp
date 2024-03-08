/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/UpdateResourceCollectionAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace UpdateResourceCollectionActionMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");


        UpdateResourceCollectionAction GetUpdateResourceCollectionActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return UpdateResourceCollectionAction::ADD;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return UpdateResourceCollectionAction::REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateResourceCollectionAction>(hashCode);
          }

          return UpdateResourceCollectionAction::NOT_SET;
        }

        Aws::String GetNameForUpdateResourceCollectionAction(UpdateResourceCollectionAction enumValue)
        {
          switch(enumValue)
          {
          case UpdateResourceCollectionAction::NOT_SET:
            return {};
          case UpdateResourceCollectionAction::ADD:
            return "ADD";
          case UpdateResourceCollectionAction::REMOVE:
            return "REMOVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateResourceCollectionActionMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
