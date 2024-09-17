/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2NonManagedRuntime.h>
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
      namespace M2NonManagedRuntimeMapper
      {

        static const int BluAge_HASH = HashingUtils::HashString("BluAge");


        M2NonManagedRuntime GetM2NonManagedRuntimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BluAge_HASH)
          {
            return M2NonManagedRuntime::BluAge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2NonManagedRuntime>(hashCode);
          }

          return M2NonManagedRuntime::NOT_SET;
        }

        Aws::String GetNameForM2NonManagedRuntime(M2NonManagedRuntime enumValue)
        {
          switch(enumValue)
          {
          case M2NonManagedRuntime::NOT_SET:
            return {};
          case M2NonManagedRuntime::BluAge:
            return "BluAge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2NonManagedRuntimeMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
