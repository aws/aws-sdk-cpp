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
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace ServiceNamespaceMapper
      {

        static const int ecs_HASH = HashingUtils::HashString("ecs");
        static const int ec2_HASH = HashingUtils::HashString("ec2");


        ServiceNamespace GetServiceNamespaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ecs_HASH)
          {
            return ServiceNamespace::ecs;
          }
          else if (hashCode == ec2_HASH)
          {
            return ServiceNamespace::ec2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNamespace>(hashCode);
          }

          return ServiceNamespace::NOT_SET;
        }

        Aws::String GetNameForServiceNamespace(ServiceNamespace enumValue)
        {
          switch(enumValue)
          {
          case ServiceNamespace::ecs:
            return "ecs";
          case ServiceNamespace::ec2:
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

      } // namespace ServiceNamespaceMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
