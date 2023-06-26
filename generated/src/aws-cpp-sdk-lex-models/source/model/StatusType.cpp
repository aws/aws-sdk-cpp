/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/StatusType.h>
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
      namespace StatusTypeMapper
      {

        static const int Detected_HASH = HashingUtils::HashString("Detected");
        static const int Missed_HASH = HashingUtils::HashString("Missed");


        StatusType GetStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Detected_HASH)
          {
            return StatusType::Detected;
          }
          else if (hashCode == Missed_HASH)
          {
            return StatusType::Missed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusType>(hashCode);
          }

          return StatusType::NOT_SET;
        }

        Aws::String GetNameForStatusType(StatusType enumValue)
        {
          switch(enumValue)
          {
          case StatusType::Detected:
            return "Detected";
          case StatusType::Missed:
            return "Missed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
