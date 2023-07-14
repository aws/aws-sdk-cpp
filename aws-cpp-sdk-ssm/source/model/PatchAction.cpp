/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PatchActionMapper
      {

        static const int ALLOW_AS_DEPENDENCY_HASH = HashingUtils::HashString("ALLOW_AS_DEPENDENCY");
        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");


        PatchAction GetPatchActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_AS_DEPENDENCY_HASH)
          {
            return PatchAction::ALLOW_AS_DEPENDENCY;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return PatchAction::BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchAction>(hashCode);
          }

          return PatchAction::NOT_SET;
        }

        Aws::String GetNameForPatchAction(PatchAction enumValue)
        {
          switch(enumValue)
          {
          case PatchAction::ALLOW_AS_DEPENDENCY:
            return "ALLOW_AS_DEPENDENCY";
          case PatchAction::BLOCK:
            return "BLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchActionMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
