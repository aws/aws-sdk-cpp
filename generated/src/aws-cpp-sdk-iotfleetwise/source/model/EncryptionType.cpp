/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/EncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace EncryptionTypeMapper
      {

        static const int KMS_BASED_ENCRYPTION_HASH = HashingUtils::HashString("KMS_BASED_ENCRYPTION");
        static const int FLEETWISE_DEFAULT_ENCRYPTION_HASH = HashingUtils::HashString("FLEETWISE_DEFAULT_ENCRYPTION");


        EncryptionType GetEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KMS_BASED_ENCRYPTION_HASH)
          {
            return EncryptionType::KMS_BASED_ENCRYPTION;
          }
          else if (hashCode == FLEETWISE_DEFAULT_ENCRYPTION_HASH)
          {
            return EncryptionType::FLEETWISE_DEFAULT_ENCRYPTION;
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
          case EncryptionType::NOT_SET:
            return {};
          case EncryptionType::KMS_BASED_ENCRYPTION:
            return "KMS_BASED_ENCRYPTION";
          case EncryptionType::FLEETWISE_DEFAULT_ENCRYPTION:
            return "FLEETWISE_DEFAULT_ENCRYPTION";
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
  } // namespace IoTFleetWise
} // namespace Aws
