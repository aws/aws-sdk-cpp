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

#include <aws/medialive/model/InputPreference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputPreferenceMapper
      {

        static const int EQUAL_INPUT_PREFERENCE_HASH = HashingUtils::HashString("EQUAL_INPUT_PREFERENCE");
        static const int PRIMARY_INPUT_PREFERRED_HASH = HashingUtils::HashString("PRIMARY_INPUT_PREFERRED");


        InputPreference GetInputPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUAL_INPUT_PREFERENCE_HASH)
          {
            return InputPreference::EQUAL_INPUT_PREFERENCE;
          }
          else if (hashCode == PRIMARY_INPUT_PREFERRED_HASH)
          {
            return InputPreference::PRIMARY_INPUT_PREFERRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputPreference>(hashCode);
          }

          return InputPreference::NOT_SET;
        }

        Aws::String GetNameForInputPreference(InputPreference enumValue)
        {
          switch(enumValue)
          {
          case InputPreference::EQUAL_INPUT_PREFERENCE:
            return "EQUAL_INPUT_PREFERENCE";
          case InputPreference::PRIMARY_INPUT_PREFERRED:
            return "PRIMARY_INPUT_PREFERRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputPreferenceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
