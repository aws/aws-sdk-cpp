/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ModelCardStatusMapper
      {

        static const int Draft_HASH = HashingUtils::HashString("Draft");
        static const int PendingReview_HASH = HashingUtils::HashString("PendingReview");
        static const int Approved_HASH = HashingUtils::HashString("Approved");
        static const int Archived_HASH = HashingUtils::HashString("Archived");


        ModelCardStatus GetModelCardStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Draft_HASH)
          {
            return ModelCardStatus::Draft;
          }
          else if (hashCode == PendingReview_HASH)
          {
            return ModelCardStatus::PendingReview;
          }
          else if (hashCode == Approved_HASH)
          {
            return ModelCardStatus::Approved;
          }
          else if (hashCode == Archived_HASH)
          {
            return ModelCardStatus::Archived;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCardStatus>(hashCode);
          }

          return ModelCardStatus::NOT_SET;
        }

        Aws::String GetNameForModelCardStatus(ModelCardStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelCardStatus::Draft:
            return "Draft";
          case ModelCardStatus::PendingReview:
            return "PendingReview";
          case ModelCardStatus::Approved:
            return "Approved";
          case ModelCardStatus::Archived:
            return "Archived";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCardStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
