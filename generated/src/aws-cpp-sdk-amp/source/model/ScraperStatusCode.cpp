/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ScraperStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrometheusService
  {
    namespace Model
    {
      namespace ScraperStatusCodeMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");


        ScraperStatusCode GetScraperStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ScraperStatusCode::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ScraperStatusCode::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ScraperStatusCode::DELETING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return ScraperStatusCode::CREATION_FAILED;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return ScraperStatusCode::DELETION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScraperStatusCode>(hashCode);
          }

          return ScraperStatusCode::NOT_SET;
        }

        Aws::String GetNameForScraperStatusCode(ScraperStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ScraperStatusCode::NOT_SET:
            return {};
          case ScraperStatusCode::CREATING:
            return "CREATING";
          case ScraperStatusCode::ACTIVE:
            return "ACTIVE";
          case ScraperStatusCode::DELETING:
            return "DELETING";
          case ScraperStatusCode::CREATION_FAILED:
            return "CREATION_FAILED";
          case ScraperStatusCode::DELETION_FAILED:
            return "DELETION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScraperStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
