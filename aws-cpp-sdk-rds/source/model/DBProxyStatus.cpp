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

#include <aws/rds/model/DBProxyStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace DBProxyStatusMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int incompatible_network_HASH = HashingUtils::HashString("incompatible-network");
        static const int insufficient_resource_limits_HASH = HashingUtils::HashString("insufficient-resource-limits");
        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int deleting_HASH = HashingUtils::HashString("deleting");


        DBProxyStatus GetDBProxyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return DBProxyStatus::available;
          }
          else if (hashCode == modifying_HASH)
          {
            return DBProxyStatus::modifying;
          }
          else if (hashCode == incompatible_network_HASH)
          {
            return DBProxyStatus::incompatible_network;
          }
          else if (hashCode == insufficient_resource_limits_HASH)
          {
            return DBProxyStatus::insufficient_resource_limits;
          }
          else if (hashCode == creating_HASH)
          {
            return DBProxyStatus::creating;
          }
          else if (hashCode == deleting_HASH)
          {
            return DBProxyStatus::deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DBProxyStatus>(hashCode);
          }

          return DBProxyStatus::NOT_SET;
        }

        Aws::String GetNameForDBProxyStatus(DBProxyStatus enumValue)
        {
          switch(enumValue)
          {
          case DBProxyStatus::available:
            return "available";
          case DBProxyStatus::modifying:
            return "modifying";
          case DBProxyStatus::incompatible_network:
            return "incompatible-network";
          case DBProxyStatus::insufficient_resource_limits:
            return "insufficient-resource-limits";
          case DBProxyStatus::creating:
            return "creating";
          case DBProxyStatus::deleting:
            return "deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DBProxyStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
