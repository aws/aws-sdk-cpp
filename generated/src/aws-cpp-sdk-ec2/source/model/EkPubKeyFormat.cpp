/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EkPubKeyFormat.h>
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
      namespace EkPubKeyFormatMapper
      {

        static const int der_HASH = HashingUtils::HashString("der");
        static const int tpmt_HASH = HashingUtils::HashString("tpmt");


        EkPubKeyFormat GetEkPubKeyFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == der_HASH)
          {
            return EkPubKeyFormat::der;
          }
          else if (hashCode == tpmt_HASH)
          {
            return EkPubKeyFormat::tpmt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EkPubKeyFormat>(hashCode);
          }

          return EkPubKeyFormat::NOT_SET;
        }

        Aws::String GetNameForEkPubKeyFormat(EkPubKeyFormat enumValue)
        {
          switch(enumValue)
          {
          case EkPubKeyFormat::NOT_SET:
            return {};
          case EkPubKeyFormat::der:
            return "der";
          case EkPubKeyFormat::tpmt:
            return "tpmt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EkPubKeyFormatMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
