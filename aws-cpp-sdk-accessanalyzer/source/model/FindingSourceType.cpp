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

#include <aws/accessanalyzer/model/FindingSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace FindingSourceTypeMapper
      {

        static const int BUCKET_ACL_HASH = HashingUtils::HashString("BUCKET_ACL");
        static const int POLICY_HASH = HashingUtils::HashString("POLICY");
        static const int S3_ACCESS_POINT_HASH = HashingUtils::HashString("S3_ACCESS_POINT");


        FindingSourceType GetFindingSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUCKET_ACL_HASH)
          {
            return FindingSourceType::BUCKET_ACL;
          }
          else if (hashCode == POLICY_HASH)
          {
            return FindingSourceType::POLICY;
          }
          else if (hashCode == S3_ACCESS_POINT_HASH)
          {
            return FindingSourceType::S3_ACCESS_POINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingSourceType>(hashCode);
          }

          return FindingSourceType::NOT_SET;
        }

        Aws::String GetNameForFindingSourceType(FindingSourceType enumValue)
        {
          switch(enumValue)
          {
          case FindingSourceType::BUCKET_ACL:
            return "BUCKET_ACL";
          case FindingSourceType::POLICY:
            return "POLICY";
          case FindingSourceType::S3_ACCESS_POINT:
            return "S3_ACCESS_POINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingSourceTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
