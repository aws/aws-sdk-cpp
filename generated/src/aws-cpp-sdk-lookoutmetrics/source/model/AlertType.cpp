/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AlertType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace AlertTypeMapper
      {

        static const int SNS_HASH = HashingUtils::HashString("SNS");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");


        AlertType GetAlertTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNS_HASH)
          {
            return AlertType::SNS;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return AlertType::LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlertType>(hashCode);
          }

          return AlertType::NOT_SET;
        }

        Aws::String GetNameForAlertType(AlertType enumValue)
        {
          switch(enumValue)
          {
          case AlertType::NOT_SET:
            return {};
          case AlertType::SNS:
            return "SNS";
          case AlertType::LAMBDA:
            return "LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlertTypeMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
