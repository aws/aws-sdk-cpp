/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/InvocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace InvocationTypeMapper
      {

        static constexpr uint32_t Event_HASH = ConstExprHashingUtils::HashString("Event");
        static constexpr uint32_t RequestResponse_HASH = ConstExprHashingUtils::HashString("RequestResponse");
        static constexpr uint32_t DryRun_HASH = ConstExprHashingUtils::HashString("DryRun");


        InvocationType GetInvocationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Event_HASH)
          {
            return InvocationType::Event;
          }
          else if (hashCode == RequestResponse_HASH)
          {
            return InvocationType::RequestResponse;
          }
          else if (hashCode == DryRun_HASH)
          {
            return InvocationType::DryRun;
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
          case InvocationType::NOT_SET:
            return {};
          case InvocationType::Event:
            return "Event";
          case InvocationType::RequestResponse:
            return "RequestResponse";
          case InvocationType::DryRun:
            return "DryRun";
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
  } // namespace Lambda
} // namespace Aws
