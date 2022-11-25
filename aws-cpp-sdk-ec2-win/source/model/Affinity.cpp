/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Affinity.h>
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
      namespace AffinityMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int host_HASH = HashingUtils::HashString("host");


        Affinity GetAffinityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return Affinity::default_;
          }
          else if (hashCode == host_HASH)
          {
            return Affinity::host;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Affinity>(hashCode);
          }

          return Affinity::NOT_SET;
        }

        Aws::String GetNameForAffinity(Affinity enumValue)
        {
          switch(enumValue)
          {
          case Affinity::default_:
            return "default";
          case Affinity::host:
            return "host";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AffinityMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
