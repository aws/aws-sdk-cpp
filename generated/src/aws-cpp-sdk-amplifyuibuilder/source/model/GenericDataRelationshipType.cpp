/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/GenericDataRelationshipType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace GenericDataRelationshipTypeMapper
      {

        static constexpr uint32_t HAS_MANY_HASH = ConstExprHashingUtils::HashString("HAS_MANY");
        static constexpr uint32_t HAS_ONE_HASH = ConstExprHashingUtils::HashString("HAS_ONE");
        static constexpr uint32_t BELONGS_TO_HASH = ConstExprHashingUtils::HashString("BELONGS_TO");


        GenericDataRelationshipType GetGenericDataRelationshipTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HAS_MANY_HASH)
          {
            return GenericDataRelationshipType::HAS_MANY;
          }
          else if (hashCode == HAS_ONE_HASH)
          {
            return GenericDataRelationshipType::HAS_ONE;
          }
          else if (hashCode == BELONGS_TO_HASH)
          {
            return GenericDataRelationshipType::BELONGS_TO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GenericDataRelationshipType>(hashCode);
          }

          return GenericDataRelationshipType::NOT_SET;
        }

        Aws::String GetNameForGenericDataRelationshipType(GenericDataRelationshipType enumValue)
        {
          switch(enumValue)
          {
          case GenericDataRelationshipType::NOT_SET:
            return {};
          case GenericDataRelationshipType::HAS_MANY:
            return "HAS_MANY";
          case GenericDataRelationshipType::HAS_ONE:
            return "HAS_ONE";
          case GenericDataRelationshipType::BELONGS_TO:
            return "BELONGS_TO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GenericDataRelationshipTypeMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
