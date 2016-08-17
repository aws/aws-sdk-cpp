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
