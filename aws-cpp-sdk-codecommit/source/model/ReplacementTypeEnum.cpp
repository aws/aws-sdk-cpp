/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codecommit/model/ReplacementTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace ReplacementTypeEnumMapper
      {

        static const int KEEP_BASE_HASH = HashingUtils::HashString("KEEP_BASE");
        static const int KEEP_SOURCE_HASH = HashingUtils::HashString("KEEP_SOURCE");
        static const int KEEP_DESTINATION_HASH = HashingUtils::HashString("KEEP_DESTINATION");
        static const int USE_NEW_CONTENT_HASH = HashingUtils::HashString("USE_NEW_CONTENT");


        ReplacementTypeEnum GetReplacementTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEEP_BASE_HASH)
          {
            return ReplacementTypeEnum::KEEP_BASE;
          }
          else if (hashCode == KEEP_SOURCE_HASH)
          {
            return ReplacementTypeEnum::KEEP_SOURCE;
          }
          else if (hashCode == KEEP_DESTINATION_HASH)
          {
            return ReplacementTypeEnum::KEEP_DESTINATION;
          }
          else if (hashCode == USE_NEW_CONTENT_HASH)
          {
            return ReplacementTypeEnum::USE_NEW_CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplacementTypeEnum>(hashCode);
          }

          return ReplacementTypeEnum::NOT_SET;
        }

        Aws::String GetNameForReplacementTypeEnum(ReplacementTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ReplacementTypeEnum::KEEP_BASE:
            return "KEEP_BASE";
          case ReplacementTypeEnum::KEEP_SOURCE:
            return "KEEP_SOURCE";
          case ReplacementTypeEnum::KEEP_DESTINATION:
            return "KEEP_DESTINATION";
          case ReplacementTypeEnum::USE_NEW_CONTENT:
            return "USE_NEW_CONTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplacementTypeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
