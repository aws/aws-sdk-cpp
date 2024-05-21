/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressIpOperator.h>
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
      namespace IngressIpOperatorMapper
      {

        static const int CIDR_MATCHES_HASH = HashingUtils::HashString("CIDR_MATCHES");
        static const int NOT_CIDR_MATCHES_HASH = HashingUtils::HashString("NOT_CIDR_MATCHES");


        IngressIpOperator GetIngressIpOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CIDR_MATCHES_HASH)
          {
            return IngressIpOperator::CIDR_MATCHES;
          }
          else if (hashCode == NOT_CIDR_MATCHES_HASH)
          {
            return IngressIpOperator::NOT_CIDR_MATCHES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressIpOperator>(hashCode);
          }

          return IngressIpOperator::NOT_SET;
        }

        Aws::String GetNameForIngressIpOperator(IngressIpOperator enumValue)
        {
          switch(enumValue)
          {
          case IngressIpOperator::NOT_SET:
            return {};
          case IngressIpOperator::CIDR_MATCHES:
            return "CIDR_MATCHES";
          case IngressIpOperator::NOT_CIDR_MATCHES:
            return "NOT_CIDR_MATCHES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressIpOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
