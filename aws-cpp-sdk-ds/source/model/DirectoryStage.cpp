/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/DirectoryStage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace DirectoryStageMapper
      {

        static const int Requested_HASH = HashingUtils::HashString("Requested");
        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inoperable_HASH = HashingUtils::HashString("Inoperable");
        static const int Impaired_HASH = HashingUtils::HashString("Impaired");
        static const int Restoring_HASH = HashingUtils::HashString("Restoring");
        static const int RestoreFailed_HASH = HashingUtils::HashString("RestoreFailed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        DirectoryStage GetDirectoryStageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Requested_HASH)
          {
            return DirectoryStage::Requested;
          }
          else if (hashCode == Creating_HASH)
          {
            return DirectoryStage::Creating;
          }
          else if (hashCode == Created_HASH)
          {
            return DirectoryStage::Created;
          }
          else if (hashCode == Active_HASH)
          {
            return DirectoryStage::Active;
          }
          else if (hashCode == Inoperable_HASH)
          {
            return DirectoryStage::Inoperable;
          }
          else if (hashCode == Impaired_HASH)
          {
            return DirectoryStage::Impaired;
          }
          else if (hashCode == Restoring_HASH)
          {
            return DirectoryStage::Restoring;
          }
          else if (hashCode == RestoreFailed_HASH)
          {
            return DirectoryStage::RestoreFailed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return DirectoryStage::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return DirectoryStage::Deleted;
          }
          else if (hashCode == Failed_HASH)
          {
            return DirectoryStage::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryStage>(hashCode);
          }

          return DirectoryStage::NOT_SET;
        }

        Aws::String GetNameForDirectoryStage(DirectoryStage enumValue)
        {
          switch(enumValue)
          {
          case DirectoryStage::Requested:
            return "Requested";
          case DirectoryStage::Creating:
            return "Creating";
          case DirectoryStage::Created:
            return "Created";
          case DirectoryStage::Active:
            return "Active";
          case DirectoryStage::Inoperable:
            return "Inoperable";
          case DirectoryStage::Impaired:
            return "Impaired";
          case DirectoryStage::Restoring:
            return "Restoring";
          case DirectoryStage::RestoreFailed:
            return "RestoreFailed";
          case DirectoryStage::Deleting:
            return "Deleting";
          case DirectoryStage::Deleted:
            return "Deleted";
          case DirectoryStage::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DirectoryStageMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
