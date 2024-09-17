/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EkPubKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace EkPubKeyTypeMapper
      {

        static const int rsa_2048_HASH = HashingUtils::HashString("rsa-2048");
        static const int ecc_sec_p384_HASH = HashingUtils::HashString("ecc-sec-p384");


        EkPubKeyType GetEkPubKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == rsa_2048_HASH)
          {
            return EkPubKeyType::rsa_2048;
          }
          else if (hashCode == ecc_sec_p384_HASH)
          {
            return EkPubKeyType::ecc_sec_p384;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EkPubKeyType>(hashCode);
          }

          return EkPubKeyType::NOT_SET;
        }

        Aws::String GetNameForEkPubKeyType(EkPubKeyType enumValue)
        {
          switch(enumValue)
          {
          case EkPubKeyType::NOT_SET:
            return {};
          case EkPubKeyType::rsa_2048:
            return "rsa-2048";
          case EkPubKeyType::ecc_sec_p384:
            return "ecc-sec-p384";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EkPubKeyTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
