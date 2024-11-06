/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/MachineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace MachineTypeMapper
      {

        static const int GENERAL_HASH = HashingUtils::HashString("GENERAL");
        static const int NVME_HASH = HashingUtils::HashString("NVME");


        MachineType GetMachineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERAL_HASH)
          {
            return MachineType::GENERAL;
          }
          else if (hashCode == NVME_HASH)
          {
            return MachineType::NVME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MachineType>(hashCode);
          }

          return MachineType::NOT_SET;
        }

        Aws::String GetNameForMachineType(MachineType enumValue)
        {
          switch(enumValue)
          {
          case MachineType::NOT_SET:
            return {};
          case MachineType::GENERAL:
            return "GENERAL";
          case MachineType::NVME:
            return "NVME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MachineTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
