/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PatchFilterKeyMapper
      {

        static const int PATCH_SET_HASH = HashingUtils::HashString("PATCH_SET");
        static const int PRODUCT_HASH = HashingUtils::HashString("PRODUCT");
        static const int PRODUCT_FAMILY_HASH = HashingUtils::HashString("PRODUCT_FAMILY");
        static const int CLASSIFICATION_HASH = HashingUtils::HashString("CLASSIFICATION");
        static const int MSRC_SEVERITY_HASH = HashingUtils::HashString("MSRC_SEVERITY");
        static const int PATCH_ID_HASH = HashingUtils::HashString("PATCH_ID");
        static const int SECTION_HASH = HashingUtils::HashString("SECTION");
        static const int PRIORITY_HASH = HashingUtils::HashString("PRIORITY");
        static const int SEVERITY_HASH = HashingUtils::HashString("SEVERITY");


        PatchFilterKey GetPatchFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PATCH_SET_HASH)
          {
            return PatchFilterKey::PATCH_SET;
          }
          else if (hashCode == PRODUCT_HASH)
          {
            return PatchFilterKey::PRODUCT;
          }
          else if (hashCode == PRODUCT_FAMILY_HASH)
          {
            return PatchFilterKey::PRODUCT_FAMILY;
          }
          else if (hashCode == CLASSIFICATION_HASH)
          {
            return PatchFilterKey::CLASSIFICATION;
          }
          else if (hashCode == MSRC_SEVERITY_HASH)
          {
            return PatchFilterKey::MSRC_SEVERITY;
          }
          else if (hashCode == PATCH_ID_HASH)
          {
            return PatchFilterKey::PATCH_ID;
          }
          else if (hashCode == SECTION_HASH)
          {
            return PatchFilterKey::SECTION;
          }
          else if (hashCode == PRIORITY_HASH)
          {
            return PatchFilterKey::PRIORITY;
          }
          else if (hashCode == SEVERITY_HASH)
          {
            return PatchFilterKey::SEVERITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchFilterKey>(hashCode);
          }

          return PatchFilterKey::NOT_SET;
        }

        Aws::String GetNameForPatchFilterKey(PatchFilterKey enumValue)
        {
          switch(enumValue)
          {
          case PatchFilterKey::PATCH_SET:
            return "PATCH_SET";
          case PatchFilterKey::PRODUCT:
            return "PRODUCT";
          case PatchFilterKey::PRODUCT_FAMILY:
            return "PRODUCT_FAMILY";
          case PatchFilterKey::CLASSIFICATION:
            return "CLASSIFICATION";
          case PatchFilterKey::MSRC_SEVERITY:
            return "MSRC_SEVERITY";
          case PatchFilterKey::PATCH_ID:
            return "PATCH_ID";
          case PatchFilterKey::SECTION:
            return "SECTION";
          case PatchFilterKey::PRIORITY:
            return "PRIORITY";
          case PatchFilterKey::SEVERITY:
            return "SEVERITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
