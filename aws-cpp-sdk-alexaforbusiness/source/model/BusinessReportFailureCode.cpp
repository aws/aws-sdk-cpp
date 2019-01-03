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

#include <aws/alexaforbusiness/model/BusinessReportFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace BusinessReportFailureCodeMapper
      {

        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int NO_SUCH_BUCKET_HASH = HashingUtils::HashString("NO_SUCH_BUCKET");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");


        BusinessReportFailureCode GetBusinessReportFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return BusinessReportFailureCode::ACCESS_DENIED;
          }
          else if (hashCode == NO_SUCH_BUCKET_HASH)
          {
            return BusinessReportFailureCode::NO_SUCH_BUCKET;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return BusinessReportFailureCode::INTERNAL_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BusinessReportFailureCode>(hashCode);
          }

          return BusinessReportFailureCode::NOT_SET;
        }

        Aws::String GetNameForBusinessReportFailureCode(BusinessReportFailureCode enumValue)
        {
          switch(enumValue)
          {
          case BusinessReportFailureCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case BusinessReportFailureCode::NO_SUCH_BUCKET:
            return "NO_SUCH_BUCKET";
          case BusinessReportFailureCode::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BusinessReportFailureCodeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
