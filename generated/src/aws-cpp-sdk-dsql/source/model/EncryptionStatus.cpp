/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/EncryptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DSQL
  {
    namespace Model
    {
      namespace EncryptionStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int KMS_KEY_INACCESSIBLE_HASH = HashingUtils::HashString("KMS_KEY_INACCESSIBLE");
        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");


        EncryptionStatus GetEncryptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EncryptionStatus::ENABLED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EncryptionStatus::UPDATING;
          }
          else if (hashCode == KMS_KEY_INACCESSIBLE_HASH)
          {
            return EncryptionStatus::KMS_KEY_INACCESSIBLE;
          }
          else if (hashCode == ENABLING_HASH)
          {
            return EncryptionStatus::ENABLING;
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
          case EncryptionStatus::NOT_SET:
            return {};
          case EncryptionStatus::ENABLED:
            return "ENABLED";
          case EncryptionStatus::UPDATING:
            return "UPDATING";
          case EncryptionStatus::KMS_KEY_INACCESSIBLE:
            return "KMS_KEY_INACCESSIBLE";
          case EncryptionStatus::ENABLING:
            return "ENABLING";
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
  } // namespace DSQL
} // namespace Aws
