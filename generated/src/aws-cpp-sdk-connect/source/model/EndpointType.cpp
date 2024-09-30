/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace EndpointTypeMapper
      {

        static const int TELEPHONE_NUMBER_HASH = HashingUtils::HashString("TELEPHONE_NUMBER");
        static const int VOIP_HASH = HashingUtils::HashString("VOIP");
        static const int CONTACT_FLOW_HASH = HashingUtils::HashString("CONTACT_FLOW");
        static const int CONNECT_PHONENUMBER_ARN_HASH = HashingUtils::HashString("CONNECT_PHONENUMBER_ARN");


        EndpointType GetEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TELEPHONE_NUMBER_HASH)
          {
            return EndpointType::TELEPHONE_NUMBER;
          }
          else if (hashCode == VOIP_HASH)
          {
            return EndpointType::VOIP;
          }
          else if (hashCode == CONTACT_FLOW_HASH)
          {
            return EndpointType::CONTACT_FLOW;
          }
          else if (hashCode == CONNECT_PHONENUMBER_ARN_HASH)
          {
            return EndpointType::CONNECT_PHONENUMBER_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointType>(hashCode);
          }

          return EndpointType::NOT_SET;
        }

        Aws::String GetNameForEndpointType(EndpointType enumValue)
        {
          switch(enumValue)
          {
          case EndpointType::NOT_SET:
            return {};
          case EndpointType::TELEPHONE_NUMBER:
            return "TELEPHONE_NUMBER";
          case EndpointType::VOIP:
            return "VOIP";
          case EndpointType::CONTACT_FLOW:
            return "CONTACT_FLOW";
          case EndpointType::CONNECT_PHONENUMBER_ARN:
            return "CONNECT_PHONENUMBER_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
