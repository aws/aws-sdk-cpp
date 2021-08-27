/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationEndpointTypeValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace ReplicationEndpointTypeValueMapper
      {

        static const int source_HASH = HashingUtils::HashString("source");
        static const int target_HASH = HashingUtils::HashString("target");


        ReplicationEndpointTypeValue GetReplicationEndpointTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == source_HASH)
          {
            return ReplicationEndpointTypeValue::source;
          }
          else if (hashCode == target_HASH)
          {
            return ReplicationEndpointTypeValue::target;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationEndpointTypeValue>(hashCode);
          }

          return ReplicationEndpointTypeValue::NOT_SET;
        }

        Aws::String GetNameForReplicationEndpointTypeValue(ReplicationEndpointTypeValue enumValue)
        {
          switch(enumValue)
          {
          case ReplicationEndpointTypeValue::source:
            return "source";
          case ReplicationEndpointTypeValue::target:
            return "target";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationEndpointTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
