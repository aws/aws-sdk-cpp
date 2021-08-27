/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ChannelRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace ChannelRoleMapper
      {

        static const int MASTER_HASH = HashingUtils::HashString("MASTER");
        static const int VIEWER_HASH = HashingUtils::HashString("VIEWER");


        ChannelRole GetChannelRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MASTER_HASH)
          {
            return ChannelRole::MASTER;
          }
          else if (hashCode == VIEWER_HASH)
          {
            return ChannelRole::VIEWER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelRole>(hashCode);
          }

          return ChannelRole::NOT_SET;
        }

        Aws::String GetNameForChannelRole(ChannelRole enumValue)
        {
          switch(enumValue)
          {
          case ChannelRole::MASTER:
            return "MASTER";
          case ChannelRole::VIEWER:
            return "VIEWER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelRoleMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
