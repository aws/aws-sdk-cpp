/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ServiceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ServiceTypeMapper
      {

        static const int DATA_HASH = HashingUtils::HashString("DATA");
        static const int CREDENTIAL_PROVIDER_HASH = HashingUtils::HashString("CREDENTIAL_PROVIDER");
        static const int JOBS_HASH = HashingUtils::HashString("JOBS");


        ServiceType GetServiceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_HASH)
          {
            return ServiceType::DATA;
          }
          else if (hashCode == CREDENTIAL_PROVIDER_HASH)
          {
            return ServiceType::CREDENTIAL_PROVIDER;
          }
          else if (hashCode == JOBS_HASH)
          {
            return ServiceType::JOBS;
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
          case ServiceType::DATA:
            return "DATA";
          case ServiceType::CREDENTIAL_PROVIDER:
            return "CREDENTIAL_PROVIDER";
          case ServiceType::JOBS:
            return "JOBS";
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
  } // namespace IoT
} // namespace Aws
