/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AncillaryTerminateCaptions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace AncillaryTerminateCaptionsMapper
      {

        static const int END_OF_INPUT_HASH = HashingUtils::HashString("END_OF_INPUT");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AncillaryTerminateCaptions GetAncillaryTerminateCaptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == END_OF_INPUT_HASH)
          {
            return AncillaryTerminateCaptions::END_OF_INPUT;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AncillaryTerminateCaptions::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AncillaryTerminateCaptions>(hashCode);
          }

          return AncillaryTerminateCaptions::NOT_SET;
        }

        Aws::String GetNameForAncillaryTerminateCaptions(AncillaryTerminateCaptions enumValue)
        {
          switch(enumValue)
          {
          case AncillaryTerminateCaptions::END_OF_INPUT:
            return "END_OF_INPUT";
          case AncillaryTerminateCaptions::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AncillaryTerminateCaptionsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
