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

#include <aws/ec2/model/Scope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ScopeMapper
      {

        static const int Availability_Zone_HASH = HashingUtils::HashString("Availability Zone");
        static const int Region_HASH = HashingUtils::HashString("Region");


        Scope GetScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Availability_Zone_HASH)
          {
            return Scope::Availability_Zone;
          }
          else if (hashCode == Region_HASH)
          {
            return Scope::Region;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scope>(hashCode);
          }

          return Scope::NOT_SET;
        }

        Aws::String GetNameForScope(Scope enumValue)
        {
          switch(enumValue)
          {
          case Scope::Availability_Zone:
            return "Availability Zone";
          case Scope::Region:
            return "Region";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ScopeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
