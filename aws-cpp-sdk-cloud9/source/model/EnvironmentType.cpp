﻿/*
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

#include <aws/cloud9/model/EnvironmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Cloud9
  {
    namespace Model
    {
      namespace EnvironmentTypeMapper
      {

        static const int ssh_HASH = HashingUtils::HashString("ssh");
        static const int ec2_HASH = HashingUtils::HashString("ec2");


        EnvironmentType GetEnvironmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ssh_HASH)
          {
            return EnvironmentType::ssh;
          }
          else if (hashCode == ec2_HASH)
          {
            return EnvironmentType::ec2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentType>(hashCode);
          }

          return EnvironmentType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentType(EnvironmentType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentType::ssh:
            return "ssh";
          case EnvironmentType::ec2:
            return "ec2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace EnvironmentTypeMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
