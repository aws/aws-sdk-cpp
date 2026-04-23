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

#include <aws/ecs/model/Compatibility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace CompatibilityMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int FARGATE_HASH = HashingUtils::HashString("FARGATE");


        Compatibility GetCompatibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return Compatibility::EC2;
          }
          else if (hashCode == FARGATE_HASH)
          {
            return Compatibility::FARGATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Compatibility>(hashCode);
          }

          return Compatibility::NOT_SET;
        }

        Aws::String GetNameForCompatibility(Compatibility enumValue)
        {
          switch(enumValue)
          {
          case Compatibility::EC2:
            return "EC2";
          case Compatibility::FARGATE:
            return "FARGATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompatibilityMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
