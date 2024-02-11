/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/Connectivity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace ConnectivityMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        Connectivity GetConnectivityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return Connectivity::PUBLIC_;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return Connectivity::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Connectivity>(hashCode);
          }

          return Connectivity::NOT_SET;
        }

        Aws::String GetNameForConnectivity(Connectivity enumValue)
        {
          switch(enumValue)
          {
          case Connectivity::NOT_SET:
            return {};
          case Connectivity::PUBLIC_:
            return "PUBLIC";
          case Connectivity::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectivityMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
