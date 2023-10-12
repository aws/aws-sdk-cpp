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

        static constexpr uint32_t PullRequest_HASH = ConstExprHashingUtils::HashString("PullRequest");
        static constexpr uint32_t RepositoryAnalysis_HASH = ConstExprHashingUtils::HashString("RepositoryAnalysis");


        Type GetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Type::NOT_SET:
            return {};
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
