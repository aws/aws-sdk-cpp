/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListenerTlsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace ListenerTlsModeMapper
      {

        static constexpr uint32_t STRICT_HASH = ConstExprHashingUtils::HashString("STRICT");
        static constexpr uint32_t PERMISSIVE_HASH = ConstExprHashingUtils::HashString("PERMISSIVE");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        ListenerTlsMode GetListenerTlsModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRICT_HASH)
          {
            return ListenerTlsMode::STRICT;
          }
          else if (hashCode == PERMISSIVE_HASH)
          {
            return ListenerTlsMode::PERMISSIVE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ListenerTlsMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListenerTlsMode>(hashCode);
          }

          return ListenerTlsMode::NOT_SET;
        }

        Aws::String GetNameForListenerTlsMode(ListenerTlsMode enumValue)
        {
          switch(enumValue)
          {
          case ListenerTlsMode::NOT_SET:
            return {};
          case ListenerTlsMode::STRICT:
            return "STRICT";
          case ListenerTlsMode::PERMISSIVE:
            return "PERMISSIVE";
          case ListenerTlsMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListenerTlsModeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
