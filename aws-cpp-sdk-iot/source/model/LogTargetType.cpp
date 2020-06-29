/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/LogTargetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace LogTargetTypeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int THING_GROUP_HASH = HashingUtils::HashString("THING_GROUP");


        LogTargetType GetLogTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return LogTargetType::DEFAULT;
          }
          else if (hashCode == THING_GROUP_HASH)
          {
            return LogTargetType::THING_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogTargetType>(hashCode);
          }

          return LogTargetType::NOT_SET;
        }

        Aws::String GetNameForLogTargetType(LogTargetType enumValue)
        {
          switch(enumValue)
          {
          case LogTargetType::DEFAULT:
            return "DEFAULT";
          case LogTargetType::THING_GROUP:
            return "THING_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogTargetTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
