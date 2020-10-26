/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DomainStatus.h>
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
      namespace DomainStatusMapper
      {

        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Update_Failed_HASH = HashingUtils::HashString("Update_Failed");
        static const int Delete_Failed_HASH = HashingUtils::HashString("Delete_Failed");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Deleting_HASH)
          {
            return DomainStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return DomainStatus::Failed;
          }
          else if (hashCode == InService_HASH)
          {
            return DomainStatus::InService;
          }
          else if (hashCode == Pending_HASH)
          {
            return DomainStatus::Pending;
          }
          else if (hashCode == Updating_HASH)
          {
            return DomainStatus::Updating;
          }
          else if (hashCode == Update_Failed_HASH)
          {
            return DomainStatus::Update_Failed;
          }
          else if (hashCode == Delete_Failed_HASH)
          {
            return DomainStatus::Delete_Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatus>(hashCode);
          }

          return DomainStatus::NOT_SET;
        }

        Aws::String GetNameForDomainStatus(DomainStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainStatus::Deleting:
            return "Deleting";
          case DomainStatus::Failed:
            return "Failed";
          case DomainStatus::InService:
            return "InService";
          case DomainStatus::Pending:
            return "Pending";
          case DomainStatus::Updating:
            return "Updating";
          case DomainStatus::Update_Failed:
            return "Update_Failed";
          case DomainStatus::Delete_Failed:
            return "Delete_Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
