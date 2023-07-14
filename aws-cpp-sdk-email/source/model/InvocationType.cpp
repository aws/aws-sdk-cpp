/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/InvocationType.h>
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
      namespace InvocationTypeMapper
      {

        static const int Event_HASH = HashingUtils::HashString("Event");
        static const int RequestResponse_HASH = HashingUtils::HashString("RequestResponse");


        InvocationType GetInvocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Event_HASH)
          {
            return InvocationType::Event;
          }
          else if (hashCode == RequestResponse_HASH)
          {
            return InvocationType::RequestResponse;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvocationType>(hashCode);
          }

          return InvocationType::NOT_SET;
        }

        Aws::String GetNameForInvocationType(InvocationType enumValue)
        {
          switch(enumValue)
          {
          case InvocationType::Event:
            return "Event";
          case InvocationType::RequestResponse:
            return "RequestResponse";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvocationTypeMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
