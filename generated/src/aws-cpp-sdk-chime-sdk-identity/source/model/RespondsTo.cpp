/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/RespondsTo.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKIdentity
  {
    namespace Model
    {
      namespace RespondsToMapper
      {

        static const int STANDARD_MESSAGES_HASH = HashingUtils::HashString("STANDARD_MESSAGES");


        RespondsTo GetRespondsToForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_MESSAGES_HASH)
          {
            return RespondsTo::STANDARD_MESSAGES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RespondsTo>(hashCode);
          }

          return RespondsTo::NOT_SET;
        }

        Aws::String GetNameForRespondsTo(RespondsTo enumValue)
        {
          switch(enumValue)
          {
          case RespondsTo::NOT_SET:
            return {};
          case RespondsTo::STANDARD_MESSAGES:
            return "STANDARD_MESSAGES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RespondsToMapper
    } // namespace Model
  } // namespace ChimeSDKIdentity
} // namespace Aws
