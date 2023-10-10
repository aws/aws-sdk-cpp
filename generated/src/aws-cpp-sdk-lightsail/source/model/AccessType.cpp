/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace AccessTypeMapper
      {

        static const int public__HASH = HashingUtils::HashString("public");
        static const int private__HASH = HashingUtils::HashString("private");


        AccessType GetAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == public__HASH)
          {
            return AccessType::public_;
          }
          else if (hashCode == private__HASH)
          {
            return AccessType::private_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessType>(hashCode);
          }

          return AccessType::NOT_SET;
        }

        Aws::String GetNameForAccessType(AccessType enumValue)
        {
          switch(enumValue)
          {
          case AccessType::NOT_SET:
            return {};
          case AccessType::public_:
            return "public";
          case AccessType::private_:
            return "private";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
