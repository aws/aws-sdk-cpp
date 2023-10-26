/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/ICD10CMRelationshipType.h>
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
      namespace ICD10CMRelationshipTypeMapper
      {

        static const int OVERLAP_HASH = HashingUtils::HashString("OVERLAP");
        static const int SYSTEM_ORGAN_SITE_HASH = HashingUtils::HashString("SYSTEM_ORGAN_SITE");
        static const int QUALITY_HASH = HashingUtils::HashString("QUALITY");


        ICD10CMRelationshipType GetICD10CMRelationshipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OVERLAP_HASH)
          {
            return ICD10CMRelationshipType::OVERLAP;
          }
          else if (hashCode == SYSTEM_ORGAN_SITE_HASH)
          {
            return ICD10CMRelationshipType::SYSTEM_ORGAN_SITE;
          }
          else if (hashCode == QUALITY_HASH)
          {
            return ICD10CMRelationshipType::QUALITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ICD10CMRelationshipType>(hashCode);
          }

          return ICD10CMRelationshipType::NOT_SET;
        }

        Aws::String GetNameForICD10CMRelationshipType(ICD10CMRelationshipType enumValue)
        {
          switch(enumValue)
          {
          case ICD10CMRelationshipType::NOT_SET:
            return {};
          case ICD10CMRelationshipType::OVERLAP:
            return "OVERLAP";
          case ICD10CMRelationshipType::SYSTEM_ORGAN_SITE:
            return "SYSTEM_ORGAN_SITE";
          case ICD10CMRelationshipType::QUALITY:
            return "QUALITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ICD10CMRelationshipTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
