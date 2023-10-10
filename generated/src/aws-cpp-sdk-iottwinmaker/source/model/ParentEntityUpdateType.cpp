/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ParentEntityUpdateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace ParentEntityUpdateTypeMapper
      {

        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        ParentEntityUpdateType GetParentEntityUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_HASH)
          {
            return ParentEntityUpdateType::UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return ParentEntityUpdateType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParentEntityUpdateType>(hashCode);
          }

          return ParentEntityUpdateType::NOT_SET;
        }

        Aws::String GetNameForParentEntityUpdateType(ParentEntityUpdateType enumValue)
        {
          switch(enumValue)
          {
          case ParentEntityUpdateType::NOT_SET:
            return {};
          case ParentEntityUpdateType::UPDATE:
            return "UPDATE";
          case ParentEntityUpdateType::DELETE_:
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

      } // namespace ParentEntityUpdateTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
