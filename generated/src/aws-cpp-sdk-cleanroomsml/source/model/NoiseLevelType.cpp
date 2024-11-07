/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/NoiseLevelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace NoiseLevelTypeMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        NoiseLevelType GetNoiseLevelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return NoiseLevelType::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return NoiseLevelType::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return NoiseLevelType::LOW;
          }
          else if (hashCode == NONE_HASH)
          {
            return NoiseLevelType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NoiseLevelType>(hashCode);
          }

          return NoiseLevelType::NOT_SET;
        }

        Aws::String GetNameForNoiseLevelType(NoiseLevelType enumValue)
        {
          switch(enumValue)
          {
          case NoiseLevelType::NOT_SET:
            return {};
          case NoiseLevelType::HIGH:
            return "HIGH";
          case NoiseLevelType::MEDIUM:
            return "MEDIUM";
          case NoiseLevelType::LOW:
            return "LOW";
          case NoiseLevelType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NoiseLevelTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
