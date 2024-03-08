/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/VolumeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace VolumeTypeMapper
      {

        static const int NAS_1_HASH = HashingUtils::HashString("NAS_1");


        VolumeType GetVolumeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAS_1_HASH)
          {
            return VolumeType::NAS_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeType>(hashCode);
          }

          return VolumeType::NOT_SET;
        }

        Aws::String GetNameForVolumeType(VolumeType enumValue)
        {
          switch(enumValue)
          {
          case VolumeType::NOT_SET:
            return {};
          case VolumeType::NAS_1:
            return "NAS_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeTypeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
