/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/InputOntapVolumeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace InputOntapVolumeTypeMapper
      {

        static const int RW_HASH = HashingUtils::HashString("RW");
        static const int DP_HASH = HashingUtils::HashString("DP");


        InputOntapVolumeType GetInputOntapVolumeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RW_HASH)
          {
            return InputOntapVolumeType::RW;
          }
          else if (hashCode == DP_HASH)
          {
            return InputOntapVolumeType::DP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputOntapVolumeType>(hashCode);
          }

          return InputOntapVolumeType::NOT_SET;
        }

        Aws::String GetNameForInputOntapVolumeType(InputOntapVolumeType enumValue)
        {
          switch(enumValue)
          {
          case InputOntapVolumeType::RW:
            return "RW";
          case InputOntapVolumeType::DP:
            return "DP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputOntapVolumeTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
