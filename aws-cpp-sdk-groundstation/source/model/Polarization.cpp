/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
