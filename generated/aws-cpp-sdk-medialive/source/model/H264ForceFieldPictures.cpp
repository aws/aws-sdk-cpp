/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264ForceFieldPictures.h>
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
      namespace H264ForceFieldPicturesMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H264ForceFieldPictures GetH264ForceFieldPicturesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H264ForceFieldPictures::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H264ForceFieldPictures::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264ForceFieldPictures>(hashCode);
          }

          return H264ForceFieldPictures::NOT_SET;
        }

        Aws::String GetNameForH264ForceFieldPictures(H264ForceFieldPictures enumValue)
        {
          switch(enumValue)
          {
          case H264ForceFieldPictures::DISABLED:
            return "DISABLED";
          case H264ForceFieldPictures::ENABLED:
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

      } // namespace H264ForceFieldPicturesMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
