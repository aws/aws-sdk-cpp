/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/ClientVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudHSM
  {
    namespace Model
    {
      namespace ClientVersionMapper
      {

        static const int _5_1_HASH = HashingUtils::HashString("5.1");
        static const int _5_3_HASH = HashingUtils::HashString("5.3");


        ClientVersion GetClientVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == _5_1_HASH)
          {
            return ClientVersion::_5_1;
          }
          else if (hashCode == _5_3_HASH)
          {
            return ClientVersion::_5_3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientVersion>(hashCode);
          }

          return ClientVersion::NOT_SET;
        }

        Aws::String GetNameForClientVersion(ClientVersion enumValue)
        {
          switch(enumValue)
          {
          case ClientVersion::_5_1:
            return "5.1";
          case ClientVersion::_5_3:
            return "5.3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientVersionMapper
    } // namespace Model
  } // namespace CloudHSM
} // namespace Aws
