/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OpenSearchResourceStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace OpenSearchResourceStatusTypeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        OpenSearchResourceStatusType GetOpenSearchResourceStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return OpenSearchResourceStatusType::ACTIVE;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return OpenSearchResourceStatusType::NOT_FOUND;
          }
          else if (hashCode == ERROR__HASH)
          {
            return OpenSearchResourceStatusType::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenSearchResourceStatusType>(hashCode);
          }

          return OpenSearchResourceStatusType::NOT_SET;
        }

        Aws::String GetNameForOpenSearchResourceStatusType(OpenSearchResourceStatusType enumValue)
        {
          switch(enumValue)
          {
          case OpenSearchResourceStatusType::NOT_SET:
            return {};
          case OpenSearchResourceStatusType::ACTIVE:
            return "ACTIVE";
          case OpenSearchResourceStatusType::NOT_FOUND:
            return "NOT_FOUND";
          case OpenSearchResourceStatusType::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenSearchResourceStatusTypeMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
