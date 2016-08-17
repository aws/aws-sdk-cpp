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
#include <aws/ec2/model/VirtualizationType.h>
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
      namespace VirtualizationTypeMapper
      {

        static const int hvm_HASH = HashingUtils::HashString("hvm");
        static const int paravirtual_HASH = HashingUtils::HashString("paravirtual");


        VirtualizationType GetVirtualizationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == hvm_HASH)
          {
            return VirtualizationType::hvm;
          }
          else if (hashCode == paravirtual_HASH)
          {
            return VirtualizationType::paravirtual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualizationType>(hashCode);
          }

          return VirtualizationType::NOT_SET;
        }

        Aws::String GetNameForVirtualizationType(VirtualizationType enumValue)
        {
          switch(enumValue)
          {
          case VirtualizationType::hvm:
            return "hvm";
          case VirtualizationType::paravirtual:
            return "paravirtual";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace VirtualizationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
