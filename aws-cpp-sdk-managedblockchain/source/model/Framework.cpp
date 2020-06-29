/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/Framework.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace FrameworkMapper
      {

        static const int HYPERLEDGER_FABRIC_HASH = HashingUtils::HashString("HYPERLEDGER_FABRIC");


        Framework GetFrameworkForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HYPERLEDGER_FABRIC_HASH)
          {
            return Framework::HYPERLEDGER_FABRIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Framework>(hashCode);
          }

          return Framework::NOT_SET;
        }

        Aws::String GetNameForFramework(Framework enumValue)
        {
          switch(enumValue)
          {
          case Framework::HYPERLEDGER_FABRIC:
            return "HYPERLEDGER_FABRIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrameworkMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
