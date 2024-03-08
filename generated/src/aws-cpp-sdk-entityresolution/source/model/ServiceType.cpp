/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ServiceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace ServiceTypeMapper
      {

        static const int ASSIGNMENT_HASH = HashingUtils::HashString("ASSIGNMENT");
        static const int ID_MAPPING_HASH = HashingUtils::HashString("ID_MAPPING");


        ServiceType GetServiceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSIGNMENT_HASH)
          {
            return ServiceType::ASSIGNMENT;
          }
          else if (hashCode == ID_MAPPING_HASH)
          {
            return ServiceType::ID_MAPPING;
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
          case ServiceType::NOT_SET:
            return {};
          case ServiceType::ASSIGNMENT:
            return "ASSIGNMENT";
          case ServiceType::ID_MAPPING:
            return "ID_MAPPING";
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
  } // namespace EntityResolution
} // namespace Aws
