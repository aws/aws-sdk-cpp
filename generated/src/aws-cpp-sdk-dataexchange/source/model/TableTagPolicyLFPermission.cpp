/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/TableTagPolicyLFPermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace TableTagPolicyLFPermissionMapper
      {

        static constexpr uint32_t DESCRIBE_HASH = ConstExprHashingUtils::HashString("DESCRIBE");
        static constexpr uint32_t SELECT_HASH = ConstExprHashingUtils::HashString("SELECT");


        TableTagPolicyLFPermission GetTableTagPolicyLFPermissionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DESCRIBE_HASH)
          {
            return TableTagPolicyLFPermission::DESCRIBE;
          }
          else if (hashCode == SELECT_HASH)
          {
            return TableTagPolicyLFPermission::SELECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableTagPolicyLFPermission>(hashCode);
          }

          return TableTagPolicyLFPermission::NOT_SET;
        }

        Aws::String GetNameForTableTagPolicyLFPermission(TableTagPolicyLFPermission enumValue)
        {
          switch(enumValue)
          {
          case TableTagPolicyLFPermission::NOT_SET:
            return {};
          case TableTagPolicyLFPermission::DESCRIBE:
            return "DESCRIBE";
          case TableTagPolicyLFPermission::SELECT:
            return "SELECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableTagPolicyLFPermissionMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
