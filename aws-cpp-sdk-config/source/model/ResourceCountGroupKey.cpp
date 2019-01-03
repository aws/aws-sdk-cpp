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

#include <aws/config/model/ResourceCountGroupKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ResourceCountGroupKeyMapper
      {

        static const int RESOURCE_TYPE_HASH = HashingUtils::HashString("RESOURCE_TYPE");
        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int AWS_REGION_HASH = HashingUtils::HashString("AWS_REGION");


        ResourceCountGroupKey GetResourceCountGroupKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_TYPE_HASH)
          {
            return ResourceCountGroupKey::RESOURCE_TYPE;
          }
          else if (hashCode == ACCOUNT_ID_HASH)
          {
            return ResourceCountGroupKey::ACCOUNT_ID;
          }
          else if (hashCode == AWS_REGION_HASH)
          {
            return ResourceCountGroupKey::AWS_REGION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceCountGroupKey>(hashCode);
          }

          return ResourceCountGroupKey::NOT_SET;
        }

        Aws::String GetNameForResourceCountGroupKey(ResourceCountGroupKey enumValue)
        {
          switch(enumValue)
          {
          case ResourceCountGroupKey::RESOURCE_TYPE:
            return "RESOURCE_TYPE";
          case ResourceCountGroupKey::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case ResourceCountGroupKey::AWS_REGION:
            return "AWS_REGION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceCountGroupKeyMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
