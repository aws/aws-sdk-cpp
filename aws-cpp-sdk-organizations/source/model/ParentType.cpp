/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/organizations/model/ParentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace ParentTypeMapper
      {

        static const int ROOT_HASH = HashingUtils::HashString("ROOT");
        static const int ORGANIZATIONAL_UNIT_HASH = HashingUtils::HashString("ORGANIZATIONAL_UNIT");


        ParentType GetParentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROOT_HASH)
          {
            return ParentType::ROOT;
          }
          else if (hashCode == ORGANIZATIONAL_UNIT_HASH)
          {
            return ParentType::ORGANIZATIONAL_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParentType>(hashCode);
          }

          return ParentType::NOT_SET;
        }

        Aws::String GetNameForParentType(ParentType enumValue)
        {
          switch(enumValue)
          {
          case ParentType::ROOT:
            return "ROOT";
          case ParentType::ORGANIZATIONAL_UNIT:
            return "ORGANIZATIONAL_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ParentTypeMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
