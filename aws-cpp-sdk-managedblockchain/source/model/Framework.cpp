/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
