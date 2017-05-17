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

#include <aws/ssm/model/AssociationFilterKey.h>
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
      namespace AssociationFilterKeyMapper
      {

        static const int InstanceId_HASH = HashingUtils::HashString("InstanceId");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int AssociationId_HASH = HashingUtils::HashString("AssociationId");
        static const int AssociationStatusName_HASH = HashingUtils::HashString("AssociationStatusName");
        static const int LastExecutedBefore_HASH = HashingUtils::HashString("LastExecutedBefore");
        static const int LastExecutedAfter_HASH = HashingUtils::HashString("LastExecutedAfter");


        AssociationFilterKey GetAssociationFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceId_HASH)
          {
            return AssociationFilterKey::InstanceId;
          }
          else if (hashCode == Name_HASH)
          {
            return AssociationFilterKey::Name;
          }
          else if (hashCode == AssociationId_HASH)
          {
            return AssociationFilterKey::AssociationId;
          }
          else if (hashCode == AssociationStatusName_HASH)
          {
            return AssociationFilterKey::AssociationStatusName;
          }
          else if (hashCode == LastExecutedBefore_HASH)
          {
            return AssociationFilterKey::LastExecutedBefore;
          }
          else if (hashCode == LastExecutedAfter_HASH)
          {
            return AssociationFilterKey::LastExecutedAfter;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationFilterKey>(hashCode);
          }

          return AssociationFilterKey::NOT_SET;
        }

        Aws::String GetNameForAssociationFilterKey(AssociationFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AssociationFilterKey::InstanceId:
            return "InstanceId";
          case AssociationFilterKey::Name:
            return "Name";
          case AssociationFilterKey::AssociationId:
            return "AssociationId";
          case AssociationFilterKey::AssociationStatusName:
            return "AssociationStatusName";
          case AssociationFilterKey::LastExecutedBefore:
            return "LastExecutedBefore";
          case AssociationFilterKey::LastExecutedAfter:
            return "LastExecutedAfter";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AssociationFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
