/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProtocolValue.h>
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
      namespace ProtocolValueMapper
      {

        static const int gre_HASH = HashingUtils::HashString("gre");


        ProtocolValue GetProtocolValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == gre_HASH)
          {
            return ProtocolValue::gre;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtocolValue>(hashCode);
          }

          return ProtocolValue::NOT_SET;
        }

        Aws::String GetNameForProtocolValue(ProtocolValue enumValue)
        {
          switch(enumValue)
          {
          case ProtocolValue::NOT_SET:
            return {};
          case ProtocolValue::gre:
            return "gre";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
