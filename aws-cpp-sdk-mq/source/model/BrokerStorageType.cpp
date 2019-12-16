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
