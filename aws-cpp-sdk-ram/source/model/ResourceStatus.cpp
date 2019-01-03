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

#include <aws/ram/model/ResourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ResourceStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int ZONAL_RESOURCE_INACCESSIBLE_HASH = HashingUtils::HashString("ZONAL_RESOURCE_INACCESSIBLE");
        static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LIMIT_EXCEEDED");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ResourceStatus::AVAILABLE;
          }
          else if (hashCode == ZONAL_RESOURCE_INACCESSIBLE_HASH)
          {
            return ResourceStatus::ZONAL_RESOURCE_INACCESSIBLE;
          }
          else if (hashCode == LIMIT_EXCEEDED_HASH)
          {
            return ResourceStatus::LIMIT_EXCEEDED;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return ResourceStatus::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStatus>(hashCode);
          }

          return ResourceStatus::NOT_SET;
        }

        Aws::String GetNameForResourceStatus(ResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceStatus::AVAILABLE:
            return "AVAILABLE";
          case ResourceStatus::ZONAL_RESOURCE_INACCESSIBLE:
            return "ZONAL_RESOURCE_INACCESSIBLE";
          case ResourceStatus::LIMIT_EXCEEDED:
            return "LIMIT_EXCEEDED";
          case ResourceStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceStatusMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
