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

        static const int Public_HASH = HashingUtils::HashString("Public");
        static const int Private_HASH = HashingUtils::HashString("Private");


        ConnectionMode GetConnectionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
