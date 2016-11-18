﻿/*
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
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace RootDeviceTypeMapper
      {

        static const int ebs_HASH = HashingUtils::HashString("ebs");
        static const int instance_store_HASH = HashingUtils::HashString("instance-store");


        RootDeviceType GetRootDeviceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ebs_HASH)
          {
            return RootDeviceType::ebs;
          }
          else if (hashCode == instance_store_HASH)
          {
            return RootDeviceType::instance_store;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RootDeviceType>(hashCode);
          }

          return RootDeviceType::NOT_SET;
        }

        Aws::String GetNameForRootDeviceType(RootDeviceType enumValue)
        {
          switch(enumValue)
          {
          case RootDeviceType::ebs:
            return "ebs";
          case RootDeviceType::instance_store:
            return "instance-store";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RootDeviceTypeMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
