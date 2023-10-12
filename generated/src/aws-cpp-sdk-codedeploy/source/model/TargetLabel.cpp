/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TargetLabel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace TargetLabelMapper
      {

        static constexpr uint32_t Blue_HASH = ConstExprHashingUtils::HashString("Blue");
        static constexpr uint32_t Green_HASH = ConstExprHashingUtils::HashString("Green");


        TargetLabel GetTargetLabelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Blue_HASH)
          {
            return TargetLabel::Blue;
          }
          else if (hashCode == Green_HASH)
          {
            return TargetLabel::Green;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetLabel>(hashCode);
          }

          return TargetLabel::NOT_SET;
        }

        Aws::String GetNameForTargetLabel(TargetLabel enumValue)
        {
          switch(enumValue)
          {
          case TargetLabel::NOT_SET:
            return {};
          case TargetLabel::Blue:
            return "Blue";
          case TargetLabel::Green:
            return "Green";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetLabelMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
