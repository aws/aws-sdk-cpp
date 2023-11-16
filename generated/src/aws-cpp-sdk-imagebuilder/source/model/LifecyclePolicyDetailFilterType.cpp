/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyDetailFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace LifecyclePolicyDetailFilterTypeMapper
      {

        static const int AGE_HASH = HashingUtils::HashString("AGE");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");


        LifecyclePolicyDetailFilterType GetLifecyclePolicyDetailFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGE_HASH)
          {
            return LifecyclePolicyDetailFilterType::AGE;
          }
          else if (hashCode == COUNT_HASH)
          {
            return LifecyclePolicyDetailFilterType::COUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecyclePolicyDetailFilterType>(hashCode);
          }

          return LifecyclePolicyDetailFilterType::NOT_SET;
        }

        Aws::String GetNameForLifecyclePolicyDetailFilterType(LifecyclePolicyDetailFilterType enumValue)
        {
          switch(enumValue)
          {
          case LifecyclePolicyDetailFilterType::NOT_SET:
            return {};
          case LifecyclePolicyDetailFilterType::AGE:
            return "AGE";
          case LifecyclePolicyDetailFilterType::COUNT:
            return "COUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecyclePolicyDetailFilterTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
