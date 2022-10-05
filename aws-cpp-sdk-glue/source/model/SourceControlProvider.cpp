/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SourceControlProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace SourceControlProviderMapper
      {

        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int AWS_CODE_COMMIT_HASH = HashingUtils::HashString("AWS_CODE_COMMIT");


        SourceControlProvider GetSourceControlProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_HASH)
          {
            return SourceControlProvider::GITHUB;
          }
          else if (hashCode == AWS_CODE_COMMIT_HASH)
          {
            return SourceControlProvider::AWS_CODE_COMMIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceControlProvider>(hashCode);
          }

          return SourceControlProvider::NOT_SET;
        }

        Aws::String GetNameForSourceControlProvider(SourceControlProvider enumValue)
        {
          switch(enumValue)
          {
          case SourceControlProvider::GITHUB:
            return "GITHUB";
          case SourceControlProvider::AWS_CODE_COMMIT:
            return "AWS_CODE_COMMIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceControlProviderMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
