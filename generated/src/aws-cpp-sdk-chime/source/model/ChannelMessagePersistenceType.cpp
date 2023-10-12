/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelMessagePersistenceType.h>
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
      namespace ChannelMessagePersistenceTypeMapper
      {

        static constexpr uint32_t PERSISTENT_HASH = ConstExprHashingUtils::HashString("PERSISTENT");
        static constexpr uint32_t NON_PERSISTENT_HASH = ConstExprHashingUtils::HashString("NON_PERSISTENT");


        ChannelMessagePersistenceType GetChannelMessagePersistenceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERSISTENT_HASH)
          {
            return ChannelMessagePersistenceType::PERSISTENT;
          }
          else if (hashCode == NON_PERSISTENT_HASH)
          {
            return ChannelMessagePersistenceType::NON_PERSISTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelMessagePersistenceType>(hashCode);
          }

          return ChannelMessagePersistenceType::NOT_SET;
        }

        Aws::String GetNameForChannelMessagePersistenceType(ChannelMessagePersistenceType enumValue)
        {
          switch(enumValue)
          {
          case ChannelMessagePersistenceType::NOT_SET:
            return {};
          case ChannelMessagePersistenceType::PERSISTENT:
            return "PERSISTENT";
          case ChannelMessagePersistenceType::NON_PERSISTENT:
            return "NON_PERSISTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelMessagePersistenceTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
