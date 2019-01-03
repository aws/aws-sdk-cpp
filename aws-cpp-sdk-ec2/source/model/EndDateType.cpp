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

#include <aws/ec2/model/EndDateType.h>
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
      namespace EndDateTypeMapper
      {

        static const int unlimited_HASH = HashingUtils::HashString("unlimited");
        static const int limited_HASH = HashingUtils::HashString("limited");


        EndDateType GetEndDateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unlimited_HASH)
          {
            return EndDateType::unlimited;
          }
          else if (hashCode == limited_HASH)
          {
            return EndDateType::limited;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndDateType>(hashCode);
          }

          return EndDateType::NOT_SET;
        }

        Aws::String GetNameForEndDateType(EndDateType enumValue)
        {
          switch(enumValue)
          {
          case EndDateType::unlimited:
            return "unlimited";
          case EndDateType::limited:
            return "limited";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndDateTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
