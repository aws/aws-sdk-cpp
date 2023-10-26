/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/TranscodePreset.h>
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
      namespace TranscodePresetMapper
      {

        static const int HIGHER_BANDWIDTH_DELIVERY_HASH = HashingUtils::HashString("HIGHER_BANDWIDTH_DELIVERY");
        static const int CONSTRAINED_BANDWIDTH_DELIVERY_HASH = HashingUtils::HashString("CONSTRAINED_BANDWIDTH_DELIVERY");


        TranscodePreset GetTranscodePresetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGHER_BANDWIDTH_DELIVERY_HASH)
          {
            return TranscodePreset::HIGHER_BANDWIDTH_DELIVERY;
          }
          else if (hashCode == CONSTRAINED_BANDWIDTH_DELIVERY_HASH)
          {
            return TranscodePreset::CONSTRAINED_BANDWIDTH_DELIVERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscodePreset>(hashCode);
          }

          return TranscodePreset::NOT_SET;
        }

        Aws::String GetNameForTranscodePreset(TranscodePreset enumValue)
        {
          switch(enumValue)
          {
          case TranscodePreset::NOT_SET:
            return {};
          case TranscodePreset::HIGHER_BANDWIDTH_DELIVERY:
            return "HIGHER_BANDWIDTH_DELIVERY";
          case TranscodePreset::CONSTRAINED_BANDWIDTH_DELIVERY:
            return "CONSTRAINED_BANDWIDTH_DELIVERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscodePresetMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
