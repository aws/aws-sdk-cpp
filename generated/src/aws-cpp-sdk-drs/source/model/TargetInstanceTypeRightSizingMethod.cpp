/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/TargetInstanceTypeRightSizingMethod.h>
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
      namespace TargetInstanceTypeRightSizingMethodMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int IN_AWS_HASH = HashingUtils::HashString("IN_AWS");


        TargetInstanceTypeRightSizingMethod GetTargetInstanceTypeRightSizingMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TargetInstanceTypeRightSizingMethod::NONE;
          }
          else if (hashCode == BASIC_HASH)
          {
            return TargetInstanceTypeRightSizingMethod::BASIC;
          }
          else if (hashCode == IN_AWS_HASH)
          {
            return TargetInstanceTypeRightSizingMethod::IN_AWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetInstanceTypeRightSizingMethod>(hashCode);
          }

          return TargetInstanceTypeRightSizingMethod::NOT_SET;
        }

        Aws::String GetNameForTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod enumValue)
        {
          switch(enumValue)
          {
          case TargetInstanceTypeRightSizingMethod::NOT_SET:
            return {};
          case TargetInstanceTypeRightSizingMethod::NONE:
            return "NONE";
          case TargetInstanceTypeRightSizingMethod::BASIC:
            return "BASIC";
          case TargetInstanceTypeRightSizingMethod::IN_AWS:
            return "IN_AWS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetInstanceTypeRightSizingMethodMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
