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

#include <aws/ram/model/ResourceShareFeatureSet.h>
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
      namespace ResourceShareFeatureSetMapper
      {

        static const int CREATED_FROM_POLICY_HASH = HashingUtils::HashString("CREATED_FROM_POLICY");
        static const int PROMOTING_TO_STANDARD_HASH = HashingUtils::HashString("PROMOTING_TO_STANDARD");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        ResourceShareFeatureSet GetResourceShareFeatureSetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_FROM_POLICY_HASH)
          {
            return ResourceShareFeatureSet::CREATED_FROM_POLICY;
          }
          else if (hashCode == PROMOTING_TO_STANDARD_HASH)
          {
            return ResourceShareFeatureSet::PROMOTING_TO_STANDARD;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return ResourceShareFeatureSet::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceShareFeatureSet>(hashCode);
          }

          return ResourceShareFeatureSet::NOT_SET;
        }

        Aws::String GetNameForResourceShareFeatureSet(ResourceShareFeatureSet enumValue)
        {
          switch(enumValue)
          {
          case ResourceShareFeatureSet::CREATED_FROM_POLICY:
            return "CREATED_FROM_POLICY";
          case ResourceShareFeatureSet::PROMOTING_TO_STANDARD:
            return "PROMOTING_TO_STANDARD";
          case ResourceShareFeatureSet::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceShareFeatureSetMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
