/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/Operation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudControlApi
  {
    namespace Model
    {
      namespace OperationMapper
      {

        static constexpr uint32_t CREATE_HASH = ConstExprHashingUtils::HashString("CREATE");
        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");
        static constexpr uint32_t UPDATE_HASH = ConstExprHashingUtils::HashString("UPDATE");


        Operation GetOperationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return Operation::CREATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return Operation::DELETE_;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return Operation::UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Operation>(hashCode);
          }

          return Operation::NOT_SET;
        }

        Aws::String GetNameForOperation(Operation enumValue)
        {
          switch(enumValue)
          {
          case Operation::NOT_SET:
            return {};
          case Operation::CREATE:
            return "CREATE";
          case Operation::DELETE_:
            return "DELETE";
          case Operation::UPDATE:
            return "UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationMapper
    } // namespace Model
  } // namespace CloudControlApi
} // namespace Aws
