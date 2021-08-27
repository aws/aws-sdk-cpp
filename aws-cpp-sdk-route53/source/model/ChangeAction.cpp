/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ChangeAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace ChangeActionMapper
      {

        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int UPSERT_HASH = HashingUtils::HashString("UPSERT");


        ChangeAction GetChangeActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return ChangeAction::CREATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return ChangeAction::DELETE_;
          }
          else if (hashCode == UPSERT_HASH)
          {
            return ChangeAction::UPSERT;
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
          case ChangeAction::CREATE:
            return "CREATE";
          case ChangeAction::DELETE_:
            return "DELETE";
          case ChangeAction::UPSERT:
            return "UPSERT";
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
  } // namespace Route53
} // namespace Aws
