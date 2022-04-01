/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/IdentifierType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace IdentifierTypeMapper
      {

        static const int PartnerAccountId_HASH = HashingUtils::HashString("PartnerAccountId");


        IdentifierType GetIdentifierTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PartnerAccountId_HASH)
          {
            return IdentifierType::PartnerAccountId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentifierType>(hashCode);
          }

          return IdentifierType::NOT_SET;
        }

        Aws::String GetNameForIdentifierType(IdentifierType enumValue)
        {
          switch(enumValue)
          {
          case IdentifierType::PartnerAccountId:
            return "PartnerAccountId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentifierTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
