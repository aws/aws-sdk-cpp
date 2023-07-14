/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vc3Class.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Vc3ClassMapper
      {

        static const int CLASS_145_8BIT_HASH = HashingUtils::HashString("CLASS_145_8BIT");
        static const int CLASS_220_8BIT_HASH = HashingUtils::HashString("CLASS_220_8BIT");
        static const int CLASS_220_10BIT_HASH = HashingUtils::HashString("CLASS_220_10BIT");


        Vc3Class GetVc3ClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLASS_145_8BIT_HASH)
          {
            return Vc3Class::CLASS_145_8BIT;
          }
          else if (hashCode == CLASS_220_8BIT_HASH)
          {
            return Vc3Class::CLASS_220_8BIT;
          }
          else if (hashCode == CLASS_220_10BIT_HASH)
          {
            return Vc3Class::CLASS_220_10BIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vc3Class>(hashCode);
          }

          return Vc3Class::NOT_SET;
        }

        Aws::String GetNameForVc3Class(Vc3Class enumValue)
        {
          switch(enumValue)
          {
          case Vc3Class::CLASS_145_8BIT:
            return "CLASS_145_8BIT";
          case Vc3Class::CLASS_220_8BIT:
            return "CLASS_220_8BIT";
          case Vc3Class::CLASS_220_10BIT:
            return "CLASS_220_10BIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Vc3ClassMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
