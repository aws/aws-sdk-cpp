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

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int G_1X_HASH = HashingUtils::HashString("G.1X");
        static const int G_2X_HASH = HashingUtils::HashString("G.2X");
        static const int G_025X_HASH = HashingUtils::HashString("G.025X");
        static const int G_4X_HASH = HashingUtils::HashString("G.4X");
        static const int G_8X_HASH = HashingUtils::HashString("G.8X");
        static const int Z_2X_HASH = HashingUtils::HashString("Z.2X");


        WorkerType GetWorkerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
