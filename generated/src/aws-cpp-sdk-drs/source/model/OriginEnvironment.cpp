/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/OriginEnvironment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace OriginEnvironmentMapper
      {

        static const int ON_PREMISES_HASH = HashingUtils::HashString("ON_PREMISES");
        static const int AWS_HASH = HashingUtils::HashString("AWS");


        OriginEnvironment GetOriginEnvironmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_PREMISES_HASH)
          {
            return OriginEnvironment::ON_PREMISES;
          }
          else if (hashCode == AWS_HASH)
          {
            return OriginEnvironment::AWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginEnvironment>(hashCode);
          }

          return OriginEnvironment::NOT_SET;
        }

        Aws::String GetNameForOriginEnvironment(OriginEnvironment enumValue)
        {
          switch(enumValue)
          {
          case OriginEnvironment::ON_PREMISES:
            return "ON_PREMISES";
          case OriginEnvironment::AWS:
            return "AWS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginEnvironmentMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
