/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ContainerFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace ContainerFormatMapper
      {

        static const int TS_HASH = HashingUtils::HashString("TS");
        static const int FRAGMENTED_MP4_HASH = HashingUtils::HashString("FRAGMENTED_MP4");


        ContainerFormat GetContainerFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TS_HASH)
          {
            return ContainerFormat::TS;
          }
          else if (hashCode == FRAGMENTED_MP4_HASH)
          {
            return ContainerFormat::FRAGMENTED_MP4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerFormat>(hashCode);
          }

          return ContainerFormat::NOT_SET;
        }

        Aws::String GetNameForContainerFormat(ContainerFormat enumValue)
        {
          switch(enumValue)
          {
          case ContainerFormat::NOT_SET:
            return {};
          case ContainerFormat::TS:
            return "TS";
          case ContainerFormat::FRAGMENTED_MP4:
            return "FRAGMENTED_MP4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerFormatMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
