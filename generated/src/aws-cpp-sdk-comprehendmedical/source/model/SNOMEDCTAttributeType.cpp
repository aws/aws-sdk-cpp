/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/SNOMEDCTAttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace SNOMEDCTAttributeTypeMapper
      {

        static constexpr uint32_t ACUITY_HASH = ConstExprHashingUtils::HashString("ACUITY");
        static constexpr uint32_t QUALITY_HASH = ConstExprHashingUtils::HashString("QUALITY");
        static constexpr uint32_t DIRECTION_HASH = ConstExprHashingUtils::HashString("DIRECTION");
        static constexpr uint32_t SYSTEM_ORGAN_SITE_HASH = ConstExprHashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static constexpr uint32_t TEST_VALUE_HASH = ConstExprHashingUtils::HashString("TEST_VALUE");
        static constexpr uint32_t TEST_UNIT_HASH = ConstExprHashingUtils::HashString("TEST_UNIT");


        SNOMEDCTAttributeType GetSNOMEDCTAttributeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACUITY_HASH)
          {
            return SNOMEDCTAttributeType::ACUITY;
          }
          else if (hashCode == QUALITY_HASH)
          {
            return SNOMEDCTAttributeType::QUALITY;
          }
          else if (hashCode == DIRECTION_HASH)
          {
            return SNOMEDCTAttributeType::DIRECTION;
          }
          else if (hashCode == SYSTEM_ORGAN_SITE_HASH)
          {
            return SNOMEDCTAttributeType::SYSTEM_ORGAN_SITE;
          }
          else if (hashCode == TEST_VALUE_HASH)
          {
            return SNOMEDCTAttributeType::TEST_VALUE;
          }
          else if (hashCode == TEST_UNIT_HASH)
          {
            return SNOMEDCTAttributeType::TEST_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SNOMEDCTAttributeType>(hashCode);
          }

          return SNOMEDCTAttributeType::NOT_SET;
        }

        Aws::String GetNameForSNOMEDCTAttributeType(SNOMEDCTAttributeType enumValue)
        {
          switch(enumValue)
          {
          case SNOMEDCTAttributeType::NOT_SET:
            return {};
          case SNOMEDCTAttributeType::ACUITY:
            return "ACUITY";
          case SNOMEDCTAttributeType::QUALITY:
            return "QUALITY";
          case SNOMEDCTAttributeType::DIRECTION:
            return "DIRECTION";
          case SNOMEDCTAttributeType::SYSTEM_ORGAN_SITE:
            return "SYSTEM_ORGAN_SITE";
          case SNOMEDCTAttributeType::TEST_VALUE:
            return "TEST_VALUE";
          case SNOMEDCTAttributeType::TEST_UNIT:
            return "TEST_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SNOMEDCTAttributeTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
