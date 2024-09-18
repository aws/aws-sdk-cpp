/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/GroupScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryServiceData
  {
    namespace Model
    {
      namespace GroupScopeMapper
      {

        static const int DomainLocal_HASH = HashingUtils::HashString("DomainLocal");
        static const int Global_HASH = HashingUtils::HashString("Global");
        static const int Universal_HASH = HashingUtils::HashString("Universal");
        static const int BuiltinLocal_HASH = HashingUtils::HashString("BuiltinLocal");


        GroupScope GetGroupScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DomainLocal_HASH)
          {
            return GroupScope::DomainLocal;
          }
          else if (hashCode == Global_HASH)
          {
            return GroupScope::Global;
          }
          else if (hashCode == Universal_HASH)
          {
            return GroupScope::Universal;
          }
          else if (hashCode == BuiltinLocal_HASH)
          {
            return GroupScope::BuiltinLocal;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupScope>(hashCode);
          }

          return GroupScope::NOT_SET;
        }

        Aws::String GetNameForGroupScope(GroupScope enumValue)
        {
          switch(enumValue)
          {
          case GroupScope::NOT_SET:
            return {};
          case GroupScope::DomainLocal:
            return "DomainLocal";
          case GroupScope::Global:
            return "Global";
          case GroupScope::Universal:
            return "Universal";
          case GroupScope::BuiltinLocal:
            return "BuiltinLocal";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupScopeMapper
    } // namespace Model
  } // namespace DirectoryServiceData
} // namespace Aws
