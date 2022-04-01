/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/FailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCatalog
  {
    namespace Model
    {
      namespace FailureCodeMapper
      {

        static const int CLIENT_ERROR_HASH = HashingUtils::HashString("CLIENT_ERROR");
        static const int SERVER_FAULT_HASH = HashingUtils::HashString("SERVER_FAULT");


        FailureCode GetFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLIENT_ERROR_HASH)
          {
            return FailureCode::CLIENT_ERROR;
          }
          else if (hashCode == SERVER_FAULT_HASH)
          {
            return FailureCode::SERVER_FAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureCode>(hashCode);
          }

          return FailureCode::NOT_SET;
        }

        Aws::String GetNameForFailureCode(FailureCode enumValue)
        {
          switch(enumValue)
          {
          case FailureCode::CLIENT_ERROR:
            return "CLIENT_ERROR";
          case FailureCode::SERVER_FAULT:
            return "SERVER_FAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureCodeMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
