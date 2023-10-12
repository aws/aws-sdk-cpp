/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/WorkerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace WorkerTypeMapper
      {

        static constexpr uint32_t Standard_HASH = ConstExprHashingUtils::HashString("Standard");
        static constexpr uint32_t G_1X_HASH = ConstExprHashingUtils::HashString("G.1X");
        static constexpr uint32_t G_2X_HASH = ConstExprHashingUtils::HashString("G.2X");
        static constexpr uint32_t G_025X_HASH = ConstExprHashingUtils::HashString("G.025X");
        static constexpr uint32_t G_4X_HASH = ConstExprHashingUtils::HashString("G.4X");
        static constexpr uint32_t G_8X_HASH = ConstExprHashingUtils::HashString("G.8X");
        static constexpr uint32_t Z_2X_HASH = ConstExprHashingUtils::HashString("Z.2X");


        WorkerType GetWorkerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return WorkerType::Standard;
          }
          else if (hashCode == G_1X_HASH)
          {
            return WorkerType::G_1X;
          }
          else if (hashCode == G_2X_HASH)
          {
            return WorkerType::G_2X;
          }
          else if (hashCode == G_025X_HASH)
          {
            return WorkerType::G_025X;
          }
          else if (hashCode == G_4X_HASH)
          {
            return WorkerType::G_4X;
          }
          else if (hashCode == G_8X_HASH)
          {
            return WorkerType::G_8X;
          }
          else if (hashCode == Z_2X_HASH)
          {
            return WorkerType::Z_2X;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkerType>(hashCode);
          }

          return WorkerType::NOT_SET;
        }

        Aws::String GetNameForWorkerType(WorkerType enumValue)
        {
          switch(enumValue)
          {
          case WorkerType::NOT_SET:
            return {};
          case WorkerType::Standard:
            return "Standard";
          case WorkerType::G_1X:
            return "G.1X";
          case WorkerType::G_2X:
            return "G.2X";
          case WorkerType::G_025X:
            return "G.025X";
          case WorkerType::G_4X:
            return "G.4X";
          case WorkerType::G_8X:
            return "G.8X";
          case WorkerType::Z_2X:
            return "Z.2X";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkerTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
