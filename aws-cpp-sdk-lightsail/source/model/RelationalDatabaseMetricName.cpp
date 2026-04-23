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

#include <aws/lightsail/model/RelationalDatabaseMetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace RelationalDatabaseMetricNameMapper
      {

        static const int CPUUtilization_HASH = HashingUtils::HashString("CPUUtilization");
        static const int DatabaseConnections_HASH = HashingUtils::HashString("DatabaseConnections");
        static const int DiskQueueDepth_HASH = HashingUtils::HashString("DiskQueueDepth");
        static const int FreeStorageSpace_HASH = HashingUtils::HashString("FreeStorageSpace");
        static const int NetworkReceiveThroughput_HASH = HashingUtils::HashString("NetworkReceiveThroughput");
        static const int NetworkTransmitThroughput_HASH = HashingUtils::HashString("NetworkTransmitThroughput");


        RelationalDatabaseMetricName GetRelationalDatabaseMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPUUtilization_HASH)
          {
            return RelationalDatabaseMetricName::CPUUtilization;
          }
          else if (hashCode == DatabaseConnections_HASH)
          {
            return RelationalDatabaseMetricName::DatabaseConnections;
          }
          else if (hashCode == DiskQueueDepth_HASH)
          {
            return RelationalDatabaseMetricName::DiskQueueDepth;
          }
          else if (hashCode == FreeStorageSpace_HASH)
          {
            return RelationalDatabaseMetricName::FreeStorageSpace;
          }
          else if (hashCode == NetworkReceiveThroughput_HASH)
          {
            return RelationalDatabaseMetricName::NetworkReceiveThroughput;
          }
          else if (hashCode == NetworkTransmitThroughput_HASH)
          {
            return RelationalDatabaseMetricName::NetworkTransmitThroughput;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelationalDatabaseMetricName>(hashCode);
          }

          return RelationalDatabaseMetricName::NOT_SET;
        }

        Aws::String GetNameForRelationalDatabaseMetricName(RelationalDatabaseMetricName enumValue)
        {
          switch(enumValue)
          {
          case RelationalDatabaseMetricName::CPUUtilization:
            return "CPUUtilization";
          case RelationalDatabaseMetricName::DatabaseConnections:
            return "DatabaseConnections";
          case RelationalDatabaseMetricName::DiskQueueDepth:
            return "DiskQueueDepth";
          case RelationalDatabaseMetricName::FreeStorageSpace:
            return "FreeStorageSpace";
          case RelationalDatabaseMetricName::NetworkReceiveThroughput:
            return "NetworkReceiveThroughput";
          case RelationalDatabaseMetricName::NetworkTransmitThroughput:
            return "NetworkTransmitThroughput";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationalDatabaseMetricNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
