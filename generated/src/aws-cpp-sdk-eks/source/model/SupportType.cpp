/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/SupportType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace SupportTypeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int EXTENDED_HASH = HashingUtils::HashString("EXTENDED");


        SupportType GetSupportTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return SupportType::STANDARD;
          }
          else if (hashCode == EXTENDED_HASH)
          {
            return SupportType::EXTENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportType>(hashCode);
          }

          return SupportType::NOT_SET;
        }

        Aws::String GetNameForSupportType(SupportType enumValue)
        {
          switch(enumValue)
          {
          case SupportType::NOT_SET:
            return {};
          case SupportType::STANDARD:
            return "STANDARD";
          case SupportType::EXTENDED:
            return "EXTENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
