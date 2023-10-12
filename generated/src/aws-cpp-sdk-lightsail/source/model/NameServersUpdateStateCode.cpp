/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/NameServersUpdateStateCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace NameServersUpdateStateCodeMapper
      {

        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");


        NameServersUpdateStateCode GetNameServersUpdateStateCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return NameServersUpdateStateCode::SUCCEEDED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return NameServersUpdateStateCode::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return NameServersUpdateStateCode::FAILED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return NameServersUpdateStateCode::STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NameServersUpdateStateCode>(hashCode);
          }

          return NameServersUpdateStateCode::NOT_SET;
        }

        Aws::String GetNameForNameServersUpdateStateCode(NameServersUpdateStateCode enumValue)
        {
          switch(enumValue)
          {
          case NameServersUpdateStateCode::NOT_SET:
            return {};
          case NameServersUpdateStateCode::SUCCEEDED:
            return "SUCCEEDED";
          case NameServersUpdateStateCode::PENDING:
            return "PENDING";
          case NameServersUpdateStateCode::FAILED:
            return "FAILED";
          case NameServersUpdateStateCode::STARTED:
            return "STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NameServersUpdateStateCodeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
