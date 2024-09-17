/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressTlsProtocolOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace IngressTlsProtocolOperatorMapper
      {

        static const int MINIMUM_TLS_VERSION_HASH = HashingUtils::HashString("MINIMUM_TLS_VERSION");
        static const int IS_HASH = HashingUtils::HashString("IS");


        IngressTlsProtocolOperator GetIngressTlsProtocolOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MINIMUM_TLS_VERSION_HASH)
          {
            return IngressTlsProtocolOperator::MINIMUM_TLS_VERSION;
          }
          else if (hashCode == IS_HASH)
          {
            return IngressTlsProtocolOperator::IS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressTlsProtocolOperator>(hashCode);
          }

          return IngressTlsProtocolOperator::NOT_SET;
        }

        Aws::String GetNameForIngressTlsProtocolOperator(IngressTlsProtocolOperator enumValue)
        {
          switch(enumValue)
          {
          case IngressTlsProtocolOperator::NOT_SET:
            return {};
          case IngressTlsProtocolOperator::MINIMUM_TLS_VERSION:
            return "MINIMUM_TLS_VERSION";
          case IngressTlsProtocolOperator::IS:
            return "IS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressTlsProtocolOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
