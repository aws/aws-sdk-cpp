/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VocabularyState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace VocabularyStateMapper
      {

        static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");


        VocabularyState GetVocabularyStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return VocabularyState::CREATION_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return VocabularyState::ACTIVE;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return VocabularyState::CREATION_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return VocabularyState::DELETE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VocabularyState>(hashCode);
          }

          return VocabularyState::NOT_SET;
        }

        Aws::String GetNameForVocabularyState(VocabularyState enumValue)
        {
          switch(enumValue)
          {
          case VocabularyState::NOT_SET:
            return {};
          case VocabularyState::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case VocabularyState::ACTIVE:
            return "ACTIVE";
          case VocabularyState::CREATION_FAILED:
            return "CREATION_FAILED";
          case VocabularyState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VocabularyStateMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
