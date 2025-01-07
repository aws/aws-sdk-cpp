/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/PreserveFilenameType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace PreserveFilenameTypeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PreserveFilenameType GetPreserveFilenameTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PreserveFilenameType::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PreserveFilenameType::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreserveFilenameType>(hashCode);
          }

          return PreserveFilenameType::NOT_SET;
        }

        Aws::String GetNameForPreserveFilenameType(PreserveFilenameType enumValue)
        {
          switch(enumValue)
          {
          case PreserveFilenameType::NOT_SET:
            return {};
          case PreserveFilenameType::ENABLED:
            return "ENABLED";
          case PreserveFilenameType::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreserveFilenameTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
