/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/MacAlgorithmSpec.h>
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
      namespace MacAlgorithmSpecMapper
      {

        static const int HMAC_SHA_224_HASH = HashingUtils::HashString("HMAC_SHA_224");
        static const int HMAC_SHA_256_HASH = HashingUtils::HashString("HMAC_SHA_256");
        static const int HMAC_SHA_384_HASH = HashingUtils::HashString("HMAC_SHA_384");
        static const int HMAC_SHA_512_HASH = HashingUtils::HashString("HMAC_SHA_512");


        MacAlgorithmSpec GetMacAlgorithmSpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HMAC_SHA_224_HASH)
          {
            return MacAlgorithmSpec::HMAC_SHA_224;
          }
          else if (hashCode == HMAC_SHA_256_HASH)
          {
            return MacAlgorithmSpec::HMAC_SHA_256;
          }
          else if (hashCode == HMAC_SHA_384_HASH)
          {
            return MacAlgorithmSpec::HMAC_SHA_384;
          }
          else if (hashCode == HMAC_SHA_512_HASH)
          {
            return MacAlgorithmSpec::HMAC_SHA_512;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MacAlgorithmSpec>(hashCode);
          }

          return MacAlgorithmSpec::NOT_SET;
        }

        Aws::String GetNameForMacAlgorithmSpec(MacAlgorithmSpec enumValue)
        {
          switch(enumValue)
          {
          case MacAlgorithmSpec::NOT_SET:
            return {};
          case MacAlgorithmSpec::HMAC_SHA_224:
            return "HMAC_SHA_224";
          case MacAlgorithmSpec::HMAC_SHA_256:
            return "HMAC_SHA_256";
          case MacAlgorithmSpec::HMAC_SHA_384:
            return "HMAC_SHA_384";
          case MacAlgorithmSpec::HMAC_SHA_512:
            return "HMAC_SHA_512";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MacAlgorithmSpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
