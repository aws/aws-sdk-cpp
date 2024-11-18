/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PortalType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace PortalTypeMapper
      {

        static const int SITEWISE_PORTAL_V1_HASH = HashingUtils::HashString("SITEWISE_PORTAL_V1");
        static const int SITEWISE_PORTAL_V2_HASH = HashingUtils::HashString("SITEWISE_PORTAL_V2");


        PortalType GetPortalTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SITEWISE_PORTAL_V1_HASH)
          {
            return PortalType::SITEWISE_PORTAL_V1;
          }
          else if (hashCode == SITEWISE_PORTAL_V2_HASH)
          {
            return PortalType::SITEWISE_PORTAL_V2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortalType>(hashCode);
          }

          return PortalType::NOT_SET;
        }

        Aws::String GetNameForPortalType(PortalType enumValue)
        {
          switch(enumValue)
          {
          case PortalType::NOT_SET:
            return {};
          case PortalType::SITEWISE_PORTAL_V1:
            return "SITEWISE_PORTAL_V1";
          case PortalType::SITEWISE_PORTAL_V2:
            return "SITEWISE_PORTAL_V2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PortalTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
