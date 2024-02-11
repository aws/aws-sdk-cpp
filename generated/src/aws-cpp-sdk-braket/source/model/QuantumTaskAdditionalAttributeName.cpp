/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/QuantumTaskAdditionalAttributeName.h>
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
      namespace QuantumTaskAdditionalAttributeNameMapper
      {

        static const int QueueInfo_HASH = HashingUtils::HashString("QueueInfo");


        QuantumTaskAdditionalAttributeName GetQuantumTaskAdditionalAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QueueInfo_HASH)
          {
            return QuantumTaskAdditionalAttributeName::QueueInfo;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuantumTaskAdditionalAttributeName>(hashCode);
          }

          return QuantumTaskAdditionalAttributeName::NOT_SET;
        }

        Aws::String GetNameForQuantumTaskAdditionalAttributeName(QuantumTaskAdditionalAttributeName enumValue)
        {
          switch(enumValue)
          {
          case QuantumTaskAdditionalAttributeName::NOT_SET:
            return {};
          case QuantumTaskAdditionalAttributeName::QueueInfo:
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

      } // namespace QuantumTaskAdditionalAttributeNameMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
