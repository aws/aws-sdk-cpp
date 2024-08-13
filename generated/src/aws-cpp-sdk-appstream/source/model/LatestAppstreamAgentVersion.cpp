/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/LatestAppstreamAgentVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace LatestAppstreamAgentVersionMapper
      {

        static const int TRUE_HASH = HashingUtils::HashString("TRUE");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");


        LatestAppstreamAgentVersion GetLatestAppstreamAgentVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return LatestAppstreamAgentVersion::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return LatestAppstreamAgentVersion::FALSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LatestAppstreamAgentVersion>(hashCode);
          }

          return LatestAppstreamAgentVersion::NOT_SET;
        }

        Aws::String GetNameForLatestAppstreamAgentVersion(LatestAppstreamAgentVersion enumValue)
        {
          switch(enumValue)
          {
          case LatestAppstreamAgentVersion::NOT_SET:
            return {};
          case LatestAppstreamAgentVersion::TRUE:
            return "TRUE";
          case LatestAppstreamAgentVersion::FALSE:
            return "FALSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LatestAppstreamAgentVersionMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
