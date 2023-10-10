/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ChangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace ChangeTypeMapper
      {

        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        ChangeType GetChangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUT_HASH)
          {
            return ChangeType::PUT;
          }
          else if (hashCode == DELETE__HASH)
          {
            return ChangeType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeType>(hashCode);
          }

          return ChangeType::NOT_SET;
        }

        Aws::String GetNameForChangeType(ChangeType enumValue)
        {
          switch(enumValue)
          {
          case ChangeType::NOT_SET:
            return {};
          case ChangeType::PUT:
            return "PUT";
          case ChangeType::DELETE_:
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

      } // namespace ChangeTypeMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
