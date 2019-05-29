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

#include <aws/dlm/model/ResourceTypeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace ResourceTypeValuesMapper
      {

        static const int VOLUME_HASH = HashingUtils::HashString("VOLUME");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");


        ResourceTypeValues GetResourceTypeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOLUME_HASH)
          {
            return ResourceTypeValues::VOLUME;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return ResourceTypeValues::INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTypeValues>(hashCode);
          }

          return ResourceTypeValues::NOT_SET;
        }

        Aws::String GetNameForResourceTypeValues(ResourceTypeValues enumValue)
        {
          switch(enumValue)
          {
          case ResourceTypeValues::VOLUME:
            return "VOLUME";
          case ResourceTypeValues::INSTANCE:
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

      } // namespace ResourceTypeValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
