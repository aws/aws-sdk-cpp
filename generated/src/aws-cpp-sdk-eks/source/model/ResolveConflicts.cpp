/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ResolveConflicts.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace ResolveConflictsMapper
      {

        static constexpr uint32_t OVERWRITE_HASH = ConstExprHashingUtils::HashString("OVERWRITE");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t PRESERVE_HASH = ConstExprHashingUtils::HashString("PRESERVE");


        ResolveConflicts GetResolveConflictsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OVERWRITE_HASH)
          {
            return ResolveConflicts::OVERWRITE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ResolveConflicts::NONE;
          }
          else if (hashCode == PRESERVE_HASH)
          {
            return ResolveConflicts::PRESERVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolveConflicts>(hashCode);
          }

          return ResolveConflicts::NOT_SET;
        }

        Aws::String GetNameForResolveConflicts(ResolveConflicts enumValue)
        {
          switch(enumValue)
          {
          case ResolveConflicts::NOT_SET:
            return {};
          case ResolveConflicts::OVERWRITE:
            return "OVERWRITE";
          case ResolveConflicts::NONE:
            return "NONE";
          case ResolveConflicts::PRESERVE:
            return "PRESERVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolveConflictsMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
