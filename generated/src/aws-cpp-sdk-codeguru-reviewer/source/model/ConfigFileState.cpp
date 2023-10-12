/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/ConfigFileState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace ConfigFileStateMapper
      {

        static constexpr uint32_t Present_HASH = ConstExprHashingUtils::HashString("Present");
        static constexpr uint32_t Absent_HASH = ConstExprHashingUtils::HashString("Absent");
        static constexpr uint32_t PresentWithErrors_HASH = ConstExprHashingUtils::HashString("PresentWithErrors");


        ConfigFileState GetConfigFileStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Present_HASH)
          {
            return ConfigFileState::Present;
          }
          else if (hashCode == Absent_HASH)
          {
            return ConfigFileState::Absent;
          }
          else if (hashCode == PresentWithErrors_HASH)
          {
            return ConfigFileState::PresentWithErrors;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigFileState>(hashCode);
          }

          return ConfigFileState::NOT_SET;
        }

        Aws::String GetNameForConfigFileState(ConfigFileState enumValue)
        {
          switch(enumValue)
          {
          case ConfigFileState::NOT_SET:
            return {};
          case ConfigFileState::Present:
            return "Present";
          case ConfigFileState::Absent:
            return "Absent";
          case ConfigFileState::PresentWithErrors:
            return "PresentWithErrors";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigFileStateMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
