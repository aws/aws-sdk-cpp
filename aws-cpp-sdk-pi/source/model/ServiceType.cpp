/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace ServiceTypeMapper
      {

        static const int RDS_HASH = HashingUtils::HashString("RDS");


        ServiceType GetServiceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RDS_HASH)
          {
            return ServiceType::RDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceType>(hashCode);
          }

          return ServiceType::NOT_SET;
        }

        Aws::String GetNameForServiceType(ServiceType enumValue)
        {
          switch(enumValue)
          {
          case ServiceType::RDS:
            return "RDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceTypeMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws
