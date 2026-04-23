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

#include <aws/ec2/model/ResetFpgaImageAttributeName.h>
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
      namespace ResetFpgaImageAttributeNameMapper
      {

        static const int loadPermission_HASH = HashingUtils::HashString("loadPermission");


        ResetFpgaImageAttributeName GetResetFpgaImageAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == loadPermission_HASH)
          {
            return ResetFpgaImageAttributeName::loadPermission;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResetFpgaImageAttributeName>(hashCode);
          }

          return ResetFpgaImageAttributeName::NOT_SET;
        }

        Aws::String GetNameForResetFpgaImageAttributeName(ResetFpgaImageAttributeName enumValue)
        {
          switch(enumValue)
          {
          case ResetFpgaImageAttributeName::loadPermission:
            return "loadPermission";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResetFpgaImageAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
