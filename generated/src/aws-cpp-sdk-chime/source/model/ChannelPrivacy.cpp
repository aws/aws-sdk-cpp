/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelPrivacy.h>
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
      namespace ChannelPrivacyMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        ChannelPrivacy GetChannelPrivacyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return ChannelPrivacy::PUBLIC_;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return ChannelPrivacy::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelPrivacy>(hashCode);
          }

          return ChannelPrivacy::NOT_SET;
        }

        Aws::String GetNameForChannelPrivacy(ChannelPrivacy enumValue)
        {
          switch(enumValue)
          {
          case ChannelPrivacy::PUBLIC_:
            return "PUBLIC";
          case ChannelPrivacy::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelPrivacyMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
