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

#include <aws/s3control/model/NetworkOrigin.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace NetworkOriginMapper
      {

        static const int Internet_HASH = HashingUtils::HashString("Internet");
        static const int VPC_HASH = HashingUtils::HashString("VPC");


        NetworkOrigin GetNetworkOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Internet_HASH)
          {
            return NetworkOrigin::Internet;
          }
          else if (hashCode == VPC_HASH)
          {
            return NetworkOrigin::VPC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkOrigin>(hashCode);
          }

          return NetworkOrigin::NOT_SET;
        }

        Aws::String GetNameForNetworkOrigin(NetworkOrigin enumValue)
        {
          switch(enumValue)
          {
          case NetworkOrigin::Internet:
            return "Internet";
          case NetworkOrigin::VPC:
            return "VPC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkOriginMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
