/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace TypeMapper
      {

        static const int PullRequest_HASH = HashingUtils::HashString("PullRequest");
        static const int RepositoryAnalysis_HASH = HashingUtils::HashString("RepositoryAnalysis");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PullRequest_HASH)
          {
            return Type::PullRequest;
          }
          else if (hashCode == RepositoryAnalysis_HASH)
          {
            return Type::RepositoryAnalysis;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::PullRequest:
            return "PullRequest";
          case Type::RepositoryAnalysis:
            return "RepositoryAnalysis";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
