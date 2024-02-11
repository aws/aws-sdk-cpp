/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/UnlabeledEventsTreatment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace UnlabeledEventsTreatmentMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int FRAUD_HASH = HashingUtils::HashString("FRAUD");
        static const int LEGIT_HASH = HashingUtils::HashString("LEGIT");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        UnlabeledEventsTreatment GetUnlabeledEventsTreatmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return UnlabeledEventsTreatment::IGNORE;
          }
          else if (hashCode == FRAUD_HASH)
          {
            return UnlabeledEventsTreatment::FRAUD;
          }
          else if (hashCode == LEGIT_HASH)
          {
            return UnlabeledEventsTreatment::LEGIT;
          }
          else if (hashCode == AUTO_HASH)
          {
            return UnlabeledEventsTreatment::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnlabeledEventsTreatment>(hashCode);
          }

          return UnlabeledEventsTreatment::NOT_SET;
        }

        Aws::String GetNameForUnlabeledEventsTreatment(UnlabeledEventsTreatment enumValue)
        {
          switch(enumValue)
          {
          case UnlabeledEventsTreatment::NOT_SET:
            return {};
          case UnlabeledEventsTreatment::IGNORE:
            return "IGNORE";
          case UnlabeledEventsTreatment::FRAUD:
            return "FRAUD";
          case UnlabeledEventsTreatment::LEGIT:
            return "LEGIT";
          case UnlabeledEventsTreatment::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnlabeledEventsTreatmentMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
