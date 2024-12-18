/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/PreserveContentType.h>
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
      namespace PreserveContentTypeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PreserveContentType GetPreserveContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PreserveContentType::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PreserveContentType::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreserveContentType>(hashCode);
          }

          return PreserveContentType::NOT_SET;
        }

        Aws::String GetNameForPreserveContentType(PreserveContentType enumValue)
        {
          switch(enumValue)
          {
          case PreserveContentType::NOT_SET:
            return {};
          case PreserveContentType::ENABLED:
            return "ENABLED";
          case PreserveContentType::DISABLED:
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

      } // namespace PreserveContentTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
