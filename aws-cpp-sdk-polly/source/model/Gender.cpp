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

#include <aws/polly/model/Gender.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace GenderMapper
      {

        static const int Female_HASH = HashingUtils::HashString("Female");
        static const int Male_HASH = HashingUtils::HashString("Male");


        Gender GetGenderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Female_HASH)
          {
            return Gender::Female;
          }
          else if (hashCode == Male_HASH)
          {
            return Gender::Male;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Gender>(hashCode);
          }

          return Gender::NOT_SET;
        }

        Aws::String GetNameForGender(Gender enumValue)
        {
          switch(enumValue)
          {
          case Gender::Female:
            return "Female";
          case Gender::Male:
            return "Male";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GenderMapper
    } // namespace Model
  } // namespace Polly
} // namespace Aws
