/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace MoveStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
