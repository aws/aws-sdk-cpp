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

        static constexpr uint32_t POLICY_HASH = ConstExprHashingUtils::HashString("POLICY");
        static constexpr uint32_t BUCKET_ACL_HASH = ConstExprHashingUtils::HashString("BUCKET_ACL");
        static constexpr uint32_t S3_ACCESS_POINT_HASH = ConstExprHashingUtils::HashString("S3_ACCESS_POINT");
        static constexpr uint32_t S3_ACCESS_POINT_ACCOUNT_HASH = ConstExprHashingUtils::HashString("S3_ACCESS_POINT_ACCOUNT");


        FindingSourceType GetFindingSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case FindingSourceType::NOT_SET:
            return {};
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
