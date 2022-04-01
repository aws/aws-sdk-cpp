/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelMembershipType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace ChannelMembershipTypeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int HIDDEN_HASH = HashingUtils::HashString("HIDDEN");


        ChannelMembershipType GetChannelMembershipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ChannelMembershipType::DEFAULT;
          }
          else if (hashCode == HIDDEN_HASH)
          {
            return ChannelMembershipType::HIDDEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelMembershipType>(hashCode);
          }

          return ChannelMembershipType::NOT_SET;
        }

        Aws::String GetNameForChannelMembershipType(ChannelMembershipType enumValue)
        {
          switch(enumValue)
          {
          case ChannelMembershipType::DEFAULT:
            return "DEFAULT";
          case ChannelMembershipType::HIDDEN:
            return "HIDDEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelMembershipTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
