/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Status.h>
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
      namespace StatusMapper
      {

        static const int MoveInProgress_HASH = HashingUtils::HashString("MoveInProgress");
        static const int InVpc_HASH = HashingUtils::HashString("InVpc");
        static const int InClassic_HASH = HashingUtils::HashString("InClassic");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MoveInProgress_HASH)
          {
            return Status::MoveInProgress;
          }
          else if (hashCode == InVpc_HASH)
          {
            return Status::InVpc;
          }
          else if (hashCode == InClassic_HASH)
          {
            return Status::InClassic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::MoveInProgress:
            return "MoveInProgress";
          case Status::InVpc:
            return "InVpc";
          case Status::InClassic:
            return "InClassic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
