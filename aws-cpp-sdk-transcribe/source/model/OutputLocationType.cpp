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

#include <aws/transcribe/model/OutputLocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace OutputLocationTypeMapper
      {

        static const int CUSTOMER_BUCKET_HASH = HashingUtils::HashString("CUSTOMER_BUCKET");
        static const int SERVICE_BUCKET_HASH = HashingUtils::HashString("SERVICE_BUCKET");


        OutputLocationType GetOutputLocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_BUCKET_HASH)
          {
            return OutputLocationType::CUSTOMER_BUCKET;
          }
          else if (hashCode == SERVICE_BUCKET_HASH)
          {
            return OutputLocationType::SERVICE_BUCKET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputLocationType>(hashCode);
          }

          return OutputLocationType::NOT_SET;
        }

        Aws::String GetNameForOutputLocationType(OutputLocationType enumValue)
        {
          switch(enumValue)
          {
          case OutputLocationType::CUSTOMER_BUCKET:
            return "CUSTOMER_BUCKET";
          case OutputLocationType::SERVICE_BUCKET:
            return "SERVICE_BUCKET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputLocationTypeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
