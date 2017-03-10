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
#include <aws/elasticmapreduce/model/InstanceCollectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace InstanceCollectionTypeMapper
      {

        static const int INSTANCE_FLEET_HASH = HashingUtils::HashString("INSTANCE_FLEET");
        static const int INSTANCE_GROUP_HASH = HashingUtils::HashString("INSTANCE_GROUP");


        InstanceCollectionType GetInstanceCollectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANCE_FLEET_HASH)
          {
            return InstanceCollectionType::INSTANCE_FLEET;
          }
          else if (hashCode == INSTANCE_GROUP_HASH)
          {
            return InstanceCollectionType::INSTANCE_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceCollectionType>(hashCode);
          }

          return InstanceCollectionType::NOT_SET;
        }

        Aws::String GetNameForInstanceCollectionType(InstanceCollectionType enumValue)
        {
          switch(enumValue)
          {
          case InstanceCollectionType::INSTANCE_FLEET:
            return "INSTANCE_FLEET";
          case InstanceCollectionType::INSTANCE_GROUP:
            return "INSTANCE_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceCollectionTypeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
