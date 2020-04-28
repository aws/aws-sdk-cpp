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

#include <aws/ssm/model/AssociationSyncCompliance.h>
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
      namespace AssociationSyncComplianceMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        AssociationSyncCompliance GetAssociationSyncComplianceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return AssociationSyncCompliance::AUTO;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return AssociationSyncCompliance::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationSyncCompliance>(hashCode);
          }

          return AssociationSyncCompliance::NOT_SET;
        }

        Aws::String GetNameForAssociationSyncCompliance(AssociationSyncCompliance enumValue)
        {
          switch(enumValue)
          {
          case AssociationSyncCompliance::AUTO:
            return "AUTO";
          case AssociationSyncCompliance::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationSyncComplianceMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
