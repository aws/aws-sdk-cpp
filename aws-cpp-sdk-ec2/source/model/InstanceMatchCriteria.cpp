/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMatchCriteria.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace InstanceMatchCriteriaMapper
      {

        static const int open_HASH = HashingUtils::HashString("open");
        static const int targeted_HASH = HashingUtils::HashString("targeted");


        InstanceMatchCriteria GetInstanceMatchCriteriaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_HASH)
          {
            return InstanceMatchCriteria::open;
          }
          else if (hashCode == targeted_HASH)
          {
            return InstanceMatchCriteria::targeted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMatchCriteria>(hashCode);
          }

          return InstanceMatchCriteria::NOT_SET;
        }

        Aws::String GetNameForInstanceMatchCriteria(InstanceMatchCriteria enumValue)
        {
          switch(enumValue)
          {
          case InstanceMatchCriteria::open:
            return "open";
          case InstanceMatchCriteria::targeted:
            return "targeted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceMatchCriteriaMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
