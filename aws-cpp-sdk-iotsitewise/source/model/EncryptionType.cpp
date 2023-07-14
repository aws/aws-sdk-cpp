/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/EncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace EncryptionTypeMapper
      {

        static const int SITEWISE_DEFAULT_ENCRYPTION_HASH = HashingUtils::HashString("SITEWISE_DEFAULT_ENCRYPTION");
        static const int KMS_BASED_ENCRYPTION_HASH = HashingUtils::HashString("KMS_BASED_ENCRYPTION");


        EncryptionType GetEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SITEWISE_DEFAULT_ENCRYPTION_HASH)
          {
            return EncryptionType::SITEWISE_DEFAULT_ENCRYPTION;
          }
          else if (hashCode == KMS_BASED_ENCRYPTION_HASH)
          {
            return EncryptionType::KMS_BASED_ENCRYPTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionType>(hashCode);
          }

          return EncryptionType::NOT_SET;
        }

        Aws::String GetNameForEncryptionType(EncryptionType enumValue)
        {
          switch(enumValue)
          {
          case EncryptionType::SITEWISE_DEFAULT_ENCRYPTION:
            return "SITEWISE_DEFAULT_ENCRYPTION";
          case EncryptionType::KMS_BASED_ENCRYPTION:
            return "KMS_BASED_ENCRYPTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
