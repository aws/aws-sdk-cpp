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
#include <aws/cloudformation/model/ResourceAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ResourceAttributeMapper
      {

        static const int Properties_HASH = HashingUtils::HashString("Properties");
        static const int Metadata_HASH = HashingUtils::HashString("Metadata");
        static const int CreationPolicy_HASH = HashingUtils::HashString("CreationPolicy");
        static const int UpdatePolicy_HASH = HashingUtils::HashString("UpdatePolicy");
        static const int DeletionPolicy_HASH = HashingUtils::HashString("DeletionPolicy");
        static const int Tags_HASH = HashingUtils::HashString("Tags");


        ResourceAttribute GetResourceAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Properties_HASH)
          {
            return ResourceAttribute::Properties;
          }
          else if (hashCode == Metadata_HASH)
          {
            return ResourceAttribute::Metadata;
          }
          else if (hashCode == CreationPolicy_HASH)
          {
            return ResourceAttribute::CreationPolicy;
          }
          else if (hashCode == UpdatePolicy_HASH)
          {
            return ResourceAttribute::UpdatePolicy;
          }
          else if (hashCode == DeletionPolicy_HASH)
          {
            return ResourceAttribute::DeletionPolicy;
          }
          else if (hashCode == Tags_HASH)
          {
            return ResourceAttribute::Tags;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceAttribute>(hashCode);
          }

          return ResourceAttribute::NOT_SET;
        }

        Aws::String GetNameForResourceAttribute(ResourceAttribute enumValue)
        {
          switch(enumValue)
          {
          case ResourceAttribute::Properties:
            return "Properties";
          case ResourceAttribute::Metadata:
            return "Metadata";
          case ResourceAttribute::CreationPolicy:
            return "CreationPolicy";
          case ResourceAttribute::UpdatePolicy:
            return "UpdatePolicy";
          case ResourceAttribute::DeletionPolicy:
            return "DeletionPolicy";
          case ResourceAttribute::Tags:
            return "Tags";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ResourceAttributeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
