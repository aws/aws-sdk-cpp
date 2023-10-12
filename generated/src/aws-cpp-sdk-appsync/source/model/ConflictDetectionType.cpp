/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ConflictDetectionType.h>
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
      namespace ConflictDetectionTypeMapper
      {

        static constexpr uint32_t VERSION_HASH = ConstExprHashingUtils::HashString("VERSION");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        ConflictDetectionType GetConflictDetectionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERSION_HASH)
          {
            return ConflictDetectionType::VERSION;
          }
          else if (hashCode == NONE_HASH)
          {
            return ConflictDetectionType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictDetectionType>(hashCode);
          }

          return ConflictDetectionType::NOT_SET;
        }

        Aws::String GetNameForConflictDetectionType(ConflictDetectionType enumValue)
        {
          switch(enumValue)
          {
          case ConflictDetectionType::NOT_SET:
            return {};
          case ConflictDetectionType::VERSION:
            return "VERSION";
          case ConflictDetectionType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictDetectionTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
