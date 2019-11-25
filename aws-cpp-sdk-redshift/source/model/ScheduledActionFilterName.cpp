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

#include <aws/redshift/model/ScheduledActionFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ScheduledActionFilterNameMapper
      {

        static const int cluster_identifier_HASH = HashingUtils::HashString("cluster-identifier");
        static const int iam_role_HASH = HashingUtils::HashString("iam-role");


        ScheduledActionFilterName GetScheduledActionFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cluster_identifier_HASH)
          {
            return ScheduledActionFilterName::cluster_identifier;
          }
          else if (hashCode == iam_role_HASH)
          {
            return ScheduledActionFilterName::iam_role;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduledActionFilterName>(hashCode);
          }

          return ScheduledActionFilterName::NOT_SET;
        }

        Aws::String GetNameForScheduledActionFilterName(ScheduledActionFilterName enumValue)
        {
          switch(enumValue)
          {
          case ScheduledActionFilterName::cluster_identifier:
            return "cluster-identifier";
          case ScheduledActionFilterName::iam_role:
            return "iam-role";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduledActionFilterNameMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
