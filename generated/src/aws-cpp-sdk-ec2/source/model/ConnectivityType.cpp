/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ConnectivityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ConnectivityTypeMapper
      {

        static const int private__HASH = HashingUtils::HashString("private");
        static const int public__HASH = HashingUtils::HashString("public");


        ConnectivityType GetConnectivityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == private__HASH)
          {
            return ConnectivityType::private_;
          }
          else if (hashCode == public__HASH)
          {
            return ConnectivityType::public_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectivityType>(hashCode);
          }

          return ConnectivityType::NOT_SET;
        }

        Aws::String GetNameForConnectivityType(ConnectivityType enumValue)
        {
          switch(enumValue)
          {
          case ConnectivityType::NOT_SET:
            return {};
          case ConnectivityType::private_:
            return "private";
          case ConnectivityType::public_:
            return "public";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectivityTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
