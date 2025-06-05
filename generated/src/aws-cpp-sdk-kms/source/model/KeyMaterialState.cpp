/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeyMaterialState.h>
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
      namespace KeyMaterialStateMapper
      {

        static const int NON_CURRENT_HASH = HashingUtils::HashString("NON_CURRENT");
        static const int CURRENT_HASH = HashingUtils::HashString("CURRENT");
        static const int PENDING_ROTATION_HASH = HashingUtils::HashString("PENDING_ROTATION");


        KeyMaterialState GetKeyMaterialStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NON_CURRENT_HASH)
          {
            return KeyMaterialState::NON_CURRENT;
          }
          else if (hashCode == CURRENT_HASH)
          {
            return KeyMaterialState::CURRENT;
          }
          else if (hashCode == PENDING_ROTATION_HASH)
          {
            return KeyMaterialState::PENDING_ROTATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyMaterialState>(hashCode);
          }

          return KeyMaterialState::NOT_SET;
        }

        Aws::String GetNameForKeyMaterialState(KeyMaterialState enumValue)
        {
          switch(enumValue)
          {
          case KeyMaterialState::NOT_SET:
            return {};
          case KeyMaterialState::NON_CURRENT:
            return "NON_CURRENT";
          case KeyMaterialState::CURRENT:
            return "CURRENT";
          case KeyMaterialState::PENDING_ROTATION:
            return "PENDING_ROTATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyMaterialStateMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
