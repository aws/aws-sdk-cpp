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

#include <aws/imagebuilder/model/Ownership.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace OwnershipMapper
      {

        static const int Self_HASH = HashingUtils::HashString("Self");
        static const int Shared_HASH = HashingUtils::HashString("Shared");
        static const int Amazon_HASH = HashingUtils::HashString("Amazon");


        Ownership GetOwnershipForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Self_HASH)
          {
            return Ownership::Self;
          }
          else if (hashCode == Shared_HASH)
          {
            return Ownership::Shared;
          }
          else if (hashCode == Amazon_HASH)
          {
            return Ownership::Amazon;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ownership>(hashCode);
          }

          return Ownership::NOT_SET;
        }

        Aws::String GetNameForOwnership(Ownership enumValue)
        {
          switch(enumValue)
          {
          case Ownership::Self:
            return "Self";
          case Ownership::Shared:
            return "Shared";
          case Ownership::Amazon:
            return "Amazon";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OwnershipMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
