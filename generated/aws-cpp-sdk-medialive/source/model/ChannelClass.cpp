/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ChannelClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace ChannelClassMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int SINGLE_PIPELINE_HASH = HashingUtils::HashString("SINGLE_PIPELINE");


        ChannelClass GetChannelClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ChannelClass::STANDARD;
          }
          else if (hashCode == SINGLE_PIPELINE_HASH)
          {
            return ChannelClass::SINGLE_PIPELINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelClass>(hashCode);
          }

          return ChannelClass::NOT_SET;
        }

        Aws::String GetNameForChannelClass(ChannelClass enumValue)
        {
          switch(enumValue)
          {
          case ChannelClass::STANDARD:
            return "STANDARD";
          case ChannelClass::SINGLE_PIPELINE:
            return "SINGLE_PIPELINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelClassMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
