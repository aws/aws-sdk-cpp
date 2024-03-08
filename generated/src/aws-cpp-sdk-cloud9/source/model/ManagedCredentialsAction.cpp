/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/ManagedCredentialsAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Cloud9
  {
    namespace Model
    {
      namespace ManagedCredentialsActionMapper
      {

        static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");


        ManagedCredentialsAction GetManagedCredentialsActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_HASH)
          {
            return ManagedCredentialsAction::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return ManagedCredentialsAction::DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedCredentialsAction>(hashCode);
          }

          return ManagedCredentialsAction::NOT_SET;
        }

        Aws::String GetNameForManagedCredentialsAction(ManagedCredentialsAction enumValue)
        {
          switch(enumValue)
          {
          case ManagedCredentialsAction::NOT_SET:
            return {};
          case ManagedCredentialsAction::ENABLE:
            return "ENABLE";
          case ManagedCredentialsAction::DISABLE:
            return "DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedCredentialsActionMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
