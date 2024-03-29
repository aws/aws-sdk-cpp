﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MoveStatus.h>
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
      namespace MoveStatusMapper
      {

        static const int movingToVpc_HASH = HashingUtils::HashString("movingToVpc");
        static const int restoringToClassic_HASH = HashingUtils::HashString("restoringToClassic");


        MoveStatus GetMoveStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == movingToVpc_HASH)
          {
            return MoveStatus::movingToVpc;
          }
          else if (hashCode == restoringToClassic_HASH)
          {
            return MoveStatus::restoringToClassic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MoveStatus>(hashCode);
          }

          return MoveStatus::NOT_SET;
        }

        Aws::String GetNameForMoveStatus(MoveStatus enumValue)
        {
          switch(enumValue)
          {
          case MoveStatus::NOT_SET:
            return {};
          case MoveStatus::movingToVpc:
            return "movingToVpc";
          case MoveStatus::restoringToClassic:
            return "restoringToClassic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MoveStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
