/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DiscoveryResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace DiscoveryResourceTypeMapper
      {

        static const int SVM_HASH = HashingUtils::HashString("SVM");
        static const int VOLUME_HASH = HashingUtils::HashString("VOLUME");
        static const int CLUSTER_HASH = HashingUtils::HashString("CLUSTER");


        DiscoveryResourceType GetDiscoveryResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SVM_HASH)
          {
            return DiscoveryResourceType::SVM;
          }
          else if (hashCode == VOLUME_HASH)
          {
            return DiscoveryResourceType::VOLUME;
          }
          else if (hashCode == CLUSTER_HASH)
          {
            return DiscoveryResourceType::CLUSTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoveryResourceType>(hashCode);
          }

          return DiscoveryResourceType::NOT_SET;
        }

        Aws::String GetNameForDiscoveryResourceType(DiscoveryResourceType enumValue)
        {
          switch(enumValue)
          {
          case DiscoveryResourceType::NOT_SET:
            return {};
          case DiscoveryResourceType::SVM:
            return "SVM";
          case DiscoveryResourceType::VOLUME:
            return "VOLUME";
          case DiscoveryResourceType::CLUSTER:
            return "CLUSTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoveryResourceTypeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
