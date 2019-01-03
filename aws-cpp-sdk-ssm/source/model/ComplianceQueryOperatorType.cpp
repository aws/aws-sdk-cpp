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

#include <aws/ssm/model/ComplianceQueryOperatorType.h>
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
      namespace ComplianceQueryOperatorTypeMapper
      {

        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
        static const int NOT_EQUAL_HASH = HashingUtils::HashString("NOT_EQUAL");
        static const int BEGIN_WITH_HASH = HashingUtils::HashString("BEGIN_WITH");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");


        ComplianceQueryOperatorType GetComplianceQueryOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUAL_HASH)
          {
            return ComplianceQueryOperatorType::EQUAL;
          }
          else if (hashCode == NOT_EQUAL_HASH)
          {
            return ComplianceQueryOperatorType::NOT_EQUAL;
          }
          else if (hashCode == BEGIN_WITH_HASH)
          {
            return ComplianceQueryOperatorType::BEGIN_WITH;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return ComplianceQueryOperatorType::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return ComplianceQueryOperatorType::GREATER_THAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComplianceQueryOperatorType>(hashCode);
          }

          return ComplianceQueryOperatorType::NOT_SET;
        }

        Aws::String GetNameForComplianceQueryOperatorType(ComplianceQueryOperatorType enumValue)
        {
          switch(enumValue)
          {
          case ComplianceQueryOperatorType::EQUAL:
            return "EQUAL";
          case ComplianceQueryOperatorType::NOT_EQUAL:
            return "NOT_EQUAL";
          case ComplianceQueryOperatorType::BEGIN_WITH:
            return "BEGIN_WITH";
          case ComplianceQueryOperatorType::LESS_THAN:
            return "LESS_THAN";
          case ComplianceQueryOperatorType::GREATER_THAN:
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

      } // namespace ComplianceQueryOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
