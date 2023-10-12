/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace ConnectionModeMapper
      {

        static constexpr uint32_t Public_HASH = ConstExprHashingUtils::HashString("Public");
        static constexpr uint32_t Private_HASH = ConstExprHashingUtils::HashString("Private");


        ConnectionMode GetConnectionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Public_HASH)
          {
            return ConnectionMode::Public;
          }
          else if (hashCode == Private_HASH)
          {
            return ConnectionMode::Private;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionMode>(hashCode);
          }

          return ConnectionMode::NOT_SET;
        }

        Aws::String GetNameForConnectionMode(ConnectionMode enumValue)
        {
          switch(enumValue)
          {
          case ConnectionMode::NOT_SET:
            return {};
          case ConnectionMode::Public:
            return "Public";
          case ConnectionMode::Private:
            return "Private";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionModeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
