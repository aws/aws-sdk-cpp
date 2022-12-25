/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/OSVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace OSVersionMapper
      {

        static const int SERVER_2012_HASH = HashingUtils::HashString("SERVER_2012");
        static const int SERVER_2019_HASH = HashingUtils::HashString("SERVER_2019");


        OSVersion GetOSVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVER_2012_HASH)
          {
            return OSVersion::SERVER_2012;
          }
          else if (hashCode == SERVER_2019_HASH)
          {
            return OSVersion::SERVER_2019;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OSVersion>(hashCode);
          }

          return OSVersion::NOT_SET;
        }

        Aws::String GetNameForOSVersion(OSVersion enumValue)
        {
          switch(enumValue)
          {
          case OSVersion::SERVER_2012:
            return "SERVER_2012";
          case OSVersion::SERVER_2019:
            return "SERVER_2019";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OSVersionMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
