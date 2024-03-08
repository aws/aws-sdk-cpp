/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/ICD10CMAttributeType.h>
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
      namespace ICD10CMAttributeTypeMapper
      {

        static const int ACUITY_HASH = HashingUtils::HashString("ACUITY");
        static const int DIRECTION_HASH = HashingUtils::HashString("DIRECTION");
        static const int SYSTEM_ORGAN_SITE_HASH = HashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static const int QUALITY_HASH = HashingUtils::HashString("QUALITY");
        static const int QUANTITY_HASH = HashingUtils::HashString("QUANTITY");
        static const int TIME_TO_DX_NAME_HASH = HashingUtils::HashString("TIME_TO_DX_NAME");
        static const int TIME_EXPRESSION_HASH = HashingUtils::HashString("TIME_EXPRESSION");


        ICD10CMAttributeType GetICD10CMAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACUITY_HASH)
          {
            return ICD10CMAttributeType::ACUITY;
          }
          else if (hashCode == DIRECTION_HASH)
          {
            return ICD10CMAttributeType::DIRECTION;
          }
          else if (hashCode == SYSTEM_ORGAN_SITE_HASH)
          {
            return ICD10CMAttributeType::SYSTEM_ORGAN_SITE;
          }
          else if (hashCode == QUALITY_HASH)
          {
            return ICD10CMAttributeType::QUALITY;
          }
          else if (hashCode == QUANTITY_HASH)
          {
            return ICD10CMAttributeType::QUANTITY;
          }
          else if (hashCode == TIME_TO_DX_NAME_HASH)
          {
            return ICD10CMAttributeType::TIME_TO_DX_NAME;
          }
          else if (hashCode == TIME_EXPRESSION_HASH)
          {
            return ICD10CMAttributeType::TIME_EXPRESSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ICD10CMAttributeType>(hashCode);
          }

          return ICD10CMAttributeType::NOT_SET;
        }

        Aws::String GetNameForICD10CMAttributeType(ICD10CMAttributeType enumValue)
        {
          switch(enumValue)
          {
          case ICD10CMAttributeType::NOT_SET:
            return {};
          case ICD10CMAttributeType::ACUITY:
            return "ACUITY";
          case ICD10CMAttributeType::DIRECTION:
            return "DIRECTION";
          case ICD10CMAttributeType::SYSTEM_ORGAN_SITE:
            return "SYSTEM_ORGAN_SITE";
          case ICD10CMAttributeType::QUALITY:
            return "QUALITY";
          case ICD10CMAttributeType::QUANTITY:
            return "QUANTITY";
          case ICD10CMAttributeType::TIME_TO_DX_NAME:
            return "TIME_TO_DX_NAME";
          case ICD10CMAttributeType::TIME_EXPRESSION:
            return "TIME_EXPRESSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ICD10CMAttributeTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
