/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ComputeAssetState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace ComputeAssetStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ISOLATED_HASH = HashingUtils::HashString("ISOLATED");
        static const int RETIRING_HASH = HashingUtils::HashString("RETIRING");


        ComputeAssetState GetComputeAssetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ComputeAssetState::ACTIVE;
          }
          else if (hashCode == ISOLATED_HASH)
          {
            return ComputeAssetState::ISOLATED;
          }
          else if (hashCode == RETIRING_HASH)
          {
            return ComputeAssetState::RETIRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeAssetState>(hashCode);
          }

          return ComputeAssetState::NOT_SET;
        }

        Aws::String GetNameForComputeAssetState(ComputeAssetState enumValue)
        {
          switch(enumValue)
          {
          case ComputeAssetState::ACTIVE:
            return "ACTIVE";
          case ComputeAssetState::ISOLATED:
            return "ISOLATED";
          case ComputeAssetState::RETIRING:
            return "RETIRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeAssetStateMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
