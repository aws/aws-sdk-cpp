/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsScte35Control.h>
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
      namespace M2tsScte35ControlMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        M2tsScte35Control GetM2tsScte35ControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return M2tsScte35Control::NONE;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return M2tsScte35Control::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsScte35Control>(hashCode);
          }

          return M2tsScte35Control::NOT_SET;
        }

        Aws::String GetNameForM2tsScte35Control(M2tsScte35Control enumValue)
        {
          switch(enumValue)
          {
          case M2tsScte35Control::NONE:
            return "NONE";
          case M2tsScte35Control::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsScte35ControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
