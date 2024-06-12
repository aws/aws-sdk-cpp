/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedRuntime.h>
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
      namespace M2ManagedRuntimeMapper
      {

        static const int MicroFocus_HASH = HashingUtils::HashString("MicroFocus");


        M2ManagedRuntime GetM2ManagedRuntimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MicroFocus_HASH)
          {
            return M2ManagedRuntime::MicroFocus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2ManagedRuntime>(hashCode);
          }

          return M2ManagedRuntime::NOT_SET;
        }

        Aws::String GetNameForM2ManagedRuntime(M2ManagedRuntime enumValue)
        {
          switch(enumValue)
          {
          case M2ManagedRuntime::NOT_SET:
            return {};
          case M2ManagedRuntime::MicroFocus:
            return "MicroFocus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2ManagedRuntimeMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
