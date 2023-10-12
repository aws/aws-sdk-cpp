/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/UpdateActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace UpdateActionTypeMapper
      {

        static constexpr uint32_t CREATE_OR_UPDATE_HASH = ConstExprHashingUtils::HashString("CREATE_OR_UPDATE");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");


        UpdateActionType GetUpdateActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_OR_UPDATE_HASH)
          {
            return UpdateActionType::CREATE_OR_UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return UpdateActionType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateActionType>(hashCode);
          }

          return UpdateActionType::NOT_SET;
        }

        Aws::String GetNameForUpdateActionType(UpdateActionType enumValue)
        {
          switch(enumValue)
          {
          case UpdateActionType::NOT_SET:
            return {};
          case UpdateActionType::CREATE_OR_UPDATE:
            return "CREATE_OR_UPDATE";
          case UpdateActionType::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateActionTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
