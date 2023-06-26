/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/EncryptionKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace EncryptionKeyTypeMapper
      {

        static const int KMS_HASH = HashingUtils::HashString("KMS");


        EncryptionKeyType GetEncryptionKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KMS_HASH)
          {
            return EncryptionKeyType::KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionKeyType>(hashCode);
          }

          return EncryptionKeyType::NOT_SET;
        }

        Aws::String GetNameForEncryptionKeyType(EncryptionKeyType enumValue)
        {
          switch(enumValue)
          {
          case EncryptionKeyType::KMS:
            return "KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionKeyTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
