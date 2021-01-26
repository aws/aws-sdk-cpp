/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/CustomerMasterKeySpec.h>
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
      namespace CustomerMasterKeySpecMapper
      {

        static const int RSA_2048_HASH = HashingUtils::HashString("RSA_2048");
        static const int RSA_3072_HASH = HashingUtils::HashString("RSA_3072");
        static const int RSA_4096_HASH = HashingUtils::HashString("RSA_4096");
        static const int ECC_NIST_P256_HASH = HashingUtils::HashString("ECC_NIST_P256");
        static const int ECC_NIST_P384_HASH = HashingUtils::HashString("ECC_NIST_P384");
        static const int ECC_NIST_P521_HASH = HashingUtils::HashString("ECC_NIST_P521");
        static const int ECC_SECG_P256K1_HASH = HashingUtils::HashString("ECC_SECG_P256K1");
        static const int SYMMETRIC_DEFAULT_HASH = HashingUtils::HashString("SYMMETRIC_DEFAULT");


        CustomerMasterKeySpec GetCustomerMasterKeySpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_2048_HASH)
          {
            return CustomerMasterKeySpec::RSA_2048;
          }
          else if (hashCode == RSA_3072_HASH)
          {
            return CustomerMasterKeySpec::RSA_3072;
          }
          else if (hashCode == RSA_4096_HASH)
          {
            return CustomerMasterKeySpec::RSA_4096;
          }
          else if (hashCode == ECC_NIST_P256_HASH)
          {
            return CustomerMasterKeySpec::ECC_NIST_P256;
          }
          else if (hashCode == ECC_NIST_P384_HASH)
          {
            return CustomerMasterKeySpec::ECC_NIST_P384;
          }
          else if (hashCode == ECC_NIST_P521_HASH)
          {
            return CustomerMasterKeySpec::ECC_NIST_P521;
          }
          else if (hashCode == ECC_SECG_P256K1_HASH)
          {
            return CustomerMasterKeySpec::ECC_SECG_P256K1;
          }
          else if (hashCode == SYMMETRIC_DEFAULT_HASH)
          {
            return CustomerMasterKeySpec::SYMMETRIC_DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomerMasterKeySpec>(hashCode);
          }

          return CustomerMasterKeySpec::NOT_SET;
        }

        Aws::String GetNameForCustomerMasterKeySpec(CustomerMasterKeySpec enumValue)
        {
          switch(enumValue)
          {
          case CustomerMasterKeySpec::RSA_2048:
            return "RSA_2048";
          case CustomerMasterKeySpec::RSA_3072:
            return "RSA_3072";
          case CustomerMasterKeySpec::RSA_4096:
            return "RSA_4096";
          case CustomerMasterKeySpec::ECC_NIST_P256:
            return "ECC_NIST_P256";
          case CustomerMasterKeySpec::ECC_NIST_P384:
            return "ECC_NIST_P384";
          case CustomerMasterKeySpec::ECC_NIST_P521:
            return "ECC_NIST_P521";
          case CustomerMasterKeySpec::ECC_SECG_P256K1:
            return "ECC_SECG_P256K1";
          case CustomerMasterKeySpec::SYMMETRIC_DEFAULT:
            return "SYMMETRIC_DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomerMasterKeySpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
