﻿/*
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

#include <aws/alexaforbusiness/model/DistanceUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace DistanceUnitMapper
      {

        static const int METRIC_HASH = HashingUtils::HashString("METRIC");
        static const int IMPERIAL_HASH = HashingUtils::HashString("IMPERIAL");


        DistanceUnit GetDistanceUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == METRIC_HASH)
          {
            return DistanceUnit::METRIC;
          }
          else if (hashCode == IMPERIAL_HASH)
          {
            return DistanceUnit::IMPERIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DistanceUnit>(hashCode);
          }

          return DistanceUnit::NOT_SET;
        }

        Aws::String GetNameForDistanceUnit(DistanceUnit enumValue)
        {
          switch(enumValue)
          {
          case DistanceUnit::METRIC:
            return "METRIC";
          case DistanceUnit::IMPERIAL:
            return "IMPERIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DistanceUnitMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
