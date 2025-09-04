/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobWorkerComputeType.h>
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
      namespace ProtectedJobWorkerComputeTypeMapper
      {

        static const int CR_1X_HASH = HashingUtils::HashString("CR.1X");
        static const int CR_4X_HASH = HashingUtils::HashString("CR.4X");


        ProtectedJobWorkerComputeType GetProtectedJobWorkerComputeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CR_1X_HASH)
          {
            return ProtectedJobWorkerComputeType::CR_1X;
          }
          else if (hashCode == CR_4X_HASH)
          {
            return ProtectedJobWorkerComputeType::CR_4X;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectedJobWorkerComputeType>(hashCode);
          }

          return ProtectedJobWorkerComputeType::NOT_SET;
        }

        Aws::String GetNameForProtectedJobWorkerComputeType(ProtectedJobWorkerComputeType enumValue)
        {
          switch(enumValue)
          {
          case ProtectedJobWorkerComputeType::NOT_SET:
            return {};
          case ProtectedJobWorkerComputeType::CR_1X:
            return "CR.1X";
          case ProtectedJobWorkerComputeType::CR_4X:
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

      } // namespace ProtectedJobWorkerComputeTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
