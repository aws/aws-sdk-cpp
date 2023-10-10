/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/AllowUpstream.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace AllowUpstreamMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");


        AllowUpstream GetAllowUpstreamForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return AllowUpstream::ALLOW;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return AllowUpstream::BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowUpstream>(hashCode);
          }

          return AllowUpstream::NOT_SET;
        }

        Aws::String GetNameForAllowUpstream(AllowUpstream enumValue)
        {
          switch(enumValue)
          {
          case AllowUpstream::NOT_SET:
            return {};
          case AllowUpstream::ALLOW:
            return "ALLOW";
          case AllowUpstream::BLOCK:
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

      } // namespace AllowUpstreamMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
