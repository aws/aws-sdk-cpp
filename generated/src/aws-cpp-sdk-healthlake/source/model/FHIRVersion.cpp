/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/FHIRVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace HealthLake
  {
    namespace Model
    {
      namespace FHIRVersionMapper
      {

        static const int R4_HASH = HashingUtils::HashString("R4");


        FHIRVersion GetFHIRVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == R4_HASH)
          {
            return FHIRVersion::R4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FHIRVersion>(hashCode);
          }

          return FHIRVersion::NOT_SET;
        }

        Aws::String GetNameForFHIRVersion(FHIRVersion enumValue)
        {
          switch(enumValue)
          {
          case FHIRVersion::NOT_SET:
            return {};
          case FHIRVersion::R4:
            return "R4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FHIRVersionMapper
    } // namespace Model
  } // namespace HealthLake
} // namespace Aws
