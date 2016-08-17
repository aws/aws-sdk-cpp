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
#include <aws/ec2/model/RIProductDescription.h>
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
      namespace RIProductDescriptionMapper
      {

        static const int Linux_UNIX_HASH = HashingUtils::HashString("Linux/UNIX");
        static const int Linux_UNIX_Amazon_VPC_HASH = HashingUtils::HashString("Linux/UNIX (Amazon VPC)");
        static const int Windows_HASH = HashingUtils::HashString("Windows");
        static const int Windows_Amazon_VPC_HASH = HashingUtils::HashString("Windows (Amazon VPC)");


        RIProductDescription GetRIProductDescriptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Linux_UNIX_HASH)
          {
            return RIProductDescription::Linux_UNIX;
          }
          else if (hashCode == Linux_UNIX_Amazon_VPC_HASH)
          {
            return RIProductDescription::Linux_UNIX_Amazon_VPC;
          }
          else if (hashCode == Windows_HASH)
          {
            return RIProductDescription::Windows;
          }
          else if (hashCode == Windows_Amazon_VPC_HASH)
          {
            return RIProductDescription::Windows_Amazon_VPC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RIProductDescription>(hashCode);
          }

          return RIProductDescription::NOT_SET;
        }

        Aws::String GetNameForRIProductDescription(RIProductDescription enumValue)
        {
          switch(enumValue)
          {
          case RIProductDescription::Linux_UNIX:
            return "Linux/UNIX";
          case RIProductDescription::Linux_UNIX_Amazon_VPC:
            return "Linux/UNIX (Amazon VPC)";
          case RIProductDescription::Windows:
            return "Windows";
          case RIProductDescription::Windows_Amazon_VPC:
            return "Windows (Amazon VPC)";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RIProductDescriptionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
