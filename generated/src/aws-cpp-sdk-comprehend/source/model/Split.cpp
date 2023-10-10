/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/Split.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace SplitMapper
      {

        static const int TRAIN_HASH = HashingUtils::HashString("TRAIN");
        static const int TEST_HASH = HashingUtils::HashString("TEST");


        Split GetSplitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAIN_HASH)
          {
            return Split::TRAIN;
          }
          else if (hashCode == TEST_HASH)
          {
            return Split::TEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Split>(hashCode);
          }

          return Split::NOT_SET;
        }

        Aws::String GetNameForSplit(Split enumValue)
        {
          switch(enumValue)
          {
          case Split::NOT_SET:
            return {};
          case Split::TRAIN:
            return "TRAIN";
          case Split::TEST:
            return "TEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SplitMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
