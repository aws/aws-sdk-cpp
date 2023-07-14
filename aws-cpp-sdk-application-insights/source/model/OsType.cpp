/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/OsType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace OsTypeMapper
      {

        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");


        OsType GetOsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return OsType::WINDOWS;
          }
          else if (hashCode == LINUX_HASH)
          {
            return OsType::LINUX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OsType>(hashCode);
          }

          return OsType::NOT_SET;
        }

        Aws::String GetNameForOsType(OsType enumValue)
        {
          switch(enumValue)
          {
          case OsType::WINDOWS:
            return "WINDOWS";
          case OsType::LINUX:
            return "LINUX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OsTypeMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
