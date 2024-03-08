/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AssociatedTranscriptFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace AssociatedTranscriptFilterNameMapper
      {

        static const int IntentId_HASH = HashingUtils::HashString("IntentId");
        static const int SlotTypeId_HASH = HashingUtils::HashString("SlotTypeId");


        AssociatedTranscriptFilterName GetAssociatedTranscriptFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IntentId_HASH)
          {
            return AssociatedTranscriptFilterName::IntentId;
          }
          else if (hashCode == SlotTypeId_HASH)
          {
            return AssociatedTranscriptFilterName::SlotTypeId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociatedTranscriptFilterName>(hashCode);
          }

          return AssociatedTranscriptFilterName::NOT_SET;
        }

        Aws::String GetNameForAssociatedTranscriptFilterName(AssociatedTranscriptFilterName enumValue)
        {
          switch(enumValue)
          {
          case AssociatedTranscriptFilterName::NOT_SET:
            return {};
          case AssociatedTranscriptFilterName::IntentId:
            return "IntentId";
          case AssociatedTranscriptFilterName::SlotTypeId:
            return "SlotTypeId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociatedTranscriptFilterNameMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
