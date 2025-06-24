/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FindingResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace FindingResourceTypeMapper
      {

        static const int EC2_INSTANCE_HASH = HashingUtils::HashString("EC2_INSTANCE");
        static const int EC2_NETWORK_INTERFACE_HASH = HashingUtils::HashString("EC2_NETWORK_INTERFACE");
        static const int S3_BUCKET_HASH = HashingUtils::HashString("S3_BUCKET");
        static const int S3_OBJECT_HASH = HashingUtils::HashString("S3_OBJECT");
        static const int ACCESS_KEY_HASH = HashingUtils::HashString("ACCESS_KEY");
        static const int EKS_CLUSTER_HASH = HashingUtils::HashString("EKS_CLUSTER");
        static const int KUBERNETES_WORKLOAD_HASH = HashingUtils::HashString("KUBERNETES_WORKLOAD");
        static const int CONTAINER_HASH = HashingUtils::HashString("CONTAINER");


        FindingResourceType GetFindingResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_INSTANCE_HASH)
          {
            return FindingResourceType::EC2_INSTANCE;
          }
          else if (hashCode == EC2_NETWORK_INTERFACE_HASH)
          {
            return FindingResourceType::EC2_NETWORK_INTERFACE;
          }
          else if (hashCode == S3_BUCKET_HASH)
          {
            return FindingResourceType::S3_BUCKET;
          }
          else if (hashCode == S3_OBJECT_HASH)
          {
            return FindingResourceType::S3_OBJECT;
          }
          else if (hashCode == ACCESS_KEY_HASH)
          {
            return FindingResourceType::ACCESS_KEY;
          }
          else if (hashCode == EKS_CLUSTER_HASH)
          {
            return FindingResourceType::EKS_CLUSTER;
          }
          else if (hashCode == KUBERNETES_WORKLOAD_HASH)
          {
            return FindingResourceType::KUBERNETES_WORKLOAD;
          }
          else if (hashCode == CONTAINER_HASH)
          {
            return FindingResourceType::CONTAINER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingResourceType>(hashCode);
          }

          return FindingResourceType::NOT_SET;
        }

        Aws::String GetNameForFindingResourceType(FindingResourceType enumValue)
        {
          switch(enumValue)
          {
          case FindingResourceType::NOT_SET:
            return {};
          case FindingResourceType::EC2_INSTANCE:
            return "EC2_INSTANCE";
          case FindingResourceType::EC2_NETWORK_INTERFACE:
            return "EC2_NETWORK_INTERFACE";
          case FindingResourceType::S3_BUCKET:
            return "S3_BUCKET";
          case FindingResourceType::S3_OBJECT:
            return "S3_OBJECT";
          case FindingResourceType::ACCESS_KEY:
            return "ACCESS_KEY";
          case FindingResourceType::EKS_CLUSTER:
            return "EKS_CLUSTER";
          case FindingResourceType::KUBERNETES_WORKLOAD:
            return "KUBERNETES_WORKLOAD";
          case FindingResourceType::CONTAINER:
            return "CONTAINER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingResourceTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
