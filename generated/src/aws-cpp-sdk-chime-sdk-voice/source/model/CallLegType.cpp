/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CallLegType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace CallLegTypeMapper
      {

        static const int Caller_HASH = HashingUtils::HashString("Caller");
        static const int Callee_HASH = HashingUtils::HashString("Callee");


        CallLegType GetCallLegTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Caller_HASH)
          {
            return CallLegType::Caller;
          }
          else if (hashCode == Callee_HASH)
          {
            return CallLegType::Callee;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallLegType>(hashCode);
          }

          return CallLegType::NOT_SET;
        }

        Aws::String GetNameForCallLegType(CallLegType enumValue)
        {
          switch(enumValue)
          {
          case CallLegType::NOT_SET:
            return {};
          case CallLegType::Caller:
            return "Caller";
          case CallLegType::Callee:
            return "Callee";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallLegTypeMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
