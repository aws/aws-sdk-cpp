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

#include <aws/appconfig/model/GrowthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace GrowthTypeMapper
      {

        static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");
        static const int EXPONENTIAL_HASH = HashingUtils::HashString("EXPONENTIAL");


        GrowthType GetGrowthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINEAR_HASH)
          {
            return GrowthType::LINEAR;
          }
          else if (hashCode == EXPONENTIAL_HASH)
          {
            return GrowthType::EXPONENTIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GrowthType>(hashCode);
          }

          return GrowthType::NOT_SET;
        }

        Aws::String GetNameForGrowthType(GrowthType enumValue)
        {
          switch(enumValue)
          {
          case GrowthType::LINEAR:
            return "LINEAR";
          case GrowthType::EXPONENTIAL:
            return "EXPONENTIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GrowthTypeMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
