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

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        StatusCode GetStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case StatusCode::NOT_SET:
            return {};
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
