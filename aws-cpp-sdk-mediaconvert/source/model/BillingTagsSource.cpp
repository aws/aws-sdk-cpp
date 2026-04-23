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

#include <aws/mediaconvert/model/BillingTagsSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace BillingTagsSourceMapper
      {

        static const int QUEUE_HASH = HashingUtils::HashString("QUEUE");
        static const int PRESET_HASH = HashingUtils::HashString("PRESET");
        static const int JOB_TEMPLATE_HASH = HashingUtils::HashString("JOB_TEMPLATE");


        BillingTagsSource GetBillingTagsSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUE_HASH)
          {
            return BillingTagsSource::QUEUE;
          }
          else if (hashCode == PRESET_HASH)
          {
            return BillingTagsSource::PRESET;
          }
          else if (hashCode == JOB_TEMPLATE_HASH)
          {
            return BillingTagsSource::JOB_TEMPLATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingTagsSource>(hashCode);
          }

          return BillingTagsSource::NOT_SET;
        }

        Aws::String GetNameForBillingTagsSource(BillingTagsSource enumValue)
        {
          switch(enumValue)
          {
          case BillingTagsSource::QUEUE:
            return "QUEUE";
          case BillingTagsSource::PRESET:
            return "PRESET";
          case BillingTagsSource::JOB_TEMPLATE:
            return "JOB_TEMPLATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillingTagsSourceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
