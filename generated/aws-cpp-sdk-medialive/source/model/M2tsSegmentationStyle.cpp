/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsSegmentationStyle.h>
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
      namespace M2tsSegmentationStyleMapper
      {

        static const int MAINTAIN_CADENCE_HASH = HashingUtils::HashString("MAINTAIN_CADENCE");
        static const int RESET_CADENCE_HASH = HashingUtils::HashString("RESET_CADENCE");


        M2tsSegmentationStyle GetM2tsSegmentationStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAINTAIN_CADENCE_HASH)
          {
            return M2tsSegmentationStyle::MAINTAIN_CADENCE;
          }
          else if (hashCode == RESET_CADENCE_HASH)
          {
            return M2tsSegmentationStyle::RESET_CADENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsSegmentationStyle>(hashCode);
          }

          return M2tsSegmentationStyle::NOT_SET;
        }

        Aws::String GetNameForM2tsSegmentationStyle(M2tsSegmentationStyle enumValue)
        {
          switch(enumValue)
          {
          case M2tsSegmentationStyle::MAINTAIN_CADENCE:
            return "MAINTAIN_CADENCE";
          case M2tsSegmentationStyle::RESET_CADENCE:
            return "RESET_CADENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsSegmentationStyleMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
