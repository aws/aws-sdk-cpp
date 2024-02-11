/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/KafkaClusterClientAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KafkaConnect
  {
    namespace Model
    {
      namespace KafkaClusterClientAuthenticationTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int IAM_HASH = HashingUtils::HashString("IAM");


        KafkaClusterClientAuthenticationType GetKafkaClusterClientAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return KafkaClusterClientAuthenticationType::NONE;
          }
          else if (hashCode == IAM_HASH)
          {
            return KafkaClusterClientAuthenticationType::IAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KafkaClusterClientAuthenticationType>(hashCode);
          }

          return KafkaClusterClientAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForKafkaClusterClientAuthenticationType(KafkaClusterClientAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case KafkaClusterClientAuthenticationType::NOT_SET:
            return {};
          case KafkaClusterClientAuthenticationType::NONE:
            return "NONE";
          case KafkaClusterClientAuthenticationType::IAM:
            return "IAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KafkaClusterClientAuthenticationTypeMapper
    } // namespace Model
  } // namespace KafkaConnect
} // namespace Aws
