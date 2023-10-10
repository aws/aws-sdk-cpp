/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/RepositoryFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace RepositoryFilterTypeMapper
      {

        static const int PREFIX_MATCH_HASH = HashingUtils::HashString("PREFIX_MATCH");


        RepositoryFilterType GetRepositoryFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PREFIX_MATCH_HASH)
          {
            return RepositoryFilterType::PREFIX_MATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositoryFilterType>(hashCode);
          }

          return RepositoryFilterType::NOT_SET;
        }

        Aws::String GetNameForRepositoryFilterType(RepositoryFilterType enumValue)
        {
          switch(enumValue)
          {
          case RepositoryFilterType::NOT_SET:
            return {};
          case RepositoryFilterType::PREFIX_MATCH:
            return "PREFIX_MATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositoryFilterTypeMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
