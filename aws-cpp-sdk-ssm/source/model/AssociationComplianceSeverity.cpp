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

#include <aws/ssm/model/AssociationComplianceSeverity.h>
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
      namespace AssociationComplianceSeverityMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");


        AssociationComplianceSeverity GetAssociationComplianceSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return AssociationComplianceSeverity::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return AssociationComplianceSeverity::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return AssociationComplianceSeverity::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return AssociationComplianceSeverity::LOW;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return AssociationComplianceSeverity::UNSPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationComplianceSeverity>(hashCode);
          }

          return AssociationComplianceSeverity::NOT_SET;
        }

        Aws::String GetNameForAssociationComplianceSeverity(AssociationComplianceSeverity enumValue)
        {
          switch(enumValue)
          {
          case AssociationComplianceSeverity::CRITICAL:
            return "CRITICAL";
          case AssociationComplianceSeverity::HIGH:
            return "HIGH";
          case AssociationComplianceSeverity::MEDIUM:
            return "MEDIUM";
          case AssociationComplianceSeverity::LOW:
            return "LOW";
          case AssociationComplianceSeverity::UNSPECIFIED:
            return "UNSPECIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationComplianceSeverityMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
