/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/InterpolationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace InterpolationTypeMapper
      {

        static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");


        InterpolationType GetInterpolationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINEAR_HASH)
          {
            return InterpolationType::LINEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InterpolationType>(hashCode);
          }

          return InterpolationType::NOT_SET;
        }

        Aws::String GetNameForInterpolationType(InterpolationType enumValue)
        {
          switch(enumValue)
          {
          case InterpolationType::NOT_SET:
            return {};
          case InterpolationType::LINEAR:
            return "LINEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InterpolationTypeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
