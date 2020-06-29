/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/EncryptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace EncryptionStatusMapper
      {

        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        EncryptionStatus GetEncryptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATING_HASH)
          {
            return EncryptionStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return EncryptionStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionStatus>(hashCode);
          }

          return EncryptionStatus::NOT_SET;
        }

        Aws::String GetNameForEncryptionStatus(EncryptionStatus enumValue)
        {
          switch(enumValue)
          {
          case EncryptionStatus::UPDATING:
            return "UPDATING";
          case EncryptionStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionStatusMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
