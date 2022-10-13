/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace SnowballTypeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int EDGE_HASH = HashingUtils::HashString("EDGE");
        static const int EDGE_C_HASH = HashingUtils::HashString("EDGE_C");
        static const int EDGE_CG_HASH = HashingUtils::HashString("EDGE_CG");
        static const int EDGE_S_HASH = HashingUtils::HashString("EDGE_S");
        static const int SNC1_HDD_HASH = HashingUtils::HashString("SNC1_HDD");
        static const int SNC1_SSD_HASH = HashingUtils::HashString("SNC1_SSD");
        static const int V3_5C_HASH = HashingUtils::HashString("V3_5C");


        SnowballType GetSnowballTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return SnowballType::STANDARD;
          }
          else if (hashCode == EDGE_HASH)
          {
            return SnowballType::EDGE;
          }
          else if (hashCode == EDGE_C_HASH)
          {
            return SnowballType::EDGE_C;
          }
          else if (hashCode == EDGE_CG_HASH)
          {
            return SnowballType::EDGE_CG;
          }
          else if (hashCode == EDGE_S_HASH)
          {
            return SnowballType::EDGE_S;
          }
          else if (hashCode == SNC1_HDD_HASH)
          {
            return SnowballType::SNC1_HDD;
          }
          else if (hashCode == SNC1_SSD_HASH)
          {
            return SnowballType::SNC1_SSD;
          }
          else if (hashCode == V3_5C_HASH)
          {
            return SnowballType::V3_5C;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnowballType>(hashCode);
          }

          return SnowballType::NOT_SET;
        }

        Aws::String GetNameForSnowballType(SnowballType enumValue)
        {
          switch(enumValue)
          {
          case SnowballType::STANDARD:
            return "STANDARD";
          case SnowballType::EDGE:
            return "EDGE";
          case SnowballType::EDGE_C:
            return "EDGE_C";
          case SnowballType::EDGE_CG:
            return "EDGE_CG";
          case SnowballType::EDGE_S:
            return "EDGE_S";
          case SnowballType::SNC1_HDD:
            return "SNC1_HDD";
          case SnowballType::SNC1_SSD:
            return "SNC1_SSD";
          case SnowballType::V3_5C:
            return "V3_5C";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnowballTypeMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
