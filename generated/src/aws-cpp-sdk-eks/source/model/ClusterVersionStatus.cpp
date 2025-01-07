/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ClusterVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace ClusterVersionStatusMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int standard_support_HASH = HashingUtils::HashString("standard-support");
        static const int extended_support_HASH = HashingUtils::HashString("extended-support");


        ClusterVersionStatus GetClusterVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return ClusterVersionStatus::unsupported;
          }
          else if (hashCode == standard_support_HASH)
          {
            return ClusterVersionStatus::standard_support;
          }
          else if (hashCode == extended_support_HASH)
          {
            return ClusterVersionStatus::extended_support;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterVersionStatus>(hashCode);
          }

          return ClusterVersionStatus::NOT_SET;
        }

        Aws::String GetNameForClusterVersionStatus(ClusterVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case ClusterVersionStatus::NOT_SET:
            return {};
          case ClusterVersionStatus::unsupported:
            return "unsupported";
          case ClusterVersionStatus::standard_support:
            return "standard-support";
          case ClusterVersionStatus::extended_support:
            return "extended-support";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterVersionStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
