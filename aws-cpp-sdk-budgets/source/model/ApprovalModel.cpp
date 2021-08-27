/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ApprovalModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace ApprovalModelMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        ApprovalModel GetApprovalModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return ApprovalModel::AUTOMATIC;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return ApprovalModel::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApprovalModel>(hashCode);
          }

          return ApprovalModel::NOT_SET;
        }

        Aws::String GetNameForApprovalModel(ApprovalModel enumValue)
        {
          switch(enumValue)
          {
          case ApprovalModel::AUTOMATIC:
            return "AUTOMATIC";
          case ApprovalModel::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApprovalModelMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
