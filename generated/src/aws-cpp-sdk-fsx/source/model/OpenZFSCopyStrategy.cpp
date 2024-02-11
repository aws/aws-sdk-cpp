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

        static const int CLONE_HASH = HashingUtils::HashString("CLONE");
        static const int FULL_COPY_HASH = HashingUtils::HashString("FULL_COPY");
        static const int INCREMENTAL_COPY_HASH = HashingUtils::HashString("INCREMENTAL_COPY");


        OpenZFSCopyStrategy GetOpenZFSCopyStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLONE_HASH)
          {
            return OpenZFSCopyStrategy::CLONE;
          }
          else if (hashCode == FULL_COPY_HASH)
          {
            return OpenZFSCopyStrategy::FULL_COPY;
          }
          else if (hashCode == INCREMENTAL_COPY_HASH)
          {
            return OpenZFSCopyStrategy::INCREMENTAL_COPY;
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
          case OpenZFSCopyStrategy::INCREMENTAL_COPY:
            return "INCREMENTAL_COPY";
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
