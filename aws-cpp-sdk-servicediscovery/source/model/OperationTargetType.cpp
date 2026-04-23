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

#include <aws/servicediscovery/model/OperationTargetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace OperationTargetTypeMapper
      {

        static const int NAMESPACE_HASH = HashingUtils::HashString("NAMESPACE");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");


        OperationTargetType GetOperationTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAMESPACE_HASH)
          {
            return OperationTargetType::NAMESPACE;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return OperationTargetType::SERVICE;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return OperationTargetType::INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationTargetType>(hashCode);
          }

          return OperationTargetType::NOT_SET;
        }

        Aws::String GetNameForOperationTargetType(OperationTargetType enumValue)
        {
          switch(enumValue)
          {
          case OperationTargetType::NAMESPACE:
            return "NAMESPACE";
          case OperationTargetType::SERVICE:
            return "SERVICE";
          case OperationTargetType::INSTANCE:
            return "INSTANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationTargetTypeMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
