/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InitializationType.h>
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
      namespace InitializationTypeMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int provisioned_rate_HASH = HashingUtils::HashString("provisioned-rate");


        InitializationType GetInitializationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return InitializationType::default_;
          }
          else if (hashCode == provisioned_rate_HASH)
          {
            return InitializationType::provisioned_rate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InitializationType>(hashCode);
          }

          return InitializationType::NOT_SET;
        }

        Aws::String GetNameForInitializationType(InitializationType enumValue)
        {
          switch(enumValue)
          {
          case InitializationType::NOT_SET:
            return {};
          case InitializationType::default_:
            return "default";
          case InitializationType::provisioned_rate:
            return "provisioned-rate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InitializationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
