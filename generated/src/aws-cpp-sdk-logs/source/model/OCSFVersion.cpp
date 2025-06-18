/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OCSFVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace OCSFVersionMapper
      {

        static const int V1_1_HASH = HashingUtils::HashString("V1.1");


        OCSFVersion GetOCSFVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_1_HASH)
          {
            return OCSFVersion::V1_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OCSFVersion>(hashCode);
          }

          return OCSFVersion::NOT_SET;
        }

        Aws::String GetNameForOCSFVersion(OCSFVersion enumValue)
        {
          switch(enumValue)
          {
          case OCSFVersion::NOT_SET:
            return {};
          case OCSFVersion::V1_1:
            return "V1.1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OCSFVersionMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
