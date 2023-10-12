/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSCopyStrategy.h>
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
      namespace OpenZFSCopyStrategyMapper
      {

        static constexpr uint32_t CLONE_HASH = ConstExprHashingUtils::HashString("CLONE");
        static constexpr uint32_t FULL_COPY_HASH = ConstExprHashingUtils::HashString("FULL_COPY");


        OpenZFSCopyStrategy GetOpenZFSCopyStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLONE_HASH)
          {
            return OpenZFSCopyStrategy::CLONE;
          }
          else if (hashCode == FULL_COPY_HASH)
          {
            return OpenZFSCopyStrategy::FULL_COPY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenZFSCopyStrategy>(hashCode);
          }

          return OpenZFSCopyStrategy::NOT_SET;
        }

        Aws::String GetNameForOpenZFSCopyStrategy(OpenZFSCopyStrategy enumValue)
        {
          switch(enumValue)
          {
          case OpenZFSCopyStrategy::NOT_SET:
            return {};
          case OpenZFSCopyStrategy::CLONE:
            return "CLONE";
          case OpenZFSCopyStrategy::FULL_COPY:
            return "FULL_COPY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenZFSCopyStrategyMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
