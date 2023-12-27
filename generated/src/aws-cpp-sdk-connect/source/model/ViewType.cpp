/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ViewType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ViewTypeMapper
      {

        static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");
        static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");


        ViewType GetViewTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_MANAGED_HASH)
          {
            return ViewType::CUSTOMER_MANAGED;
          }
          else if (hashCode == AWS_MANAGED_HASH)
          {
            return ViewType::AWS_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViewType>(hashCode);
          }

          return ViewType::NOT_SET;
        }

        Aws::String GetNameForViewType(ViewType enumValue)
        {
          switch(enumValue)
          {
          case ViewType::NOT_SET:
            return {};
          case ViewType::CUSTOMER_MANAGED:
            return "CUSTOMER_MANAGED";
          case ViewType::AWS_MANAGED:
            return "AWS_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViewTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
