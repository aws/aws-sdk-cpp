/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/LocationStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace LocationStatusTypeMapper
      {

        static constexpr uint32_t DOCUMENTED_HASH = ConstExprHashingUtils::HashString("DOCUMENTED");
        static constexpr uint32_t UNDOCUMENTED_HASH = ConstExprHashingUtils::HashString("UNDOCUMENTED");


        LocationStatusType GetLocationStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENTED_HASH)
          {
            return LocationStatusType::DOCUMENTED;
          }
          else if (hashCode == UNDOCUMENTED_HASH)
          {
            return LocationStatusType::UNDOCUMENTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocationStatusType>(hashCode);
          }

          return LocationStatusType::NOT_SET;
        }

        Aws::String GetNameForLocationStatusType(LocationStatusType enumValue)
        {
          switch(enumValue)
          {
          case LocationStatusType::NOT_SET:
            return {};
          case LocationStatusType::DOCUMENTED:
            return "DOCUMENTED";
          case LocationStatusType::UNDOCUMENTED:
            return "UNDOCUMENTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocationStatusTypeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
