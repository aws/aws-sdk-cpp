/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/CustomKeyStoreType.h>
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
      namespace CustomKeyStoreTypeMapper
      {

        static const int AWS_CLOUDHSM_HASH = HashingUtils::HashString("AWS_CLOUDHSM");
        static const int EXTERNAL_KEY_STORE_HASH = HashingUtils::HashString("EXTERNAL_KEY_STORE");


        CustomKeyStoreType GetCustomKeyStoreTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_CLOUDHSM_HASH)
          {
            return CustomKeyStoreType::AWS_CLOUDHSM;
          }
          else if (hashCode == EXTERNAL_KEY_STORE_HASH)
          {
            return CustomKeyStoreType::EXTERNAL_KEY_STORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomKeyStoreType>(hashCode);
          }

          return CustomKeyStoreType::NOT_SET;
        }

        Aws::String GetNameForCustomKeyStoreType(CustomKeyStoreType enumValue)
        {
          switch(enumValue)
          {
          case CustomKeyStoreType::AWS_CLOUDHSM:
            return "AWS_CLOUDHSM";
          case CustomKeyStoreType::EXTERNAL_KEY_STORE:
            return "EXTERNAL_KEY_STORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomKeyStoreTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
