/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/EvaluationMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace EvaluationMethodMapper
      {

        static const int BATCH_HASH = HashingUtils::HashString("BATCH");
        static const int SERIAL_HASH = HashingUtils::HashString("SERIAL");


        EvaluationMethod GetEvaluationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BATCH_HASH)
          {
            return EvaluationMethod::BATCH;
          }
          else if (hashCode == SERIAL_HASH)
          {
            return EvaluationMethod::SERIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationMethod>(hashCode);
          }

          return EvaluationMethod::NOT_SET;
        }

        Aws::String GetNameForEvaluationMethod(EvaluationMethod enumValue)
        {
          switch(enumValue)
          {
          case EvaluationMethod::BATCH:
            return "BATCH";
          case EvaluationMethod::SERIAL:
            return "SERIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationMethodMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
