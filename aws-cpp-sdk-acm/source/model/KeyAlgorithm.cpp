/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace KeyAlgorithmMapper
      {

        static const int RSA_2048_HASH = HashingUtils::HashString("RSA_2048");
        static const int RSA_1024_HASH = HashingUtils::HashString("RSA_1024");
        static const int RSA_4096_HASH = HashingUtils::HashString("RSA_4096");
        static const int EC_prime256v1_HASH = HashingUtils::HashString("EC_prime256v1");
        static const int EC_secp384r1_HASH = HashingUtils::HashString("EC_secp384r1");
        static const int EC_secp521r1_HASH = HashingUtils::HashString("EC_secp521r1");


        KeyAlgorithm GetKeyAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_2048_HASH)
          {
            return KeyAlgorithm::RSA_2048;
          }
          else if (hashCode == RSA_1024_HASH)
          {
            return KeyAlgorithm::RSA_1024;
          }
          else if (hashCode == RSA_4096_HASH)
          {
            return KeyAlgorithm::RSA_4096;
          }
          else if (hashCode == EC_prime256v1_HASH)
          {
            return KeyAlgorithm::EC_prime256v1;
          }
          else if (hashCode == EC_secp384r1_HASH)
          {
            return KeyAlgorithm::EC_secp384r1;
          }
          else if (hashCode == EC_secp521r1_HASH)
          {
            return KeyAlgorithm::EC_secp521r1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyAlgorithm>(hashCode);
          }

          return KeyAlgorithm::NOT_SET;
        }

        Aws::String GetNameForKeyAlgorithm(KeyAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case KeyAlgorithm::RSA_2048:
            return "RSA_2048";
          case KeyAlgorithm::RSA_1024:
            return "RSA_1024";
          case KeyAlgorithm::RSA_4096:
            return "RSA_4096";
          case KeyAlgorithm::EC_prime256v1:
            return "EC_prime256v1";
          case KeyAlgorithm::EC_secp384r1:
            return "EC_secp384r1";
          case KeyAlgorithm::EC_secp521r1:
            return "EC_secp521r1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyAlgorithmMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
