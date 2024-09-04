/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/FieldLogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace FieldLogLevelMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");


        FieldLogLevel GetFieldLogLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return FieldLogLevel::NONE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return FieldLogLevel::ERROR_;
          }
          else if (hashCode == ALL_HASH)
          {
            return FieldLogLevel::ALL;
          }
          else if (hashCode == INFO_HASH)
          {
            return FieldLogLevel::INFO;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return FieldLogLevel::DEBUG_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldLogLevel>(hashCode);
          }

          return FieldLogLevel::NOT_SET;
        }

        Aws::String GetNameForFieldLogLevel(FieldLogLevel enumValue)
        {
          switch(enumValue)
          {
          case FieldLogLevel::NOT_SET:
            return {};
          case FieldLogLevel::NONE:
            return "NONE";
          case FieldLogLevel::ERROR_:
            return "ERROR";
          case FieldLogLevel::ALL:
            return "ALL";
          case FieldLogLevel::INFO:
            return "INFO";
          case FieldLogLevel::DEBUG_:
            return "DEBUG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldLogLevelMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
