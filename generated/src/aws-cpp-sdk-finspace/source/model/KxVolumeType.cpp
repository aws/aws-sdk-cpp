/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxVolumeType.h>
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
      namespace KxVolumeTypeMapper
      {

        static const int NAS_1_HASH = HashingUtils::HashString("NAS_1");


        KxVolumeType GetKxVolumeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAS_1_HASH)
          {
            return KxVolumeType::NAS_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxVolumeType>(hashCode);
          }

          return KxVolumeType::NOT_SET;
        }

        Aws::String GetNameForKxVolumeType(KxVolumeType enumValue)
        {
          switch(enumValue)
          {
          case KxVolumeType::NOT_SET:
            return {};
          case KxVolumeType::NAS_1:
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

      } // namespace KxVolumeTypeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
