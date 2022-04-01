/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/LDAPSType.h>
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
      namespace LDAPSTypeMapper
      {

        static const int Client_HASH = HashingUtils::HashString("Client");


        LDAPSType GetLDAPSTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Client_HASH)
          {
            return LDAPSType::Client;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LDAPSType>(hashCode);
          }

          return LDAPSType::NOT_SET;
        }

        Aws::String GetNameForLDAPSType(LDAPSType enumValue)
        {
          switch(enumValue)
          {
          case LDAPSType::Client:
            return "Client";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LDAPSTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
