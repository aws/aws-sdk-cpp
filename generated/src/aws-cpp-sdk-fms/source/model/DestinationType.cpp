/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace DestinationTypeMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int IPV6_HASH = HashingUtils::HashString("IPV6");
        static const int PREFIX_LIST_HASH = HashingUtils::HashString("PREFIX_LIST");


        DestinationType GetDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return DestinationType::IPV4;
          }
          else if (hashCode == IPV6_HASH)
          {
            return DestinationType::IPV6;
          }
          else if (hashCode == PREFIX_LIST_HASH)
          {
            return DestinationType::PREFIX_LIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationType>(hashCode);
          }

          return DestinationType::NOT_SET;
        }

        Aws::String GetNameForDestinationType(DestinationType enumValue)
        {
          switch(enumValue)
          {
          case DestinationType::NOT_SET:
            return {};
          case DestinationType::IPV4:
            return "IPV4";
          case DestinationType::IPV6:
            return "IPV6";
          case DestinationType::PREFIX_LIST:
            return "PREFIX_LIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationTypeMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
