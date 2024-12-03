/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataOperation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace DataOperationMapper
      {

        static const int READ_HASH = HashingUtils::HashString("READ");
        static const int WRITE_HASH = HashingUtils::HashString("WRITE");


        DataOperation GetDataOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_HASH)
          {
            return DataOperation::READ;
          }
          else if (hashCode == WRITE_HASH)
          {
            return DataOperation::WRITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataOperation>(hashCode);
          }

          return DataOperation::NOT_SET;
        }

        Aws::String GetNameForDataOperation(DataOperation enumValue)
        {
          switch(enumValue)
          {
          case DataOperation::NOT_SET:
            return {};
          case DataOperation::READ:
            return "READ";
          case DataOperation::WRITE:
            return "WRITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataOperationMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
