/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/RelationshipType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace RelationshipTypeMapper
      {

        static const int CAUSE_OF_INPUT_ANOMALY_GROUP_HASH = HashingUtils::HashString("CAUSE_OF_INPUT_ANOMALY_GROUP");
        static const int EFFECT_OF_INPUT_ANOMALY_GROUP_HASH = HashingUtils::HashString("EFFECT_OF_INPUT_ANOMALY_GROUP");


        RelationshipType GetRelationshipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CAUSE_OF_INPUT_ANOMALY_GROUP_HASH)
          {
            return RelationshipType::CAUSE_OF_INPUT_ANOMALY_GROUP;
          }
          else if (hashCode == EFFECT_OF_INPUT_ANOMALY_GROUP_HASH)
          {
            return RelationshipType::EFFECT_OF_INPUT_ANOMALY_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelationshipType>(hashCode);
          }

          return RelationshipType::NOT_SET;
        }

        Aws::String GetNameForRelationshipType(RelationshipType enumValue)
        {
          switch(enumValue)
          {
          case RelationshipType::NOT_SET:
            return {};
          case RelationshipType::CAUSE_OF_INPUT_ANOMALY_GROUP:
            return "CAUSE_OF_INPUT_ANOMALY_GROUP";
          case RelationshipType::EFFECT_OF_INPUT_ANOMALY_GROUP:
            return "EFFECT_OF_INPUT_ANOMALY_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationshipTypeMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
