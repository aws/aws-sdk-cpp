/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ElasticGpuState.h>
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
      namespace ElasticGpuStateMapper
      {

        static const int ATTACHED_HASH = HashingUtils::HashString("ATTACHED");


        ElasticGpuState GetElasticGpuStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTACHED_HASH)
          {
            return ElasticGpuState::ATTACHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ElasticGpuState>(hashCode);
          }

          return ElasticGpuState::NOT_SET;
        }

        Aws::String GetNameForElasticGpuState(ElasticGpuState enumValue)
        {
          switch(enumValue)
          {
          case ElasticGpuState::ATTACHED:
            return "ATTACHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ElasticGpuStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
