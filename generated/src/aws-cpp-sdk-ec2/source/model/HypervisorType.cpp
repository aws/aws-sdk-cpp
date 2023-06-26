/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HypervisorType.h>
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
      namespace HypervisorTypeMapper
      {

        static const int ovm_HASH = HashingUtils::HashString("ovm");
        static const int xen_HASH = HashingUtils::HashString("xen");


        HypervisorType GetHypervisorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ovm_HASH)
          {
            return HypervisorType::ovm;
          }
          else if (hashCode == xen_HASH)
          {
            return HypervisorType::xen;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HypervisorType>(hashCode);
          }

          return HypervisorType::NOT_SET;
        }

        Aws::String GetNameForHypervisorType(HypervisorType enumValue)
        {
          switch(enumValue)
          {
          case HypervisorType::ovm:
            return "ovm";
          case HypervisorType::xen:
            return "xen";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HypervisorTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
