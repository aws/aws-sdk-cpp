/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ResolverKind.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ResolverKindMapper
      {

        static const int UNIT_HASH = HashingUtils::HashString("UNIT");
        static const int PIPELINE_HASH = HashingUtils::HashString("PIPELINE");


        ResolverKind GetResolverKindForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNIT_HASH)
          {
            return ResolverKind::UNIT;
          }
          else if (hashCode == PIPELINE_HASH)
          {
            return ResolverKind::PIPELINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverKind>(hashCode);
          }

          return ResolverKind::NOT_SET;
        }

        Aws::String GetNameForResolverKind(ResolverKind enumValue)
        {
          switch(enumValue)
          {
          case ResolverKind::UNIT:
            return "UNIT";
          case ResolverKind::PIPELINE:
            return "PIPELINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverKindMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
