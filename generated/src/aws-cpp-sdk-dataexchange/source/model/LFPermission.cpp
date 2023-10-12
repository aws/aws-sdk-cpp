/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LFPermission.h>
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
      namespace LFPermissionMapper
      {

        static constexpr uint32_t DESCRIBE_HASH = ConstExprHashingUtils::HashString("DESCRIBE");
        static constexpr uint32_t SELECT_HASH = ConstExprHashingUtils::HashString("SELECT");


        LFPermission GetLFPermissionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DESCRIBE_HASH)
          {
            return LFPermission::DESCRIBE;
          }
          else if (hashCode == SELECT_HASH)
          {
            return LFPermission::SELECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LFPermission>(hashCode);
          }

          return LFPermission::NOT_SET;
        }

        Aws::String GetNameForLFPermission(LFPermission enumValue)
        {
          switch(enumValue)
          {
          case LFPermission::NOT_SET:
            return {};
          case LFPermission::DESCRIBE:
            return "DESCRIBE";
          case LFPermission::SELECT:
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

      } // namespace LFPermissionMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
