/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/AmplitudeConnectorOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace AmplitudeConnectorOperatorMapper
      {

        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");


        AmplitudeConnectorOperator GetAmplitudeConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BETWEEN_HASH)
          {
            return AmplitudeConnectorOperator::BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmplitudeConnectorOperator>(hashCode);
          }

          return AmplitudeConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForAmplitudeConnectorOperator(AmplitudeConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case AmplitudeConnectorOperator::BETWEEN:
            return "BETWEEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AmplitudeConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
