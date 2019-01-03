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

#include <aws/ec2/model/FpgaImageAttributeName.h>
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
      namespace FpgaImageAttributeNameMapper
      {

        static const int description_HASH = HashingUtils::HashString("description");
        static const int name_HASH = HashingUtils::HashString("name");
        static const int loadPermission_HASH = HashingUtils::HashString("loadPermission");
        static const int productCodes_HASH = HashingUtils::HashString("productCodes");


        FpgaImageAttributeName GetFpgaImageAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == description_HASH)
          {
            return FpgaImageAttributeName::description;
          }
          else if (hashCode == name_HASH)
          {
            return FpgaImageAttributeName::name;
          }
          else if (hashCode == loadPermission_HASH)
          {
            return FpgaImageAttributeName::loadPermission;
          }
          else if (hashCode == productCodes_HASH)
          {
            return FpgaImageAttributeName::productCodes;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FpgaImageAttributeName>(hashCode);
          }

          return FpgaImageAttributeName::NOT_SET;
        }

        Aws::String GetNameForFpgaImageAttributeName(FpgaImageAttributeName enumValue)
        {
          switch(enumValue)
          {
          case FpgaImageAttributeName::description:
            return "description";
          case FpgaImageAttributeName::name:
            return "name";
          case FpgaImageAttributeName::loadPermission:
            return "loadPermission";
          case FpgaImageAttributeName::productCodes:
            return "productCodes";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FpgaImageAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
