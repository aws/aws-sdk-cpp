/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/CustomActionAttachmentCriteriaOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace chatbot
  {
    namespace Model
    {
      namespace CustomActionAttachmentCriteriaOperatorMapper
      {

        static const int HAS_VALUE_HASH = HashingUtils::HashString("HAS_VALUE");
        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");


        CustomActionAttachmentCriteriaOperator GetCustomActionAttachmentCriteriaOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HAS_VALUE_HASH)
          {
            return CustomActionAttachmentCriteriaOperator::HAS_VALUE;
          }
          else if (hashCode == EQUALS_HASH)
          {
            return CustomActionAttachmentCriteriaOperator::EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomActionAttachmentCriteriaOperator>(hashCode);
          }

          return CustomActionAttachmentCriteriaOperator::NOT_SET;
        }

        Aws::String GetNameForCustomActionAttachmentCriteriaOperator(CustomActionAttachmentCriteriaOperator enumValue)
        {
          switch(enumValue)
          {
          case CustomActionAttachmentCriteriaOperator::NOT_SET:
            return {};
          case CustomActionAttachmentCriteriaOperator::HAS_VALUE:
            return "HAS_VALUE";
          case CustomActionAttachmentCriteriaOperator::EQUALS:
            return "EQUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomActionAttachmentCriteriaOperatorMapper
    } // namespace Model
  } // namespace chatbot
} // namespace Aws
