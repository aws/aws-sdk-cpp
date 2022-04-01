﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DataLakeResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LakeFormation
  {
    namespace Model
    {
      namespace DataLakeResourceTypeMapper
      {

        static const int CATALOG_HASH = HashingUtils::HashString("CATALOG");
        static const int DATABASE_HASH = HashingUtils::HashString("DATABASE");
        static const int TABLE_HASH = HashingUtils::HashString("TABLE");
        static const int DATA_LOCATION_HASH = HashingUtils::HashString("DATA_LOCATION");
        static const int LF_TAG_HASH = HashingUtils::HashString("LF_TAG");
        static const int LF_TAG_POLICY_HASH = HashingUtils::HashString("LF_TAG_POLICY");
        static const int LF_TAG_POLICY_DATABASE_HASH = HashingUtils::HashString("LF_TAG_POLICY_DATABASE");
        static const int LF_TAG_POLICY_TABLE_HASH = HashingUtils::HashString("LF_TAG_POLICY_TABLE");


        DataLakeResourceType GetDataLakeResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CATALOG_HASH)
          {
            return DataLakeResourceType::CATALOG;
          }
          else if (hashCode == DATABASE_HASH)
          {
            return DataLakeResourceType::DATABASE;
          }
          else if (hashCode == TABLE_HASH)
          {
            return DataLakeResourceType::TABLE;
          }
          else if (hashCode == DATA_LOCATION_HASH)
          {
            return DataLakeResourceType::DATA_LOCATION;
          }
          else if (hashCode == LF_TAG_HASH)
          {
            return DataLakeResourceType::LF_TAG;
          }
          else if (hashCode == LF_TAG_POLICY_HASH)
          {
            return DataLakeResourceType::LF_TAG_POLICY;
          }
          else if (hashCode == LF_TAG_POLICY_DATABASE_HASH)
          {
            return DataLakeResourceType::LF_TAG_POLICY_DATABASE;
          }
          else if (hashCode == LF_TAG_POLICY_TABLE_HASH)
          {
            return DataLakeResourceType::LF_TAG_POLICY_TABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLakeResourceType>(hashCode);
          }

          return DataLakeResourceType::NOT_SET;
        }

        Aws::String GetNameForDataLakeResourceType(DataLakeResourceType enumValue)
        {
          switch(enumValue)
          {
          case DataLakeResourceType::CATALOG:
            return "CATALOG";
          case DataLakeResourceType::DATABASE:
            return "DATABASE";
          case DataLakeResourceType::TABLE:
            return "TABLE";
          case DataLakeResourceType::DATA_LOCATION:
            return "DATA_LOCATION";
          case DataLakeResourceType::LF_TAG:
            return "LF_TAG";
          case DataLakeResourceType::LF_TAG_POLICY:
            return "LF_TAG_POLICY";
          case DataLakeResourceType::LF_TAG_POLICY_DATABASE:
            return "LF_TAG_POLICY_DATABASE";
          case DataLakeResourceType::LF_TAG_POLICY_TABLE:
            return "LF_TAG_POLICY_TABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataLakeResourceTypeMapper
    } // namespace Model
  } // namespace LakeFormation
} // namespace Aws
