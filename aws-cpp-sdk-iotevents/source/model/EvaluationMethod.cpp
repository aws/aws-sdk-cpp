/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
