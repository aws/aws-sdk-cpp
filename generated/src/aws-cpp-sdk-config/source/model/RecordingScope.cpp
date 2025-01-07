/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RecordingScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace RecordingScopeMapper
      {

        static const int INTERNAL_HASH = HashingUtils::HashString("INTERNAL");
        static const int PAID_HASH = HashingUtils::HashString("PAID");


        RecordingScope GetRecordingScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_HASH)
          {
            return RecordingScope::INTERNAL;
          }
          else if (hashCode == PAID_HASH)
          {
            return RecordingScope::PAID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordingScope>(hashCode);
          }

          return RecordingScope::NOT_SET;
        }

        Aws::String GetNameForRecordingScope(RecordingScope enumValue)
        {
          switch(enumValue)
          {
          case RecordingScope::NOT_SET:
            return {};
          case RecordingScope::INTERNAL:
            return "INTERNAL";
          case RecordingScope::PAID:
            return "PAID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordingScopeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
