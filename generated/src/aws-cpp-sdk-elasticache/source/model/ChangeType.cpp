﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ChangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace ChangeTypeMapper
      {

        static const int immediate_HASH = HashingUtils::HashString("immediate");
        static const int requires_reboot_HASH = HashingUtils::HashString("requires-reboot");


        ChangeType GetChangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == immediate_HASH)
          {
            return ChangeType::immediate;
          }
          else if (hashCode == requires_reboot_HASH)
          {
            return ChangeType::requires_reboot;
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
          case ChangeType::immediate:
            return "immediate";
          case ChangeType::requires_reboot:
            return "requires-reboot";
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
  } // namespace ElastiCache
} // namespace Aws
