/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/KeyStorageSecurityStandard.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace KeyStorageSecurityStandardMapper
      {

        static const int FIPS_140_2_LEVEL_2_OR_HIGHER_HASH = HashingUtils::HashString("FIPS_140_2_LEVEL_2_OR_HIGHER");
        static const int FIPS_140_2_LEVEL_3_OR_HIGHER_HASH = HashingUtils::HashString("FIPS_140_2_LEVEL_3_OR_HIGHER");


        KeyStorageSecurityStandard GetKeyStorageSecurityStandardForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIPS_140_2_LEVEL_2_OR_HIGHER_HASH)
          {
            return KeyStorageSecurityStandard::FIPS_140_2_LEVEL_2_OR_HIGHER;
          }
          else if (hashCode == FIPS_140_2_LEVEL_3_OR_HIGHER_HASH)
          {
            return KeyStorageSecurityStandard::FIPS_140_2_LEVEL_3_OR_HIGHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyStorageSecurityStandard>(hashCode);
          }

          return KeyStorageSecurityStandard::NOT_SET;
        }

        Aws::String GetNameForKeyStorageSecurityStandard(KeyStorageSecurityStandard enumValue)
        {
          switch(enumValue)
          {
          case KeyStorageSecurityStandard::NOT_SET:
            return {};
          case KeyStorageSecurityStandard::FIPS_140_2_LEVEL_2_OR_HIGHER:
            return "FIPS_140_2_LEVEL_2_OR_HIGHER";
          case KeyStorageSecurityStandard::FIPS_140_2_LEVEL_3_OR_HIGHER:
            return "FIPS_140_2_LEVEL_3_OR_HIGHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyStorageSecurityStandardMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
