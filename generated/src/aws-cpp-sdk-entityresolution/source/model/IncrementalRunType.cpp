/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IncrementalRunType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace IncrementalRunTypeMapper
      {

        static const int IMMEDIATE_HASH = HashingUtils::HashString("IMMEDIATE");


        IncrementalRunType GetIncrementalRunTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMMEDIATE_HASH)
          {
            return IncrementalRunType::IMMEDIATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncrementalRunType>(hashCode);
          }

          return IncrementalRunType::NOT_SET;
        }

        Aws::String GetNameForIncrementalRunType(IncrementalRunType enumValue)
        {
          switch(enumValue)
          {
          case IncrementalRunType::NOT_SET:
            return {};
          case IncrementalRunType::IMMEDIATE:
            return "IMMEDIATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncrementalRunTypeMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
