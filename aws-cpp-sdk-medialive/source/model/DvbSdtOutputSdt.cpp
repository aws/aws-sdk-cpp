/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbSdtOutputSdt.h>
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
      namespace DvbSdtOutputSdtMapper
      {

        static const int SDT_FOLLOW_HASH = HashingUtils::HashString("SDT_FOLLOW");
        static const int SDT_FOLLOW_IF_PRESENT_HASH = HashingUtils::HashString("SDT_FOLLOW_IF_PRESENT");
        static const int SDT_MANUAL_HASH = HashingUtils::HashString("SDT_MANUAL");
        static const int SDT_NONE_HASH = HashingUtils::HashString("SDT_NONE");


        DvbSdtOutputSdt GetDvbSdtOutputSdtForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SDT_FOLLOW_HASH)
          {
            return DvbSdtOutputSdt::SDT_FOLLOW;
          }
          else if (hashCode == SDT_FOLLOW_IF_PRESENT_HASH)
          {
            return DvbSdtOutputSdt::SDT_FOLLOW_IF_PRESENT;
          }
          else if (hashCode == SDT_MANUAL_HASH)
          {
            return DvbSdtOutputSdt::SDT_MANUAL;
          }
          else if (hashCode == SDT_NONE_HASH)
          {
            return DvbSdtOutputSdt::SDT_NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSdtOutputSdt>(hashCode);
          }

          return DvbSdtOutputSdt::NOT_SET;
        }

        Aws::String GetNameForDvbSdtOutputSdt(DvbSdtOutputSdt enumValue)
        {
          switch(enumValue)
          {
          case DvbSdtOutputSdt::SDT_FOLLOW:
            return "SDT_FOLLOW";
          case DvbSdtOutputSdt::SDT_FOLLOW_IF_PRESENT:
            return "SDT_FOLLOW_IF_PRESENT";
          case DvbSdtOutputSdt::SDT_MANUAL:
            return "SDT_MANUAL";
          case DvbSdtOutputSdt::SDT_NONE:
            return "SDT_NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSdtOutputSdtMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
