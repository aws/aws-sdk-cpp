/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RevisionLocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace RevisionLocationTypeMapper
      {

        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");
        static constexpr uint32_t GitHub_HASH = ConstExprHashingUtils::HashString("GitHub");
        static constexpr uint32_t String_HASH = ConstExprHashingUtils::HashString("String");
        static constexpr uint32_t AppSpecContent_HASH = ConstExprHashingUtils::HashString("AppSpecContent");


        RevisionLocationType GetRevisionLocationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return RevisionLocationType::S3;
          }
          else if (hashCode == GitHub_HASH)
          {
            return RevisionLocationType::GitHub;
          }
          else if (hashCode == String_HASH)
          {
            return RevisionLocationType::String;
          }
          else if (hashCode == AppSpecContent_HASH)
          {
            return RevisionLocationType::AppSpecContent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RevisionLocationType>(hashCode);
          }

          return RevisionLocationType::NOT_SET;
        }

        Aws::String GetNameForRevisionLocationType(RevisionLocationType enumValue)
        {
          switch(enumValue)
          {
          case RevisionLocationType::NOT_SET:
            return {};
          case RevisionLocationType::S3:
            return "S3";
          case RevisionLocationType::GitHub:
            return "GitHub";
          case RevisionLocationType::String:
            return "String";
          case RevisionLocationType::AppSpecContent:
            return "AppSpecContent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RevisionLocationTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
