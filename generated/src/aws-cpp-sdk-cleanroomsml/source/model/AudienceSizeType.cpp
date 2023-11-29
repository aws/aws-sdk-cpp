/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceSizeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace AudienceSizeTypeMapper
      {

        static const int ABSOLUTE_HASH = HashingUtils::HashString("ABSOLUTE");
        static const int PERCENTAGE_HASH = HashingUtils::HashString("PERCENTAGE");


        AudienceSizeType GetAudienceSizeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ABSOLUTE_HASH)
          {
            return AudienceSizeType::ABSOLUTE;
          }
          else if (hashCode == PERCENTAGE_HASH)
          {
            return AudienceSizeType::PERCENTAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudienceSizeType>(hashCode);
          }

          return AudienceSizeType::NOT_SET;
        }

        Aws::String GetNameForAudienceSizeType(AudienceSizeType enumValue)
        {
          switch(enumValue)
          {
          case AudienceSizeType::NOT_SET:
            return {};
          case AudienceSizeType::ABSOLUTE:
            return "ABSOLUTE";
          case AudienceSizeType::PERCENTAGE:
            return "PERCENTAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudienceSizeTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
