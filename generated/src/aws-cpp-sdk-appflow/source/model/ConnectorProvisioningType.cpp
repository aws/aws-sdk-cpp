/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorProvisioningType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace ConnectorProvisioningTypeMapper
      {

        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");


        ConnectorProvisioningType GetConnectorProvisioningTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAMBDA_HASH)
          {
            return ConnectorProvisioningType::LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorProvisioningType>(hashCode);
          }

          return ConnectorProvisioningType::NOT_SET;
        }

        Aws::String GetNameForConnectorProvisioningType(ConnectorProvisioningType enumValue)
        {
          switch(enumValue)
          {
          case ConnectorProvisioningType::NOT_SET:
            return {};
          case ConnectorProvisioningType::LAMBDA:
            return "LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorProvisioningTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
