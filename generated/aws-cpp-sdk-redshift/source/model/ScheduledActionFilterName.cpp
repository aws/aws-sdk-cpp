/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
