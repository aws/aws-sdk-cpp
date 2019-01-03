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

#include <aws/rekognition/model/PersonTrackingSortBy.h>
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
      namespace PersonTrackingSortByMapper
      {

        static const int INDEX_HASH = HashingUtils::HashString("INDEX");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");


        PersonTrackingSortBy GetPersonTrackingSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDEX_HASH)
          {
            return PersonTrackingSortBy::INDEX;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return PersonTrackingSortBy::TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PersonTrackingSortBy>(hashCode);
          }

          return PersonTrackingSortBy::NOT_SET;
        }

        Aws::String GetNameForPersonTrackingSortBy(PersonTrackingSortBy enumValue)
        {
          switch(enumValue)
          {
          case PersonTrackingSortBy::INDEX:
            return "INDEX";
          case PersonTrackingSortBy::TIMESTAMP:
            return "TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PersonTrackingSortByMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
