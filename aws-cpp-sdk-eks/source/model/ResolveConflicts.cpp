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

        static const int OVERWRITE_HASH = HashingUtils::HashString("OVERWRITE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");


        ResolveConflicts GetResolveConflictsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
