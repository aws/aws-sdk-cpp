/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldNamespace.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace FieldNamespaceMapper
      {

        static constexpr uint32_t System_HASH = ConstExprHashingUtils::HashString("System");
        static constexpr uint32_t Custom_HASH = ConstExprHashingUtils::HashString("Custom");


        FieldNamespace GetFieldNamespaceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == System_HASH)
          {
            return FieldNamespace::System;
          }
          else if (hashCode == Custom_HASH)
          {
            return FieldNamespace::Custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldNamespace>(hashCode);
          }

          return FieldNamespace::NOT_SET;
        }

        Aws::String GetNameForFieldNamespace(FieldNamespace enumValue)
        {
          switch(enumValue)
          {
          case FieldNamespace::NOT_SET:
            return {};
          case FieldNamespace::System:
            return "System";
          case FieldNamespace::Custom:
            return "Custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldNamespaceMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
