/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressStringOperator.h>
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
      namespace IngressStringOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
        static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        IngressStringOperator GetIngressStringOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return IngressStringOperator::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return IngressStringOperator::NOT_EQUALS;
          }
          else if (hashCode == STARTS_WITH_HASH)
          {
            return IngressStringOperator::STARTS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return IngressStringOperator::ENDS_WITH;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return IngressStringOperator::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressStringOperator>(hashCode);
          }

          return IngressStringOperator::NOT_SET;
        }

        Aws::String GetNameForIngressStringOperator(IngressStringOperator enumValue)
        {
          switch(enumValue)
          {
          case IngressStringOperator::NOT_SET:
            return {};
          case IngressStringOperator::EQUALS:
            return "EQUALS";
          case IngressStringOperator::NOT_EQUALS:
            return "NOT_EQUALS";
          case IngressStringOperator::STARTS_WITH:
            return "STARTS_WITH";
          case IngressStringOperator::ENDS_WITH:
            return "ENDS_WITH";
          case IngressStringOperator::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressStringOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
