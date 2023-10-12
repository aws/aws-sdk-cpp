/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EnvironmentHealth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace EnvironmentHealthMapper
      {

        static constexpr uint32_t Green_HASH = ConstExprHashingUtils::HashString("Green");
        static constexpr uint32_t Yellow_HASH = ConstExprHashingUtils::HashString("Yellow");
        static constexpr uint32_t Red_HASH = ConstExprHashingUtils::HashString("Red");
        static constexpr uint32_t Grey_HASH = ConstExprHashingUtils::HashString("Grey");


        EnvironmentHealth GetEnvironmentHealthForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Green_HASH)
          {
            return EnvironmentHealth::Green;
          }
          else if (hashCode == Yellow_HASH)
          {
            return EnvironmentHealth::Yellow;
          }
          else if (hashCode == Red_HASH)
          {
            return EnvironmentHealth::Red;
          }
          else if (hashCode == Grey_HASH)
          {
            return EnvironmentHealth::Grey;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentHealth>(hashCode);
          }

          return EnvironmentHealth::NOT_SET;
        }

        Aws::String GetNameForEnvironmentHealth(EnvironmentHealth enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentHealth::NOT_SET:
            return {};
          case EnvironmentHealth::Green:
            return "Green";
          case EnvironmentHealth::Yellow:
            return "Yellow";
          case EnvironmentHealth::Red:
            return "Red";
          case EnvironmentHealth::Grey:
            return "Grey";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentHealthMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
