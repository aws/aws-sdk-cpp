/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/HybridJobAdditionalAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace HybridJobAdditionalAttributeNameMapper
      {

        static const int QueueInfo_HASH = HashingUtils::HashString("QueueInfo");


        HybridJobAdditionalAttributeName GetHybridJobAdditionalAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QueueInfo_HASH)
          {
            return HybridJobAdditionalAttributeName::QueueInfo;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HybridJobAdditionalAttributeName>(hashCode);
          }

          return HybridJobAdditionalAttributeName::NOT_SET;
        }

        Aws::String GetNameForHybridJobAdditionalAttributeName(HybridJobAdditionalAttributeName enumValue)
        {
          switch(enumValue)
          {
          case HybridJobAdditionalAttributeName::NOT_SET:
            return {};
          case HybridJobAdditionalAttributeName::QueueInfo:
            return "QueueInfo";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HybridJobAdditionalAttributeNameMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
