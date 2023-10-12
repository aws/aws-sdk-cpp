/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("ACCESS_DENIED");
        static constexpr uint32_t NO_SUCH_BUCKET_HASH = ConstExprHashingUtils::HashString("NO_SUCH_BUCKET");
        static constexpr uint32_t INTERNAL_FAILURE_HASH = ConstExprHashingUtils::HashString("INTERNAL_FAILURE");


        BusinessReportFailureCode GetBusinessReportFailureCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case BusinessReportFailureCode::NOT_SET:
            return {};
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
