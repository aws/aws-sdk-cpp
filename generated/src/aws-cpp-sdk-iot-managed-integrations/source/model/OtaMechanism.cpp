/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaMechanism.h>
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
      namespace OtaMechanismMapper
      {

        static const int PUSH_HASH = HashingUtils::HashString("PUSH");


        OtaMechanism GetOtaMechanismForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUSH_HASH)
          {
            return OtaMechanism::PUSH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OtaMechanism>(hashCode);
          }

          return OtaMechanism::NOT_SET;
        }

        Aws::String GetNameForOtaMechanism(OtaMechanism enumValue)
        {
          switch(enumValue)
          {
          case OtaMechanism::NOT_SET:
            return {};
          case OtaMechanism::PUSH:
            return "PUSH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OtaMechanismMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
