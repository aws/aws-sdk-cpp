/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/EngineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace EngineTypeMapper
      {

        static const int OpenSearch_HASH = HashingUtils::HashString("OpenSearch");
        static const int Elasticsearch_HASH = HashingUtils::HashString("Elasticsearch");


        EngineType GetEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OpenSearch_HASH)
          {
            return EngineType::OpenSearch;
          }
          else if (hashCode == Elasticsearch_HASH)
          {
            return EngineType::Elasticsearch;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngineType>(hashCode);
          }

          return EngineType::NOT_SET;
        }

        Aws::String GetNameForEngineType(EngineType enumValue)
        {
          switch(enumValue)
          {
          case EngineType::NOT_SET:
            return {};
          case EngineType::OpenSearch:
            return "OpenSearch";
          case EngineType::Elasticsearch:
            return "Elasticsearch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngineTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
