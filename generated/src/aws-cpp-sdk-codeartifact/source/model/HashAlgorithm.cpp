/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/HashAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace HashAlgorithmMapper
      {

        static constexpr uint32_t MD5_HASH = ConstExprHashingUtils::HashString("MD5");
        static constexpr uint32_t SHA_1_HASH = ConstExprHashingUtils::HashString("SHA-1");
        static constexpr uint32_t SHA_256_HASH = ConstExprHashingUtils::HashString("SHA-256");
        static constexpr uint32_t SHA_512_HASH = ConstExprHashingUtils::HashString("SHA-512");


        HashAlgorithm GetHashAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MD5_HASH)
          {
            return HashAlgorithm::MD5;
          }
          else if (hashCode == SHA_1_HASH)
          {
            return HashAlgorithm::SHA_1;
          }
          else if (hashCode == SHA_256_HASH)
          {
            return HashAlgorithm::SHA_256;
          }
          else if (hashCode == SHA_512_HASH)
          {
            return HashAlgorithm::SHA_512;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HashAlgorithm>(hashCode);
          }

          return HashAlgorithm::NOT_SET;
        }

        Aws::String GetNameForHashAlgorithm(HashAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case HashAlgorithm::NOT_SET:
            return {};
          case HashAlgorithm::MD5:
            return "MD5";
          case HashAlgorithm::SHA_1:
            return "SHA-1";
          case HashAlgorithm::SHA_256:
            return "SHA-256";
          case HashAlgorithm::SHA_512:
            return "SHA-512";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HashAlgorithmMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
