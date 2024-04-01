/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UsageType.h>
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
      namespace UsageTypeMapper
      {

        static const int COMPUTE_HASH = HashingUtils::HashString("COMPUTE");
        static const int LICENSE_HASH = HashingUtils::HashString("LICENSE");


        UsageType GetUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPUTE_HASH)
          {
            return UsageType::COMPUTE;
          }
          else if (hashCode == LICENSE_HASH)
          {
            return UsageType::LICENSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageType>(hashCode);
          }

          return UsageType::NOT_SET;
        }

        Aws::String GetNameForUsageType(UsageType enumValue)
        {
          switch(enumValue)
          {
          case UsageType::NOT_SET:
            return {};
          case UsageType::COMPUTE:
            return "COMPUTE";
          case UsageType::LICENSE:
            return "LICENSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
