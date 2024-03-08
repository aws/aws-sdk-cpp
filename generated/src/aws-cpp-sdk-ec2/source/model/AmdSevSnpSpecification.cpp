/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AmdSevSnpSpecification.h>
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
      namespace AmdSevSnpSpecificationMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        AmdSevSnpSpecification GetAmdSevSnpSpecificationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return AmdSevSnpSpecification::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return AmdSevSnpSpecification::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmdSevSnpSpecification>(hashCode);
          }

          return AmdSevSnpSpecification::NOT_SET;
        }

        Aws::String GetNameForAmdSevSnpSpecification(AmdSevSnpSpecification enumValue)
        {
          switch(enumValue)
          {
          case AmdSevSnpSpecification::NOT_SET:
            return {};
          case AmdSevSnpSpecification::enabled:
            return "enabled";
          case AmdSevSnpSpecification::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AmdSevSnpSpecificationMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
