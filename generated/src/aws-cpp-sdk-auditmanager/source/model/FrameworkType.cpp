/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/FrameworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace FrameworkTypeMapper
      {

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int Custom_HASH = HashingUtils::HashString("Custom");


        FrameworkType GetFrameworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return FrameworkType::Standard;
          }
          else if (hashCode == Custom_HASH)
          {
            return FrameworkType::Custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FrameworkType>(hashCode);
          }

          return FrameworkType::NOT_SET;
        }

        Aws::String GetNameForFrameworkType(FrameworkType enumValue)
        {
          switch(enumValue)
          {
          case FrameworkType::NOT_SET:
            return {};
          case FrameworkType::Standard:
            return "Standard";
          case FrameworkType::Custom:
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

      } // namespace FrameworkTypeMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
