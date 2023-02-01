/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SharedAccess.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace SharedAccessMapper
      {

        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");
        static const int INTERNAL_HASH = HashingUtils::HashString("INTERNAL");
        static const int NOT_SHARED_HASH = HashingUtils::HashString("NOT_SHARED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        SharedAccess GetSharedAccessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTERNAL_HASH)
          {
            return SharedAccess::EXTERNAL;
          }
          else if (hashCode == INTERNAL_HASH)
          {
            return SharedAccess::INTERNAL;
          }
          else if (hashCode == NOT_SHARED_HASH)
          {
            return SharedAccess::NOT_SHARED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return SharedAccess::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharedAccess>(hashCode);
          }

          return SharedAccess::NOT_SET;
        }

        Aws::String GetNameForSharedAccess(SharedAccess enumValue)
        {
          switch(enumValue)
          {
          case SharedAccess::EXTERNAL:
            return "EXTERNAL";
          case SharedAccess::INTERNAL:
            return "INTERNAL";
          case SharedAccess::NOT_SHARED:
            return "NOT_SHARED";
          case SharedAccess::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharedAccessMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
