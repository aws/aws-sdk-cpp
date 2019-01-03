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

#include <aws/codecommit/model/RelativeFileVersionEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace RelativeFileVersionEnumMapper
      {

        static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
        static const int AFTER_HASH = HashingUtils::HashString("AFTER");


        RelativeFileVersionEnum GetRelativeFileVersionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEFORE_HASH)
          {
            return RelativeFileVersionEnum::BEFORE;
          }
          else if (hashCode == AFTER_HASH)
          {
            return RelativeFileVersionEnum::AFTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelativeFileVersionEnum>(hashCode);
          }

          return RelativeFileVersionEnum::NOT_SET;
        }

        Aws::String GetNameForRelativeFileVersionEnum(RelativeFileVersionEnum enumValue)
        {
          switch(enumValue)
          {
          case RelativeFileVersionEnum::BEFORE:
            return "BEFORE";
          case RelativeFileVersionEnum::AFTER:
            return "AFTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelativeFileVersionEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
