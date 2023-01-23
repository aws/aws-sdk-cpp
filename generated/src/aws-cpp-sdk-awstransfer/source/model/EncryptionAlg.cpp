/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/EncryptionAlg.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace EncryptionAlgMapper
      {

        static const int AES128_CBC_HASH = HashingUtils::HashString("AES128_CBC");
        static const int AES192_CBC_HASH = HashingUtils::HashString("AES192_CBC");
        static const int AES256_CBC_HASH = HashingUtils::HashString("AES256_CBC");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        EncryptionAlg GetEncryptionAlgForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES128_CBC_HASH)
          {
            return EncryptionAlg::AES128_CBC;
          }
          else if (hashCode == AES192_CBC_HASH)
          {
            return EncryptionAlg::AES192_CBC;
          }
          else if (hashCode == AES256_CBC_HASH)
          {
            return EncryptionAlg::AES256_CBC;
          }
          else if (hashCode == NONE_HASH)
          {
            return EncryptionAlg::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionAlg>(hashCode);
          }

          return EncryptionAlg::NOT_SET;
        }

        Aws::String GetNameForEncryptionAlg(EncryptionAlg enumValue)
        {
          switch(enumValue)
          {
          case EncryptionAlg::AES128_CBC:
            return "AES128_CBC";
          case EncryptionAlg::AES192_CBC:
            return "AES192_CBC";
          case EncryptionAlg::AES256_CBC:
            return "AES256_CBC";
          case EncryptionAlg::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionAlgMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
