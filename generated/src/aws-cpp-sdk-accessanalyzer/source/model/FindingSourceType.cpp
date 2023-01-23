/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static const int POLICY_HASH = HashingUtils::HashString("POLICY");
        static const int BUCKET_ACL_HASH = HashingUtils::HashString("BUCKET_ACL");
        static const int S3_ACCESS_POINT_HASH = HashingUtils::HashString("S3_ACCESS_POINT");
        static const int S3_ACCESS_POINT_ACCOUNT_HASH = HashingUtils::HashString("S3_ACCESS_POINT_ACCOUNT");


        FindingSourceType GetFindingSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POLICY_HASH)
          {
            return FindingSourceType::POLICY;
          }
          else if (hashCode == BUCKET_ACL_HASH)
          {
            return FindingSourceType::BUCKET_ACL;
          }
          else if (hashCode == S3_ACCESS_POINT_HASH)
          {
            return FindingSourceType::S3_ACCESS_POINT;
          }
          else if (hashCode == S3_ACCESS_POINT_ACCOUNT_HASH)
          {
            return FindingSourceType::S3_ACCESS_POINT_ACCOUNT;
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
          case FindingSourceType::POLICY:
            return "POLICY";
          case FindingSourceType::BUCKET_ACL:
            return "BUCKET_ACL";
          case FindingSourceType::S3_ACCESS_POINT:
            return "S3_ACCESS_POINT";
          case FindingSourceType::S3_ACCESS_POINT_ACCOUNT:
            return "S3_ACCESS_POINT_ACCOUNT";
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
