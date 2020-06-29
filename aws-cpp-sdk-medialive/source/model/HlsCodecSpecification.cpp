/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsCodecSpecification.h>
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
      namespace HlsCodecSpecificationMapper
      {

        static const int RFC_4281_HASH = HashingUtils::HashString("RFC_4281");
        static const int RFC_6381_HASH = HashingUtils::HashString("RFC_6381");


        HlsCodecSpecification GetHlsCodecSpecificationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RFC_4281_HASH)
          {
            return HlsCodecSpecification::RFC_4281;
          }
          else if (hashCode == RFC_6381_HASH)
          {
            return HlsCodecSpecification::RFC_6381;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsCodecSpecification>(hashCode);
          }

          return HlsCodecSpecification::NOT_SET;
        }

        Aws::String GetNameForHlsCodecSpecification(HlsCodecSpecification enumValue)
        {
          switch(enumValue)
          {
          case HlsCodecSpecification::RFC_4281:
            return "RFC_4281";
          case HlsCodecSpecification::RFC_6381:
            return "RFC_6381";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsCodecSpecificationMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
