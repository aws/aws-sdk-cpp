/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/As2Transport.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace As2TransportMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");


        As2Transport GetAs2TransportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return As2Transport::HTTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<As2Transport>(hashCode);
          }

          return As2Transport::NOT_SET;
        }

        Aws::String GetNameForAs2Transport(As2Transport enumValue)
        {
          switch(enumValue)
          {
          case As2Transport::NOT_SET:
            return {};
          case As2Transport::HTTP:
            return "HTTP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace As2TransportMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
