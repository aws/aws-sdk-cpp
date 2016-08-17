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
#include <aws/cloudformation/model/Capability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace CapabilityMapper
      {

        static const int CAPABILITY_IAM_HASH = HashingUtils::HashString("CAPABILITY_IAM");
        static const int CAPABILITY_NAMED_IAM_HASH = HashingUtils::HashString("CAPABILITY_NAMED_IAM");


        Capability GetCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CAPABILITY_IAM_HASH)
          {
            return Capability::CAPABILITY_IAM;
          }
          else if (hashCode == CAPABILITY_NAMED_IAM_HASH)
          {
            return Capability::CAPABILITY_NAMED_IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Capability>(hashCode);
          }

          return Capability::NOT_SET;
        }

        Aws::String GetNameForCapability(Capability enumValue)
        {
          switch(enumValue)
          {
          case Capability::CAPABILITY_IAM:
            return "CAPABILITY_IAM";
          case Capability::CAPABILITY_NAMED_IAM:
            return "CAPABILITY_NAMED_IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CapabilityMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
