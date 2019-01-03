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

#include <aws/sms/model/ConnectorCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ConnectorCapabilityMapper
      {

        static const int VSPHERE_HASH = HashingUtils::HashString("VSPHERE");
        static const int SCVMM_HASH = HashingUtils::HashString("SCVMM");
        static const int HYPERV_MANAGER_HASH = HashingUtils::HashString("HYPERV-MANAGER");
        static const int SNAPSHOT_BATCHING_HASH = HashingUtils::HashString("SNAPSHOT_BATCHING");


        ConnectorCapability GetConnectorCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VSPHERE_HASH)
          {
            return ConnectorCapability::VSPHERE;
          }
          else if (hashCode == SCVMM_HASH)
          {
            return ConnectorCapability::SCVMM;
          }
          else if (hashCode == HYPERV_MANAGER_HASH)
          {
            return ConnectorCapability::HYPERV_MANAGER;
          }
          else if (hashCode == SNAPSHOT_BATCHING_HASH)
          {
            return ConnectorCapability::SNAPSHOT_BATCHING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorCapability>(hashCode);
          }

          return ConnectorCapability::NOT_SET;
        }

        Aws::String GetNameForConnectorCapability(ConnectorCapability enumValue)
        {
          switch(enumValue)
          {
          case ConnectorCapability::VSPHERE:
            return "VSPHERE";
          case ConnectorCapability::SCVMM:
            return "SCVMM";
          case ConnectorCapability::HYPERV_MANAGER:
            return "HYPERV-MANAGER";
          case ConnectorCapability::SNAPSHOT_BATCHING:
            return "SNAPSHOT_BATCHING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorCapabilityMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
