/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ChangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace ChangeTypeMapper
      {

        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
        static const int APPEND_HASH = HashingUtils::HashString("APPEND");
        static const int MODIFY_HASH = HashingUtils::HashString("MODIFY");


        ChangeType GetChangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLACE_HASH)
          {
            return ChangeType::REPLACE;
          }
          else if (hashCode == APPEND_HASH)
          {
            return ChangeType::APPEND;
          }
          else if (hashCode == MODIFY_HASH)
          {
            return ChangeType::MODIFY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeType>(hashCode);
          }

          return ChangeType::NOT_SET;
        }

        Aws::String GetNameForChangeType(ChangeType enumValue)
        {
          switch(enumValue)
          {
          case ChangeType::NOT_SET:
            return {};
          case ChangeType::REPLACE:
            return "REPLACE";
          case ChangeType::APPEND:
            return "APPEND";
          case ChangeType::MODIFY:
            return "MODIFY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeTypeMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
