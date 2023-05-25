/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/SigningAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace SigningAlgorithmMapper
      {

        static const int SHA256WITHECDSA_HASH = HashingUtils::HashString("SHA256WITHECDSA");
        static const int SHA384WITHECDSA_HASH = HashingUtils::HashString("SHA384WITHECDSA");
        static const int SHA512WITHECDSA_HASH = HashingUtils::HashString("SHA512WITHECDSA");
        static const int SHA256WITHRSA_HASH = HashingUtils::HashString("SHA256WITHRSA");
        static const int SHA384WITHRSA_HASH = HashingUtils::HashString("SHA384WITHRSA");
        static const int SHA512WITHRSA_HASH = HashingUtils::HashString("SHA512WITHRSA");


        SigningAlgorithm GetSigningAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA256WITHECDSA_HASH)
          {
            return SigningAlgorithm::SHA256WITHECDSA;
          }
          else if (hashCode == SHA384WITHECDSA_HASH)
          {
            return SigningAlgorithm::SHA384WITHECDSA;
          }
          else if (hashCode == SHA512WITHECDSA_HASH)
          {
            return SigningAlgorithm::SHA512WITHECDSA;
          }
          else if (hashCode == SHA256WITHRSA_HASH)
          {
            return SigningAlgorithm::SHA256WITHRSA;
          }
          else if (hashCode == SHA384WITHRSA_HASH)
          {
            return SigningAlgorithm::SHA384WITHRSA;
          }
          else if (hashCode == SHA512WITHRSA_HASH)
          {
            return SigningAlgorithm::SHA512WITHRSA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SigningAlgorithm>(hashCode);
          }

          return SigningAlgorithm::NOT_SET;
        }

        Aws::String GetNameForSigningAlgorithm(SigningAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case SigningAlgorithm::SHA256WITHECDSA:
            return "SHA256WITHECDSA";
          case SigningAlgorithm::SHA384WITHECDSA:
            return "SHA384WITHECDSA";
          case SigningAlgorithm::SHA512WITHECDSA:
            return "SHA512WITHECDSA";
          case SigningAlgorithm::SHA256WITHRSA:
            return "SHA256WITHRSA";
          case SigningAlgorithm::SHA384WITHRSA:
            return "SHA384WITHRSA";
          case SigningAlgorithm::SHA512WITHRSA:
            return "SHA512WITHRSA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SigningAlgorithmMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
