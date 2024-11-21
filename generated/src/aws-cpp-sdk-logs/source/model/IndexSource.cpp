/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/IndexSource.h>
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
      namespace IndexSourceMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int LOG_GROUP_HASH = HashingUtils::HashString("LOG_GROUP");


        IndexSource GetIndexSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return IndexSource::ACCOUNT;
          }
          else if (hashCode == LOG_GROUP_HASH)
          {
            return IndexSource::LOG_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndexSource>(hashCode);
          }

          return IndexSource::NOT_SET;
        }

        Aws::String GetNameForIndexSource(IndexSource enumValue)
        {
          switch(enumValue)
          {
          case IndexSource::NOT_SET:
            return {};
          case IndexSource::ACCOUNT:
            return "ACCOUNT";
          case IndexSource::LOG_GROUP:
            return "LOG_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndexSourceMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
