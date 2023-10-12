/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/EnvironmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Cloud9
  {
    namespace Model
    {
      namespace EnvironmentTypeMapper
      {

        static constexpr uint32_t ssh_HASH = ConstExprHashingUtils::HashString("ssh");
        static constexpr uint32_t ec2_HASH = ConstExprHashingUtils::HashString("ec2");


        EnvironmentType GetEnvironmentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ssh_HASH)
          {
            return EnvironmentType::ssh;
          }
          else if (hashCode == ec2_HASH)
          {
            return EnvironmentType::ec2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentType>(hashCode);
          }

          return EnvironmentType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentType(EnvironmentType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentType::NOT_SET:
            return {};
          case EnvironmentType::ssh:
            return "ssh";
          case EnvironmentType::ec2:
            return "ec2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentTypeMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
