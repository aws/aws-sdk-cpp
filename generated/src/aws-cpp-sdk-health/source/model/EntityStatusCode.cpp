/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EntityStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Health
  {
    namespace Model
    {
      namespace EntityStatusCodeMapper
      {

        static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");
        static const int UNIMPAIRED_HASH = HashingUtils::HashString("UNIMPAIRED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");


        EntityStatusCode GetEntityStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPAIRED_HASH)
          {
            return EntityStatusCode::IMPAIRED;
          }
          else if (hashCode == UNIMPAIRED_HASH)
          {
            return EntityStatusCode::UNIMPAIRED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return EntityStatusCode::UNKNOWN;
          }
          else if (hashCode == PENDING_HASH)
          {
            return EntityStatusCode::PENDING;
          }
          else if (hashCode == RESOLVED_HASH)
          {
            return EntityStatusCode::RESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityStatusCode>(hashCode);
          }

          return EntityStatusCode::NOT_SET;
        }

        Aws::String GetNameForEntityStatusCode(EntityStatusCode enumValue)
        {
          switch(enumValue)
          {
          case EntityStatusCode::NOT_SET:
            return {};
          case EntityStatusCode::IMPAIRED:
            return "IMPAIRED";
          case EntityStatusCode::UNIMPAIRED:
            return "UNIMPAIRED";
          case EntityStatusCode::UNKNOWN:
            return "UNKNOWN";
          case EntityStatusCode::PENDING:
            return "PENDING";
          case EntityStatusCode::RESOLVED:
            return "RESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityStatusCodeMapper
    } // namespace Model
  } // namespace Health
} // namespace Aws
