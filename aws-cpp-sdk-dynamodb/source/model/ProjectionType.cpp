/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ProjectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ProjectionTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int KEYS_ONLY_HASH = HashingUtils::HashString("KEYS_ONLY");
        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");


        ProjectionType GetProjectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ProjectionType::ALL;
          }
          else if (hashCode == KEYS_ONLY_HASH)
          {
            return ProjectionType::KEYS_ONLY;
          }
          else if (hashCode == INCLUDE_HASH)
          {
            return ProjectionType::INCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProjectionType>(hashCode);
          }

          return ProjectionType::NOT_SET;
        }

        Aws::String GetNameForProjectionType(ProjectionType enumValue)
        {
          switch(enumValue)
          {
          case ProjectionType::ALL:
            return "ALL";
          case ProjectionType::KEYS_ONLY:
            return "KEYS_ONLY";
          case ProjectionType::INCLUDE:
            return "INCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProjectionTypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
