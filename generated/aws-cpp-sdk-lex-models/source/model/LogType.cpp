/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/LogType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace LogTypeMapper
      {

        static const int AUDIO_HASH = HashingUtils::HashString("AUDIO");
        static const int TEXT_HASH = HashingUtils::HashString("TEXT");


        LogType GetLogTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUDIO_HASH)
          {
            return LogType::AUDIO;
          }
          else if (hashCode == TEXT_HASH)
          {
            return LogType::TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogType>(hashCode);
          }

          return LogType::NOT_SET;
        }

        Aws::String GetNameForLogType(LogType enumValue)
        {
          switch(enumValue)
          {
          case LogType::AUDIO:
            return "AUDIO";
          case LogType::TEXT:
            return "TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
