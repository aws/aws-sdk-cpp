/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/TracingVendor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace TracingVendorMapper
      {

        static const int AWSXRAY_HASH = HashingUtils::HashString("AWSXRAY");


        TracingVendor GetTracingVendorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSXRAY_HASH)
          {
            return TracingVendor::AWSXRAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TracingVendor>(hashCode);
          }

          return TracingVendor::NOT_SET;
        }

        Aws::String GetNameForTracingVendor(TracingVendor enumValue)
        {
          switch(enumValue)
          {
          case TracingVendor::NOT_SET:
            return {};
          case TracingVendor::AWSXRAY:
            return "AWSXRAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TracingVendorMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
