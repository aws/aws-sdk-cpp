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
#include <aws/organizations/model/OrganizationFeatureSet.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace OrganizationFeatureSetMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int CONSOLIDATED_BILLING_HASH = HashingUtils::HashString("CONSOLIDATED_BILLING");


        OrganizationFeatureSet GetOrganizationFeatureSetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return OrganizationFeatureSet::ALL;
          }
          else if (hashCode == CONSOLIDATED_BILLING_HASH)
          {
            return OrganizationFeatureSet::CONSOLIDATED_BILLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationFeatureSet>(hashCode);
          }

          return OrganizationFeatureSet::NOT_SET;
        }

        Aws::String GetNameForOrganizationFeatureSet(OrganizationFeatureSet enumValue)
        {
          switch(enumValue)
          {
          case OrganizationFeatureSet::ALL:
            return "ALL";
          case OrganizationFeatureSet::CONSOLIDATED_BILLING:
            return "CONSOLIDATED_BILLING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace OrganizationFeatureSetMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
