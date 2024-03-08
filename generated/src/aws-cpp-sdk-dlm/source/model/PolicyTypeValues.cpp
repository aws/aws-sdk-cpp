/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/PolicyTypeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace PolicyTypeValuesMapper
      {

        static const int EBS_SNAPSHOT_MANAGEMENT_HASH = HashingUtils::HashString("EBS_SNAPSHOT_MANAGEMENT");
        static const int IMAGE_MANAGEMENT_HASH = HashingUtils::HashString("IMAGE_MANAGEMENT");
        static const int EVENT_BASED_POLICY_HASH = HashingUtils::HashString("EVENT_BASED_POLICY");


        PolicyTypeValues GetPolicyTypeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EBS_SNAPSHOT_MANAGEMENT_HASH)
          {
            return PolicyTypeValues::EBS_SNAPSHOT_MANAGEMENT;
          }
          else if (hashCode == IMAGE_MANAGEMENT_HASH)
          {
            return PolicyTypeValues::IMAGE_MANAGEMENT;
          }
          else if (hashCode == EVENT_BASED_POLICY_HASH)
          {
            return PolicyTypeValues::EVENT_BASED_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyTypeValues>(hashCode);
          }

          return PolicyTypeValues::NOT_SET;
        }

        Aws::String GetNameForPolicyTypeValues(PolicyTypeValues enumValue)
        {
          switch(enumValue)
          {
          case PolicyTypeValues::NOT_SET:
            return {};
          case PolicyTypeValues::EBS_SNAPSHOT_MANAGEMENT:
            return "EBS_SNAPSHOT_MANAGEMENT";
          case PolicyTypeValues::IMAGE_MANAGEMENT:
            return "IMAGE_MANAGEMENT";
          case PolicyTypeValues::EVENT_BASED_POLICY:
            return "EVENT_BASED_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyTypeValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
