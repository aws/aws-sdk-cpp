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

#include <aws/kms/model/EncryptionAlgorithmSpec.h>
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
      namespace EncryptionAlgorithmSpecMapper
      {

        static const int SYMMETRIC_DEFAULT_HASH = HashingUtils::HashString("SYMMETRIC_DEFAULT");
        static const int RSAES_OAEP_SHA_1_HASH = HashingUtils::HashString("RSAES_OAEP_SHA_1");
        static const int RSAES_OAEP_SHA_256_HASH = HashingUtils::HashString("RSAES_OAEP_SHA_256");


        EncryptionAlgorithmSpec GetEncryptionAlgorithmSpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYMMETRIC_DEFAULT_HASH)
          {
            return EncryptionAlgorithmSpec::SYMMETRIC_DEFAULT;
          }
          else if (hashCode == RSAES_OAEP_SHA_1_HASH)
          {
            return EncryptionAlgorithmSpec::RSAES_OAEP_SHA_1;
          }
          else if (hashCode == RSAES_OAEP_SHA_256_HASH)
          {
            return EncryptionAlgorithmSpec::RSAES_OAEP_SHA_256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionAlgorithmSpec>(hashCode);
          }

          return EncryptionAlgorithmSpec::NOT_SET;
        }

        Aws::String GetNameForEncryptionAlgorithmSpec(EncryptionAlgorithmSpec enumValue)
        {
          switch(enumValue)
          {
          case EncryptionAlgorithmSpec::SYMMETRIC_DEFAULT:
            return "SYMMETRIC_DEFAULT";
          case EncryptionAlgorithmSpec::RSAES_OAEP_SHA_1:
            return "RSAES_OAEP_SHA_1";
          case EncryptionAlgorithmSpec::RSAES_OAEP_SHA_256:
            return "RSAES_OAEP_SHA_256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionAlgorithmSpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
