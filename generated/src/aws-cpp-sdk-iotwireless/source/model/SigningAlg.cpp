/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SigningAlg.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace SigningAlgMapper
      {

        static const int Ed25519_HASH = HashingUtils::HashString("Ed25519");
        static const int P256r1_HASH = HashingUtils::HashString("P256r1");


        SigningAlg GetSigningAlgForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ed25519_HASH)
          {
            return SigningAlg::Ed25519;
          }
          else if (hashCode == P256r1_HASH)
          {
            return SigningAlg::P256r1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SigningAlg>(hashCode);
          }

          return SigningAlg::NOT_SET;
        }

        Aws::String GetNameForSigningAlg(SigningAlg enumValue)
        {
          switch(enumValue)
          {
          case SigningAlg::NOT_SET:
            return {};
          case SigningAlg::Ed25519:
            return "Ed25519";
          case SigningAlg::P256r1:
            return "P256r1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SigningAlgMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
