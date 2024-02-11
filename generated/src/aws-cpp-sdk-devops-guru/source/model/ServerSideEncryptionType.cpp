/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ServerSideEncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace ServerSideEncryptionTypeMapper
      {

        static const int CUSTOMER_MANAGED_KEY_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KEY");
        static const int AWS_OWNED_KMS_KEY_HASH = HashingUtils::HashString("AWS_OWNED_KMS_KEY");


        ServerSideEncryptionType GetServerSideEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_MANAGED_KEY_HASH)
          {
            return ServerSideEncryptionType::CUSTOMER_MANAGED_KEY;
          }
          else if (hashCode == AWS_OWNED_KMS_KEY_HASH)
          {
            return ServerSideEncryptionType::AWS_OWNED_KMS_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerSideEncryptionType>(hashCode);
          }

          return ServerSideEncryptionType::NOT_SET;
        }

        Aws::String GetNameForServerSideEncryptionType(ServerSideEncryptionType enumValue)
        {
          switch(enumValue)
          {
          case ServerSideEncryptionType::NOT_SET:
            return {};
          case ServerSideEncryptionType::CUSTOMER_MANAGED_KEY:
            return "CUSTOMER_MANAGED_KEY";
          case ServerSideEncryptionType::AWS_OWNED_KMS_KEY:
            return "AWS_OWNED_KMS_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerSideEncryptionTypeMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
