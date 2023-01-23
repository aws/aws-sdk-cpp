/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/StatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glacier
  {
    namespace Model
    {
      namespace StatusCodeMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        StatusCode GetStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return StatusCode::InProgress;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return StatusCode::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return StatusCode::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusCode>(hashCode);
          }

          return StatusCode::NOT_SET;
        }

        Aws::String GetNameForStatusCode(StatusCode enumValue)
        {
          switch(enumValue)
          {
          case StatusCode::InProgress:
            return "InProgress";
          case StatusCode::Succeeded:
            return "Succeeded";
          case StatusCode::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusCodeMapper
    } // namespace Model
  } // namespace Glacier
} // namespace Aws
