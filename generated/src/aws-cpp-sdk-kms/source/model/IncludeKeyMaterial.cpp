/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/IncludeKeyMaterial.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace IncludeKeyMaterialMapper
      {

        static const int ALL_KEY_MATERIAL_HASH = HashingUtils::HashString("ALL_KEY_MATERIAL");
        static const int ROTATIONS_ONLY_HASH = HashingUtils::HashString("ROTATIONS_ONLY");


        IncludeKeyMaterial GetIncludeKeyMaterialForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_KEY_MATERIAL_HASH)
          {
            return IncludeKeyMaterial::ALL_KEY_MATERIAL;
          }
          else if (hashCode == ROTATIONS_ONLY_HASH)
          {
            return IncludeKeyMaterial::ROTATIONS_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeKeyMaterial>(hashCode);
          }

          return IncludeKeyMaterial::NOT_SET;
        }

        Aws::String GetNameForIncludeKeyMaterial(IncludeKeyMaterial enumValue)
        {
          switch(enumValue)
          {
          case IncludeKeyMaterial::NOT_SET:
            return {};
          case IncludeKeyMaterial::ALL_KEY_MATERIAL:
            return "ALL_KEY_MATERIAL";
          case IncludeKeyMaterial::ROTATIONS_ONLY:
            return "ROTATIONS_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludeKeyMaterialMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
