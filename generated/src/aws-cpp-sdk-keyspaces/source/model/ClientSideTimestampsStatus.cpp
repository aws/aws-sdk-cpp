/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ClientSideTimestampsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace ClientSideTimestampsStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        ClientSideTimestampsStatus GetClientSideTimestampsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ClientSideTimestampsStatus::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientSideTimestampsStatus>(hashCode);
          }

          return ClientSideTimestampsStatus::NOT_SET;
        }

        Aws::String GetNameForClientSideTimestampsStatus(ClientSideTimestampsStatus enumValue)
        {
          switch(enumValue)
          {
          case ClientSideTimestampsStatus::NOT_SET:
            return {};
          case ClientSideTimestampsStatus::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientSideTimestampsStatusMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
