/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/TemplateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace TemplateStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        TemplateStatus GetTemplateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return TemplateStatus::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return TemplateStatus::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateStatus>(hashCode);
          }

          return TemplateStatus::NOT_SET;
        }

        Aws::String GetNameForTemplateStatus(TemplateStatus enumValue)
        {
          switch(enumValue)
          {
          case TemplateStatus::Active:
            return "Active";
          case TemplateStatus::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateStatusMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
