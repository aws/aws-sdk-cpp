/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/EntityType.h>
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
      namespace EntityTypeMapper
      {

        static constexpr uint32_t MEDICATION_HASH = ConstExprHashingUtils::HashString("MEDICATION");
        static constexpr uint32_t MEDICAL_CONDITION_HASH = ConstExprHashingUtils::HashString("MEDICAL_CONDITION");
        static constexpr uint32_t PROTECTED_HEALTH_INFORMATION_HASH = ConstExprHashingUtils::HashString("PROTECTED_HEALTH_INFORMATION");
        static constexpr uint32_t TEST_TREATMENT_PROCEDURE_HASH = ConstExprHashingUtils::HashString("TEST_TREATMENT_PROCEDURE");
        static constexpr uint32_t ANATOMY_HASH = ConstExprHashingUtils::HashString("ANATOMY");
        static constexpr uint32_t TIME_EXPRESSION_HASH = ConstExprHashingUtils::HashString("TIME_EXPRESSION");
        static constexpr uint32_t BEHAVIORAL_ENVIRONMENTAL_SOCIAL_HASH = ConstExprHashingUtils::HashString("BEHAVIORAL_ENVIRONMENTAL_SOCIAL");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEDICATION_HASH)
          {
            return EntityType::MEDICATION;
          }
          else if (hashCode == MEDICAL_CONDITION_HASH)
          {
            return EntityType::MEDICAL_CONDITION;
          }
          else if (hashCode == PROTECTED_HEALTH_INFORMATION_HASH)
          {
            return EntityType::PROTECTED_HEALTH_INFORMATION;
          }
          else if (hashCode == TEST_TREATMENT_PROCEDURE_HASH)
          {
            return EntityType::TEST_TREATMENT_PROCEDURE;
          }
          else if (hashCode == ANATOMY_HASH)
          {
            return EntityType::ANATOMY;
          }
          else if (hashCode == TIME_EXPRESSION_HASH)
          {
            return EntityType::TIME_EXPRESSION;
          }
          else if (hashCode == BEHAVIORAL_ENVIRONMENTAL_SOCIAL_HASH)
          {
            return EntityType::BEHAVIORAL_ENVIRONMENTAL_SOCIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityType>(hashCode);
          }

          return EntityType::NOT_SET;
        }

        Aws::String GetNameForEntityType(EntityType enumValue)
        {
          switch(enumValue)
          {
          case EntityType::NOT_SET:
            return {};
          case EntityType::MEDICATION:
            return "MEDICATION";
          case EntityType::MEDICAL_CONDITION:
            return "MEDICAL_CONDITION";
          case EntityType::PROTECTED_HEALTH_INFORMATION:
            return "PROTECTED_HEALTH_INFORMATION";
          case EntityType::TEST_TREATMENT_PROCEDURE:
            return "TEST_TREATMENT_PROCEDURE";
          case EntityType::ANATOMY:
            return "ANATOMY";
          case EntityType::TIME_EXPRESSION:
            return "TIME_EXPRESSION";
          case EntityType::BEHAVIORAL_ENVIRONMENTAL_SOCIAL:
            return "BEHAVIORAL_ENVIRONMENTAL_SOCIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
