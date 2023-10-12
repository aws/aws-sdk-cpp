/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/OptionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudSearch
  {
    namespace Model
    {
      namespace OptionStateMapper
      {

        static constexpr uint32_t RequiresIndexDocuments_HASH = ConstExprHashingUtils::HashString("RequiresIndexDocuments");
        static constexpr uint32_t Processing_HASH = ConstExprHashingUtils::HashString("Processing");
        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t FailedToValidate_HASH = ConstExprHashingUtils::HashString("FailedToValidate");


        OptionState GetOptionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RequiresIndexDocuments_HASH)
          {
            return OptionState::RequiresIndexDocuments;
          }
          else if (hashCode == Processing_HASH)
          {
            return OptionState::Processing;
          }
          else if (hashCode == Active_HASH)
          {
            return OptionState::Active;
          }
          else if (hashCode == FailedToValidate_HASH)
          {
            return OptionState::FailedToValidate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptionState>(hashCode);
          }

          return OptionState::NOT_SET;
        }

        Aws::String GetNameForOptionState(OptionState enumValue)
        {
          switch(enumValue)
          {
          case OptionState::NOT_SET:
            return {};
          case OptionState::RequiresIndexDocuments:
            return "RequiresIndexDocuments";
          case OptionState::Processing:
            return "Processing";
          case OptionState::Active:
            return "Active";
          case OptionState::FailedToValidate:
            return "FailedToValidate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptionStateMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
