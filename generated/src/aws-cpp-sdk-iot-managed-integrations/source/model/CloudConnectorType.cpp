/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CloudConnectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace CloudConnectorTypeMapper
      {

        static const int LISTED_HASH = HashingUtils::HashString("LISTED");
        static const int UNLISTED_HASH = HashingUtils::HashString("UNLISTED");


        CloudConnectorType GetCloudConnectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LISTED_HASH)
          {
            return CloudConnectorType::LISTED;
          }
          else if (hashCode == UNLISTED_HASH)
          {
            return CloudConnectorType::UNLISTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudConnectorType>(hashCode);
          }

          return CloudConnectorType::NOT_SET;
        }

        Aws::String GetNameForCloudConnectorType(CloudConnectorType enumValue)
        {
          switch(enumValue)
          {
          case CloudConnectorType::NOT_SET:
            return {};
          case CloudConnectorType::LISTED:
            return "LISTED";
          case CloudConnectorType::UNLISTED:
            return "UNLISTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudConnectorTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
