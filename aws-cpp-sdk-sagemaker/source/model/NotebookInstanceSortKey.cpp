/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotebookInstanceSortKey.h>
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
      namespace NotebookInstanceSortKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        NotebookInstanceSortKey GetNotebookInstanceSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return NotebookInstanceSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return NotebookInstanceSortKey::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return NotebookInstanceSortKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookInstanceSortKey>(hashCode);
          }

          return NotebookInstanceSortKey::NOT_SET;
        }

        Aws::String GetNameForNotebookInstanceSortKey(NotebookInstanceSortKey enumValue)
        {
          switch(enumValue)
          {
          case NotebookInstanceSortKey::Name:
            return "Name";
          case NotebookInstanceSortKey::CreationTime:
            return "CreationTime";
          case NotebookInstanceSortKey::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotebookInstanceSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
