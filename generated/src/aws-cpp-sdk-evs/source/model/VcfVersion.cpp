/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/VcfVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EVS
  {
    namespace Model
    {
      namespace VcfVersionMapper
      {

        static const int VCF_5_2_1_HASH = HashingUtils::HashString("VCF-5.2.1");


        VcfVersion GetVcfVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VCF_5_2_1_HASH)
          {
            return VcfVersion::VCF_5_2_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VcfVersion>(hashCode);
          }

          return VcfVersion::NOT_SET;
        }

        Aws::String GetNameForVcfVersion(VcfVersion enumValue)
        {
          switch(enumValue)
          {
          case VcfVersion::NOT_SET:
            return {};
          case VcfVersion::VCF_5_2_1:
            return "VCF-5.2.1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VcfVersionMapper
    } // namespace Model
  } // namespace EVS
} // namespace Aws
