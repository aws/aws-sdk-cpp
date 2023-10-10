/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/AllowPublish.h>
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
      namespace AllowPublishMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");


        AllowPublish GetAllowPublishForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return AllowPublish::ALLOW;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return AllowPublish::BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowPublish>(hashCode);
          }

          return AllowPublish::NOT_SET;
        }

        Aws::String GetNameForAllowPublish(AllowPublish enumValue)
        {
          switch(enumValue)
          {
          case AllowPublish::NOT_SET:
            return {};
          case AllowPublish::ALLOW:
            return "ALLOW";
          case AllowPublish::BLOCK:
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

      } // namespace AllowPublishMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
