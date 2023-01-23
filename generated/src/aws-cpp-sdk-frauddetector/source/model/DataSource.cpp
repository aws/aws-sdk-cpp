/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DataSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace DataSourceMapper
      {

        static const int EVENT_HASH = HashingUtils::HashString("EVENT");
        static const int MODEL_SCORE_HASH = HashingUtils::HashString("MODEL_SCORE");
        static const int EXTERNAL_MODEL_SCORE_HASH = HashingUtils::HashString("EXTERNAL_MODEL_SCORE");


        DataSource GetDataSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVENT_HASH)
          {
            return DataSource::EVENT;
          }
          else if (hashCode == MODEL_SCORE_HASH)
          {
            return DataSource::MODEL_SCORE;
          }
          else if (hashCode == EXTERNAL_MODEL_SCORE_HASH)
          {
            return DataSource::EXTERNAL_MODEL_SCORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSource>(hashCode);
          }

          return DataSource::NOT_SET;
        }

        Aws::String GetNameForDataSource(DataSource enumValue)
        {
          switch(enumValue)
          {
          case DataSource::EVENT:
            return "EVENT";
          case DataSource::MODEL_SCORE:
            return "MODEL_SCORE";
          case DataSource::EXTERNAL_MODEL_SCORE:
            return "EXTERNAL_MODEL_SCORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
