/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/BrokerStorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace BrokerStorageTypeMapper
      {

        static const int EBS_HASH = HashingUtils::HashString("EBS");
        static const int EFS_HASH = HashingUtils::HashString("EFS");


        BrokerStorageType GetBrokerStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EBS_HASH)
          {
            return BrokerStorageType::EBS;
          }
          else if (hashCode == EFS_HASH)
          {
            return BrokerStorageType::EFS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrokerStorageType>(hashCode);
          }

          return BrokerStorageType::NOT_SET;
        }

        Aws::String GetNameForBrokerStorageType(BrokerStorageType enumValue)
        {
          switch(enumValue)
          {
          case BrokerStorageType::EBS:
            return "EBS";
          case BrokerStorageType::EFS:
            return "EFS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrokerStorageTypeMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
