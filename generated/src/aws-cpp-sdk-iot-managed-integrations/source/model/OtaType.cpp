/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaType.h>
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
      namespace OtaTypeMapper
      {

        static const int ONE_TIME_HASH = HashingUtils::HashString("ONE_TIME");
        static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");


        OtaType GetOtaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_TIME_HASH)
          {
            return OtaType::ONE_TIME;
          }
          else if (hashCode == CONTINUOUS_HASH)
          {
            return OtaType::CONTINUOUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OtaType>(hashCode);
          }

          return OtaType::NOT_SET;
        }

        Aws::String GetNameForOtaType(OtaType enumValue)
        {
          switch(enumValue)
          {
          case OtaType::NOT_SET:
            return {};
          case OtaType::ONE_TIME:
            return "ONE_TIME";
          case OtaType::CONTINUOUS:
            return "CONTINUOUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OtaTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
