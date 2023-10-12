/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/ChangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DAX
  {
    namespace Model
    {
      namespace ChangeTypeMapper
      {

        static constexpr uint32_t IMMEDIATE_HASH = ConstExprHashingUtils::HashString("IMMEDIATE");
        static constexpr uint32_t REQUIRES_REBOOT_HASH = ConstExprHashingUtils::HashString("REQUIRES_REBOOT");


        ChangeType GetChangeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMMEDIATE_HASH)
          {
            return ChangeType::IMMEDIATE;
          }
          else if (hashCode == REQUIRES_REBOOT_HASH)
          {
            return ChangeType::REQUIRES_REBOOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeType>(hashCode);
          }

          return ChangeType::NOT_SET;
        }

        Aws::String GetNameForChangeType(ChangeType enumValue)
        {
          switch(enumValue)
          {
          case ChangeType::NOT_SET:
            return {};
          case ChangeType::IMMEDIATE:
            return "IMMEDIATE";
          case ChangeType::REQUIRES_REBOOT:
            return "REQUIRES_REBOOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeTypeMapper
    } // namespace Model
  } // namespace DAX
} // namespace Aws
