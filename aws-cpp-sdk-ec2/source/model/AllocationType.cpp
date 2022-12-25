/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace AllocationTypeMapper
      {

        static const int used_HASH = HashingUtils::HashString("used");


        AllocationType GetAllocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == used_HASH)
          {
            return AllocationType::used;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllocationType>(hashCode);
          }

          return AllocationType::NOT_SET;
        }

        Aws::String GetNameForAllocationType(AllocationType enumValue)
        {
          switch(enumValue)
          {
          case AllocationType::used:
            return "used";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllocationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
