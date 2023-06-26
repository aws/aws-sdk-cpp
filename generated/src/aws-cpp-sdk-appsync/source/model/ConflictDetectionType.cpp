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

        static const int VERSION_HASH = HashingUtils::HashString("VERSION");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ConflictDetectionType GetConflictDetectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
