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

#include <aws/dataexchange/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int DATA_SET_HASH = HashingUtils::HashString("DATA_SET");
        static const int REVISION_HASH = HashingUtils::HashString("REVISION");
        static const int ASSET_HASH = HashingUtils::HashString("ASSET");
        static const int JOB_HASH = HashingUtils::HashString("JOB");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_SET_HASH)
          {
            return ResourceType::DATA_SET;
          }
          else if (hashCode == REVISION_HASH)
          {
            return ResourceType::REVISION;
          }
          else if (hashCode == ASSET_HASH)
          {
            return ResourceType::ASSET;
          }
          else if (hashCode == JOB_HASH)
          {
            return ResourceType::JOB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::DATA_SET:
            return "DATA_SET";
          case ResourceType::REVISION:
            return "REVISION";
          case ResourceType::ASSET:
            return "ASSET";
          case ResourceType::JOB:
            return "JOB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
