/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ContinuousIntegrationScanEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ContinuousIntegrationScanEventMapper
      {

        static const int PULL_REQUEST_HASH = HashingUtils::HashString("PULL_REQUEST");
        static const int PUSH_HASH = HashingUtils::HashString("PUSH");


        ContinuousIntegrationScanEvent GetContinuousIntegrationScanEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PULL_REQUEST_HASH)
          {
            return ContinuousIntegrationScanEvent::PULL_REQUEST;
          }
          else if (hashCode == PUSH_HASH)
          {
            return ContinuousIntegrationScanEvent::PUSH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContinuousIntegrationScanEvent>(hashCode);
          }

          return ContinuousIntegrationScanEvent::NOT_SET;
        }

        Aws::String GetNameForContinuousIntegrationScanEvent(ContinuousIntegrationScanEvent enumValue)
        {
          switch(enumValue)
          {
          case ContinuousIntegrationScanEvent::NOT_SET:
            return {};
          case ContinuousIntegrationScanEvent::PULL_REQUEST:
            return "PULL_REQUEST";
          case ContinuousIntegrationScanEvent::PUSH:
            return "PUSH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContinuousIntegrationScanEventMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
