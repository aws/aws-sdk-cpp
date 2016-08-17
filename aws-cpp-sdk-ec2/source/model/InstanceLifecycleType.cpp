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
#include <aws/ec2/model/InstanceLifecycleType.h>
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
      namespace InstanceLifecycleTypeMapper
      {

        static const int spot_HASH = HashingUtils::HashString("spot");
        static const int scheduled_HASH = HashingUtils::HashString("scheduled");


        InstanceLifecycleType GetInstanceLifecycleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == spot_HASH)
          {
            return InstanceLifecycleType::spot;
          }
          else if (hashCode == scheduled_HASH)
          {
            return InstanceLifecycleType::scheduled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceLifecycleType>(hashCode);
          }

          return InstanceLifecycleType::NOT_SET;
        }

        Aws::String GetNameForInstanceLifecycleType(InstanceLifecycleType enumValue)
        {
          switch(enumValue)
          {
          case InstanceLifecycleType::spot:
            return "spot";
          case InstanceLifecycleType::scheduled:
            return "scheduled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceLifecycleTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
