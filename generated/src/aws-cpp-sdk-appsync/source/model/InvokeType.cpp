/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/InvokeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace InvokeTypeMapper
      {

        static const int REQUEST_RESPONSE_HASH = HashingUtils::HashString("REQUEST_RESPONSE");
        static const int EVENT_HASH = HashingUtils::HashString("EVENT");


        InvokeType GetInvokeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUEST_RESPONSE_HASH)
          {
            return InvokeType::REQUEST_RESPONSE;
          }
          else if (hashCode == EVENT_HASH)
          {
            return InvokeType::EVENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvokeType>(hashCode);
          }

          return InvokeType::NOT_SET;
        }

        Aws::String GetNameForInvokeType(InvokeType enumValue)
        {
          switch(enumValue)
          {
          case InvokeType::NOT_SET:
            return {};
          case InvokeType::REQUEST_RESPONSE:
            return "REQUEST_RESPONSE";
          case InvokeType::EVENT:
            return "EVENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvokeTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
