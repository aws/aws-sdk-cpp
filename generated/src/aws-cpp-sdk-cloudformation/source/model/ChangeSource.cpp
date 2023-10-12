/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ChangeSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ChangeSourceMapper
      {

        static constexpr uint32_t ResourceReference_HASH = ConstExprHashingUtils::HashString("ResourceReference");
        static constexpr uint32_t ParameterReference_HASH = ConstExprHashingUtils::HashString("ParameterReference");
        static constexpr uint32_t ResourceAttribute_HASH = ConstExprHashingUtils::HashString("ResourceAttribute");
        static constexpr uint32_t DirectModification_HASH = ConstExprHashingUtils::HashString("DirectModification");
        static constexpr uint32_t Automatic_HASH = ConstExprHashingUtils::HashString("Automatic");


        ChangeSource GetChangeSourceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceReference_HASH)
          {
            return ChangeSource::ResourceReference;
          }
          else if (hashCode == ParameterReference_HASH)
          {
            return ChangeSource::ParameterReference;
          }
          else if (hashCode == ResourceAttribute_HASH)
          {
            return ChangeSource::ResourceAttribute;
          }
          else if (hashCode == DirectModification_HASH)
          {
            return ChangeSource::DirectModification;
          }
          else if (hashCode == Automatic_HASH)
          {
            return ChangeSource::Automatic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeSource>(hashCode);
          }

          return ChangeSource::NOT_SET;
        }

        Aws::String GetNameForChangeSource(ChangeSource enumValue)
        {
          switch(enumValue)
          {
          case ChangeSource::NOT_SET:
            return {};
          case ChangeSource::ResourceReference:
            return "ResourceReference";
          case ChangeSource::ParameterReference:
            return "ParameterReference";
          case ChangeSource::ResourceAttribute:
            return "ResourceAttribute";
          case ChangeSource::DirectModification:
            return "DirectModification";
          case ChangeSource::Automatic:
            return "Automatic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeSourceMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
