/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/ScanDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace ScanDirectionMapper
      {

        static const int FORWARD_HASH = HashingUtils::HashString("FORWARD");
        static const int BACKWARD_HASH = HashingUtils::HashString("BACKWARD");


        ScanDirection GetScanDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORWARD_HASH)
          {
            return ScanDirection::FORWARD;
          }
          else if (hashCode == BACKWARD_HASH)
          {
            return ScanDirection::BACKWARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanDirection>(hashCode);
          }

          return ScanDirection::NOT_SET;
        }

        Aws::String GetNameForScanDirection(ScanDirection enumValue)
        {
          switch(enumValue)
          {
          case ScanDirection::FORWARD:
            return "FORWARD";
          case ScanDirection::BACKWARD:
            return "BACKWARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanDirectionMapper
    } // namespace Model
  } // namespace ConnectParticipant
} // namespace Aws
