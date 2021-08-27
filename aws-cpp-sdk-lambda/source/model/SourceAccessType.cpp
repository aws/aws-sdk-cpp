/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/SourceAccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace SourceAccessTypeMapper
      {

        static const int BASIC_AUTH_HASH = HashingUtils::HashString("BASIC_AUTH");
        static const int VPC_SUBNET_HASH = HashingUtils::HashString("VPC_SUBNET");
        static const int VPC_SECURITY_GROUP_HASH = HashingUtils::HashString("VPC_SECURITY_GROUP");
        static const int SASL_SCRAM_512_AUTH_HASH = HashingUtils::HashString("SASL_SCRAM_512_AUTH");
        static const int SASL_SCRAM_256_AUTH_HASH = HashingUtils::HashString("SASL_SCRAM_256_AUTH");


        SourceAccessType GetSourceAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_AUTH_HASH)
          {
            return SourceAccessType::BASIC_AUTH;
          }
          else if (hashCode == VPC_SUBNET_HASH)
          {
            return SourceAccessType::VPC_SUBNET;
          }
          else if (hashCode == VPC_SECURITY_GROUP_HASH)
          {
            return SourceAccessType::VPC_SECURITY_GROUP;
          }
          else if (hashCode == SASL_SCRAM_512_AUTH_HASH)
          {
            return SourceAccessType::SASL_SCRAM_512_AUTH;
          }
          else if (hashCode == SASL_SCRAM_256_AUTH_HASH)
          {
            return SourceAccessType::SASL_SCRAM_256_AUTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceAccessType>(hashCode);
          }

          return SourceAccessType::NOT_SET;
        }

        Aws::String GetNameForSourceAccessType(SourceAccessType enumValue)
        {
          switch(enumValue)
          {
          case SourceAccessType::BASIC_AUTH:
            return "BASIC_AUTH";
          case SourceAccessType::VPC_SUBNET:
            return "VPC_SUBNET";
          case SourceAccessType::VPC_SECURITY_GROUP:
            return "VPC_SECURITY_GROUP";
          case SourceAccessType::SASL_SCRAM_512_AUTH:
            return "SASL_SCRAM_512_AUTH";
          case SourceAccessType::SASL_SCRAM_256_AUTH:
            return "SASL_SCRAM_256_AUTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceAccessTypeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
