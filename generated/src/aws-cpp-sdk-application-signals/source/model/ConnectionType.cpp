/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ConnectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationSignals
  {
    namespace Model
    {
      namespace ConnectionTypeMapper
      {

        static const int INDIRECT_HASH = HashingUtils::HashString("INDIRECT");
        static const int DIRECT_HASH = HashingUtils::HashString("DIRECT");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDIRECT_HASH)
          {
            return ConnectionType::INDIRECT;
          }
          else if (hashCode == DIRECT_HASH)
          {
            return ConnectionType::DIRECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionType>(hashCode);
          }

          return ConnectionType::NOT_SET;
        }

        Aws::String GetNameForConnectionType(ConnectionType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionType::NOT_SET:
            return {};
          case ConnectionType::INDIRECT:
            return "INDIRECT";
          case ConnectionType::DIRECT:
            return "DIRECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionTypeMapper
    } // namespace Model
  } // namespace ApplicationSignals
} // namespace Aws
