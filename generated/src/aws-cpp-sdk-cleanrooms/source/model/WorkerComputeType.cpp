/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/WorkerComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace WorkerComputeTypeMapper
      {

        static const int CR_1X_HASH = HashingUtils::HashString("CR.1X");
        static const int CR_4X_HASH = HashingUtils::HashString("CR.4X");


        WorkerComputeType GetWorkerComputeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CR_1X_HASH)
          {
            return WorkerComputeType::CR_1X;
          }
          else if (hashCode == CR_4X_HASH)
          {
            return WorkerComputeType::CR_4X;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkerComputeType>(hashCode);
          }

          return WorkerComputeType::NOT_SET;
        }

        Aws::String GetNameForWorkerComputeType(WorkerComputeType enumValue)
        {
          switch(enumValue)
          {
          case WorkerComputeType::NOT_SET:
            return {};
          case WorkerComputeType::CR_1X:
            return "CR.1X";
          case WorkerComputeType::CR_4X:
            return "CR.4X";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkerComputeTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
