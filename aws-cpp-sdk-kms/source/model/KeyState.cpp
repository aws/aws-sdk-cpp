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
#include <aws/kms/model/KeyState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace KeyStateMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int PendingDeletion_HASH = HashingUtils::HashString("PendingDeletion");
        static const int PendingImport_HASH = HashingUtils::HashString("PendingImport");


        KeyState GetKeyStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return KeyState::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return KeyState::Disabled;
          }
          else if (hashCode == PendingDeletion_HASH)
          {
            return KeyState::PendingDeletion;
          }
          else if (hashCode == PendingImport_HASH)
          {
            return KeyState::PendingImport;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyState>(hashCode);
          }

          return KeyState::NOT_SET;
        }

        Aws::String GetNameForKeyState(KeyState enumValue)
        {
          switch(enumValue)
          {
          case KeyState::Enabled:
            return "Enabled";
          case KeyState::Disabled:
            return "Disabled";
          case KeyState::PendingDeletion:
            return "PendingDeletion";
          case KeyState::PendingImport:
            return "PendingImport";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace KeyStateMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
