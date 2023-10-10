/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RehydrationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace RehydrationTypeMapper
      {

        static const int ENTIRE_PAST_SESSION_HASH = HashingUtils::HashString("ENTIRE_PAST_SESSION");
        static const int FROM_SEGMENT_HASH = HashingUtils::HashString("FROM_SEGMENT");


        RehydrationType GetRehydrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTIRE_PAST_SESSION_HASH)
          {
            return RehydrationType::ENTIRE_PAST_SESSION;
          }
          else if (hashCode == FROM_SEGMENT_HASH)
          {
            return RehydrationType::FROM_SEGMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RehydrationType>(hashCode);
          }

          return RehydrationType::NOT_SET;
        }

        Aws::String GetNameForRehydrationType(RehydrationType enumValue)
        {
          switch(enumValue)
          {
          case RehydrationType::NOT_SET:
            return {};
          case RehydrationType::ENTIRE_PAST_SESSION:
            return "ENTIRE_PAST_SESSION";
          case RehydrationType::FROM_SEGMENT:
            return "FROM_SEGMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RehydrationTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
