/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/model/ReceiptFilterPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace ReceiptFilterPolicyMapper
      {

        static const int Block_HASH = HashingUtils::HashString("Block");
        static const int Allow_HASH = HashingUtils::HashString("Allow");


        ReceiptFilterPolicy GetReceiptFilterPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Block_HASH)
          {
            return ReceiptFilterPolicy::Block;
          }
          else if (hashCode == Allow_HASH)
          {
            return ReceiptFilterPolicy::Allow;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReceiptFilterPolicy>(hashCode);
          }

          return ReceiptFilterPolicy::NOT_SET;
        }

        Aws::String GetNameForReceiptFilterPolicy(ReceiptFilterPolicy enumValue)
        {
          switch(enumValue)
          {
          case ReceiptFilterPolicy::Block:
            return "Block";
          case ReceiptFilterPolicy::Allow:
            return "Allow";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReceiptFilterPolicyMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
