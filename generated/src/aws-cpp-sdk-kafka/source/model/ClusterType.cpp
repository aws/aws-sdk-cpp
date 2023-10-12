/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClusterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace ClusterTypeMapper
      {

        static constexpr uint32_t PROVISIONED_HASH = ConstExprHashingUtils::HashString("PROVISIONED");
        static constexpr uint32_t SERVERLESS_HASH = ConstExprHashingUtils::HashString("SERVERLESS");


        ClusterType GetClusterTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONED_HASH)
          {
            return ClusterType::PROVISIONED;
          }
          else if (hashCode == SERVERLESS_HASH)
          {
            return ClusterType::SERVERLESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterType>(hashCode);
          }

          return ClusterType::NOT_SET;
        }

        Aws::String GetNameForClusterType(ClusterType enumValue)
        {
          switch(enumValue)
          {
          case ClusterType::NOT_SET:
            return {};
          case ClusterType::PROVISIONED:
            return "PROVISIONED";
          case ClusterType::SERVERLESS:
            return "SERVERLESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterTypeMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
