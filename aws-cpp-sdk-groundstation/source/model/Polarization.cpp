/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/Polarization.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace PolarizationMapper
      {

        static const int LEFT_HAND_HASH = HashingUtils::HashString("LEFT_HAND");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int RIGHT_HAND_HASH = HashingUtils::HashString("RIGHT_HAND");


        Polarization GetPolarizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEFT_HAND_HASH)
          {
            return Polarization::LEFT_HAND;
          }
          else if (hashCode == NONE_HASH)
          {
            return Polarization::NONE;
          }
          else if (hashCode == RIGHT_HAND_HASH)
          {
            return Polarization::RIGHT_HAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Polarization>(hashCode);
          }

          return Polarization::NOT_SET;
        }

        Aws::String GetNameForPolarization(Polarization enumValue)
        {
          switch(enumValue)
          {
          case Polarization::LEFT_HAND:
            return "LEFT_HAND";
          case Polarization::NONE:
            return "NONE";
          case Polarization::RIGHT_HAND:
            return "RIGHT_HAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolarizationMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
