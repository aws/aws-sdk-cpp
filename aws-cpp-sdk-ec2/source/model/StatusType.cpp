/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace StatusTypeMapper
      {

        static const int passed_HASH = HashingUtils::HashString("passed");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");
        static const int initializing_HASH = HashingUtils::HashString("initializing");


        StatusType GetStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == passed_HASH)
          {
            return StatusType::passed;
          }
          else if (hashCode == failed_HASH)
          {
            return StatusType::failed;
          }
          else if (hashCode == insufficient_data_HASH)
          {
            return StatusType::insufficient_data;
          }
          else if (hashCode == initializing_HASH)
          {
            return StatusType::initializing;
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
          case StatusType::passed:
            return "passed";
          case StatusType::failed:
            return "failed";
          case StatusType::insufficient_data:
            return "insufficient-data";
          case StatusType::initializing:
            return "initializing";
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
  } // namespace EC2
} // namespace Aws
