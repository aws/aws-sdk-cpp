/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeyAgreementAlgorithmSpec.h>
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
      namespace KeyAgreementAlgorithmSpecMapper
      {

        static const int ECDH_HASH = HashingUtils::HashString("ECDH");


        KeyAgreementAlgorithmSpec GetKeyAgreementAlgorithmSpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECDH_HASH)
          {
            return KeyAgreementAlgorithmSpec::ECDH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyAgreementAlgorithmSpec>(hashCode);
          }

          return KeyAgreementAlgorithmSpec::NOT_SET;
        }

        Aws::String GetNameForKeyAgreementAlgorithmSpec(KeyAgreementAlgorithmSpec enumValue)
        {
          switch(enumValue)
          {
          case KeyAgreementAlgorithmSpec::NOT_SET:
            return {};
          case KeyAgreementAlgorithmSpec::ECDH:
            return "ECDH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyAgreementAlgorithmSpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
