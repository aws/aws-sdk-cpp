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

#include <aws/ssm/model/AssociationExecutionTargetsFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AssociationExecutionTargetsFilterKeyMapper
      {

        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");


        AssociationExecutionTargetsFilterKey GetAssociationExecutionTargetsFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Status_HASH)
          {
            return AssociationExecutionTargetsFilterKey::Status;
          }
          else if (hashCode == ResourceId_HASH)
          {
            return AssociationExecutionTargetsFilterKey::ResourceId;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return AssociationExecutionTargetsFilterKey::ResourceType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationExecutionTargetsFilterKey>(hashCode);
          }

          return AssociationExecutionTargetsFilterKey::NOT_SET;
        }

        Aws::String GetNameForAssociationExecutionTargetsFilterKey(AssociationExecutionTargetsFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AssociationExecutionTargetsFilterKey::Status:
            return "Status";
          case AssociationExecutionTargetsFilterKey::ResourceId:
            return "ResourceId";
          case AssociationExecutionTargetsFilterKey::ResourceType:
            return "ResourceType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationExecutionTargetsFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
