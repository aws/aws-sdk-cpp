/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/EffectivePermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace EffectivePermissionMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int NOT_PUBLIC_HASH = HashingUtils::HashString("NOT_PUBLIC");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        EffectivePermission GetEffectivePermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return EffectivePermission::PUBLIC_;
          }
          else if (hashCode == NOT_PUBLIC_HASH)
          {
            return EffectivePermission::NOT_PUBLIC;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return EffectivePermission::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EffectivePermission>(hashCode);
          }

          return EffectivePermission::NOT_SET;
        }

        Aws::String GetNameForEffectivePermission(EffectivePermission enumValue)
        {
          switch(enumValue)
          {
          case EffectivePermission::PUBLIC_:
            return "PUBLIC";
          case EffectivePermission::NOT_PUBLIC:
            return "NOT_PUBLIC";
          case EffectivePermission::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EffectivePermissionMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
