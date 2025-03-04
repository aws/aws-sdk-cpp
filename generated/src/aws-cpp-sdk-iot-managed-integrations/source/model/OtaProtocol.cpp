/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaProtocol.h>
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
      namespace OtaProtocolMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");


        OtaProtocol GetOtaProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return OtaProtocol::HTTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OtaProtocol>(hashCode);
          }

          return OtaProtocol::NOT_SET;
        }

        Aws::String GetNameForOtaProtocol(OtaProtocol enumValue)
        {
          switch(enumValue)
          {
          case OtaProtocol::NOT_SET:
            return {};
          case OtaProtocol::HTTP:
            return "HTTP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OtaProtocolMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
