/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace M2ManagedActionTypeMapper
      {

        static const int Configure_HASH = HashingUtils::HashString("Configure");
        static const int Deconfigure_HASH = HashingUtils::HashString("Deconfigure");


        M2ManagedActionType GetM2ManagedActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Configure_HASH)
          {
            return M2ManagedActionType::Configure;
          }
          else if (hashCode == Deconfigure_HASH)
          {
            return M2ManagedActionType::Deconfigure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2ManagedActionType>(hashCode);
          }

          return M2ManagedActionType::NOT_SET;
        }

        Aws::String GetNameForM2ManagedActionType(M2ManagedActionType enumValue)
        {
          switch(enumValue)
          {
          case M2ManagedActionType::NOT_SET:
            return {};
          case M2ManagedActionType::Configure:
            return "Configure";
          case M2ManagedActionType::Deconfigure:
            return "Deconfigure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2ManagedActionTypeMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
