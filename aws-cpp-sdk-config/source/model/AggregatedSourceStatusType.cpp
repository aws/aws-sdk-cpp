﻿/*
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

#include <aws/config/model/AggregatedSourceStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace AggregatedSourceStatusTypeMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int OUTDATED_HASH = HashingUtils::HashString("OUTDATED");


        AggregatedSourceStatusType GetAggregatedSourceStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return AggregatedSourceStatusType::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return AggregatedSourceStatusType::SUCCEEDED;
          }
          else if (hashCode == OUTDATED_HASH)
          {
            return AggregatedSourceStatusType::OUTDATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregatedSourceStatusType>(hashCode);
          }

          return AggregatedSourceStatusType::NOT_SET;
        }

        Aws::String GetNameForAggregatedSourceStatusType(AggregatedSourceStatusType enumValue)
        {
          switch(enumValue)
          {
          case AggregatedSourceStatusType::FAILED:
            return "FAILED";
          case AggregatedSourceStatusType::SUCCEEDED:
            return "SUCCEEDED";
          case AggregatedSourceStatusType::OUTDATED:
            return "OUTDATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AggregatedSourceStatusTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
