/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EnvironmentInfoType.h>
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
      namespace EnvironmentInfoTypeMapper
      {

        static const int tail_HASH = HashingUtils::HashString("tail");
        static const int bundle_HASH = HashingUtils::HashString("bundle");


        EnvironmentInfoType GetEnvironmentInfoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == tail_HASH)
          {
            return EnvironmentInfoType::tail;
          }
          else if (hashCode == bundle_HASH)
          {
            return EnvironmentInfoType::bundle;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentInfoType>(hashCode);
          }

          return EnvironmentInfoType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentInfoType(EnvironmentInfoType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentInfoType::tail:
            return "tail";
          case EnvironmentInfoType::bundle:
            return "bundle";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentInfoTypeMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
