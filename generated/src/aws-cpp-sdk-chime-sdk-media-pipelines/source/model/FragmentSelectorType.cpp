/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/FragmentSelectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace FragmentSelectorTypeMapper
      {

        static const int ProducerTimestamp_HASH = HashingUtils::HashString("ProducerTimestamp");
        static const int ServerTimestamp_HASH = HashingUtils::HashString("ServerTimestamp");


        FragmentSelectorType GetFragmentSelectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ProducerTimestamp_HASH)
          {
            return FragmentSelectorType::ProducerTimestamp;
          }
          else if (hashCode == ServerTimestamp_HASH)
          {
            return FragmentSelectorType::ServerTimestamp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FragmentSelectorType>(hashCode);
          }

          return FragmentSelectorType::NOT_SET;
        }

        Aws::String GetNameForFragmentSelectorType(FragmentSelectorType enumValue)
        {
          switch(enumValue)
          {
          case FragmentSelectorType::NOT_SET:
            return {};
          case FragmentSelectorType::ProducerTimestamp:
            return "ProducerTimestamp";
          case FragmentSelectorType::ServerTimestamp:
            return "ServerTimestamp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FragmentSelectorTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
