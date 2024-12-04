/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftQueryEngineStorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace RedshiftQueryEngineStorageTypeMapper
      {

        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int AWS_DATA_CATALOG_HASH = HashingUtils::HashString("AWS_DATA_CATALOG");


        RedshiftQueryEngineStorageType GetRedshiftQueryEngineStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REDSHIFT_HASH)
          {
            return RedshiftQueryEngineStorageType::REDSHIFT;
          }
          else if (hashCode == AWS_DATA_CATALOG_HASH)
          {
            return RedshiftQueryEngineStorageType::AWS_DATA_CATALOG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedshiftQueryEngineStorageType>(hashCode);
          }

          return RedshiftQueryEngineStorageType::NOT_SET;
        }

        Aws::String GetNameForRedshiftQueryEngineStorageType(RedshiftQueryEngineStorageType enumValue)
        {
          switch(enumValue)
          {
          case RedshiftQueryEngineStorageType::NOT_SET:
            return {};
          case RedshiftQueryEngineStorageType::REDSHIFT:
            return "REDSHIFT";
          case RedshiftQueryEngineStorageType::AWS_DATA_CATALOG:
            return "AWS_DATA_CATALOG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedshiftQueryEngineStorageTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
