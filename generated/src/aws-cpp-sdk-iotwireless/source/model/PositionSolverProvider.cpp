/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PositionSolverProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace PositionSolverProviderMapper
      {

        static const int Semtech_HASH = HashingUtils::HashString("Semtech");


        PositionSolverProvider GetPositionSolverProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Semtech_HASH)
          {
            return PositionSolverProvider::Semtech;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PositionSolverProvider>(hashCode);
          }

          return PositionSolverProvider::NOT_SET;
        }

        Aws::String GetNameForPositionSolverProvider(PositionSolverProvider enumValue)
        {
          switch(enumValue)
          {
          case PositionSolverProvider::NOT_SET:
            return {};
          case PositionSolverProvider::Semtech:
            return "Semtech";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PositionSolverProviderMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
