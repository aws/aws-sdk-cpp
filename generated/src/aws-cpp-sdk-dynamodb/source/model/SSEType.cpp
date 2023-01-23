/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/SSEType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace SSETypeMapper
      {

        static const int AES256_HASH = HashingUtils::HashString("AES256");
        static const int KMS_HASH = HashingUtils::HashString("KMS");


        SSEType GetSSETypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AES256_HASH)
          {
            return SSEType::AES256;
          }
          else if (hashCode == KMS_HASH)
          {
            return SSEType::KMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SSEType>(hashCode);
          }

          return SSEType::NOT_SET;
        }

        Aws::String GetNameForSSEType(SSEType enumValue)
        {
          switch(enumValue)
          {
          case SSEType::AES256:
            return "AES256";
          case SSEType::KMS:
            return "KMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SSETypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
