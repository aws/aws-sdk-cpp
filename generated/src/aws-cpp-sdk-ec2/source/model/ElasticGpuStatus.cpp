/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ElasticGpuStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ElasticGpuStatusMapper
      {

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");


        ElasticGpuStatus GetElasticGpuStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return ElasticGpuStatus::OK;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return ElasticGpuStatus::IMPAIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ElasticGpuStatus>(hashCode);
          }

          return ElasticGpuStatus::NOT_SET;
        }

        Aws::String GetNameForElasticGpuStatus(ElasticGpuStatus enumValue)
        {
          switch(enumValue)
          {
          case ElasticGpuStatus::OK:
            return "OK";
          case ElasticGpuStatus::IMPAIRED:
            return "IMPAIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ElasticGpuStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
