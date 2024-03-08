/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Operation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace OperationMapper
      {

        static const int ENABLE_SCANNING_HASH = HashingUtils::HashString("ENABLE_SCANNING");
        static const int DISABLE_SCANNING_HASH = HashingUtils::HashString("DISABLE_SCANNING");
        static const int ENABLE_REPOSITORY_HASH = HashingUtils::HashString("ENABLE_REPOSITORY");
        static const int DISABLE_REPOSITORY_HASH = HashingUtils::HashString("DISABLE_REPOSITORY");


        Operation GetOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_SCANNING_HASH)
          {
            return Operation::ENABLE_SCANNING;
          }
          else if (hashCode == DISABLE_SCANNING_HASH)
          {
            return Operation::DISABLE_SCANNING;
          }
          else if (hashCode == ENABLE_REPOSITORY_HASH)
          {
            return Operation::ENABLE_REPOSITORY;
          }
          else if (hashCode == DISABLE_REPOSITORY_HASH)
          {
            return Operation::DISABLE_REPOSITORY;
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
          case Operation::ENABLE_SCANNING:
            return "ENABLE_SCANNING";
          case Operation::DISABLE_SCANNING:
            return "DISABLE_SCANNING";
          case Operation::ENABLE_REPOSITORY:
            return "ENABLE_REPOSITORY";
          case Operation::DISABLE_REPOSITORY:
            return "DISABLE_REPOSITORY";
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
  } // namespace Inspector2
} // namespace Aws
