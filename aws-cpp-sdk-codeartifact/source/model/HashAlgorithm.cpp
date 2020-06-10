/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int MD5_HASH = HashingUtils::HashString("MD5");
        static const int SHA_1_HASH = HashingUtils::HashString("SHA-1");
        static const int SHA_256_HASH = HashingUtils::HashString("SHA-256");
        static const int SHA_512_HASH = HashingUtils::HashString("SHA-512");


        HashAlgorithm GetHashAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
