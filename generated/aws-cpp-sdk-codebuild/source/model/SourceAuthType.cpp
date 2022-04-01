/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/SourceAuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace SourceAuthTypeMapper
      {

        static const int OAUTH_HASH = HashingUtils::HashString("OAUTH");


        SourceAuthType GetSourceAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OAUTH_HASH)
          {
            return SourceAuthType::OAUTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceAuthType>(hashCode);
          }

          return SourceAuthType::NOT_SET;
        }

        Aws::String GetNameForSourceAuthType(SourceAuthType enumValue)
        {
          switch(enumValue)
          {
          case SourceAuthType::OAUTH:
            return "OAUTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceAuthTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
