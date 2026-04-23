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

#include <aws/ssm/model/AssociationFilterOperatorType.h>
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
      namespace AssociationFilterOperatorTypeMapper
      {

        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");


        AssociationFilterOperatorType GetAssociationFilterOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUAL_HASH)
          {
            return AssociationFilterOperatorType::EQUAL;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return AssociationFilterOperatorType::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return AssociationFilterOperatorType::GREATER_THAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationFilterOperatorType>(hashCode);
          }

          return AssociationFilterOperatorType::NOT_SET;
        }

        Aws::String GetNameForAssociationFilterOperatorType(AssociationFilterOperatorType enumValue)
        {
          switch(enumValue)
          {
          case AssociationFilterOperatorType::EQUAL:
            return "EQUAL";
          case AssociationFilterOperatorType::LESS_THAN:
            return "LESS_THAN";
          case AssociationFilterOperatorType::GREATER_THAN:
            return "GREATER_THAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationFilterOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
