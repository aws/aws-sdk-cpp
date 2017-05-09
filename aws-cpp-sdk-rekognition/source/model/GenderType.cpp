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

#include <aws/rekognition/model/GenderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace GenderTypeMapper
      {

        static const int MALE_HASH = HashingUtils::HashString("MALE");
        static const int FEMALE_HASH = HashingUtils::HashString("FEMALE");


        GenderType GetGenderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MALE_HASH)
          {
            return GenderType::MALE;
          }
          else if (hashCode == FEMALE_HASH)
          {
            return GenderType::FEMALE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GenderType>(hashCode);
          }

          return GenderType::NOT_SET;
        }

        Aws::String GetNameForGenderType(GenderType enumValue)
        {
          switch(enumValue)
          {
          case GenderType::MALE:
            return "MALE";
          case GenderType::FEMALE:
            return "FEMALE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GenderTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
