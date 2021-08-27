/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/RelationshipType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace RelationshipTypeMapper
      {

        static const int VALUE_HASH = HashingUtils::HashString("VALUE");
        static const int CHILD_HASH = HashingUtils::HashString("CHILD");
        static const int COMPLEX_FEATURES_HASH = HashingUtils::HashString("COMPLEX_FEATURES");


        RelationshipType GetRelationshipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALUE_HASH)
          {
            return RelationshipType::VALUE;
          }
          else if (hashCode == CHILD_HASH)
          {
            return RelationshipType::CHILD;
          }
          else if (hashCode == COMPLEX_FEATURES_HASH)
          {
            return RelationshipType::COMPLEX_FEATURES;
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
          case RelationshipType::VALUE:
            return "VALUE";
          case RelationshipType::CHILD:
            return "CHILD";
          case RelationshipType::COMPLEX_FEATURES:
            return "COMPLEX_FEATURES";
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
  } // namespace Textract
} // namespace Aws
