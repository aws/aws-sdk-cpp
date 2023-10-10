/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/UpdateAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedGrafana
  {
    namespace Model
    {
      namespace UpdateActionMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int REVOKE_HASH = HashingUtils::HashString("REVOKE");


        UpdateAction GetUpdateActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return UpdateAction::ADD;
          }
          else if (hashCode == REVOKE_HASH)
          {
            return UpdateAction::REVOKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateAction>(hashCode);
          }

          return UpdateAction::NOT_SET;
        }

        Aws::String GetNameForUpdateAction(UpdateAction enumValue)
        {
          switch(enumValue)
          {
          case UpdateAction::NOT_SET:
            return {};
          case UpdateAction::ADD:
            return "ADD";
          case UpdateAction::REVOKE:
            return "REVOKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateActionMapper
    } // namespace Model
  } // namespace ManagedGrafana
} // namespace Aws
