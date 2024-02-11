/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ProvisionedModelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace ProvisionedModelStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ProvisionedModelStatus GetProvisionedModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return ProvisionedModelStatus::Creating;
          }
          else if (hashCode == InService_HASH)
          {
            return ProvisionedModelStatus::InService;
          }
          else if (hashCode == Updating_HASH)
          {
            return ProvisionedModelStatus::Updating;
          }
          else if (hashCode == Failed_HASH)
          {
            return ProvisionedModelStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedModelStatus>(hashCode);
          }

          return ProvisionedModelStatus::NOT_SET;
        }

        Aws::String GetNameForProvisionedModelStatus(ProvisionedModelStatus enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedModelStatus::NOT_SET:
            return {};
          case ProvisionedModelStatus::Creating:
            return "Creating";
          case ProvisionedModelStatus::InService:
            return "InService";
          case ProvisionedModelStatus::Updating:
            return "Updating";
          case ProvisionedModelStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisionedModelStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
