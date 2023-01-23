/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeSetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ChangeSetTypeMapper
      {

        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int IMPORT_HASH = HashingUtils::HashString("IMPORT");


        ChangeSetType GetChangeSetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return ChangeSetType::CREATE;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return ChangeSetType::UPDATE;
          }
          else if (hashCode == IMPORT_HASH)
          {
            return ChangeSetType::IMPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeSetType>(hashCode);
          }

          return ChangeSetType::NOT_SET;
        }

        Aws::String GetNameForChangeSetType(ChangeSetType enumValue)
        {
          switch(enumValue)
          {
          case ChangeSetType::CREATE:
            return "CREATE";
          case ChangeSetType::UPDATE:
            return "UPDATE";
          case ChangeSetType::IMPORT:
            return "IMPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeSetTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
