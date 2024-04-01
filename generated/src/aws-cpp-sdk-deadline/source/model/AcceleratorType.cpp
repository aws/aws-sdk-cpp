/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AcceleratorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace AcceleratorTypeMapper
      {

        static const int gpu_HASH = HashingUtils::HashString("gpu");


        AcceleratorType GetAcceleratorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == gpu_HASH)
          {
            return AcceleratorType::gpu;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceleratorType>(hashCode);
          }

          return AcceleratorType::NOT_SET;
        }

        Aws::String GetNameForAcceleratorType(AcceleratorType enumValue)
        {
          switch(enumValue)
          {
          case AcceleratorType::NOT_SET:
            return {};
          case AcceleratorType::gpu:
            return "gpu";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceleratorTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
