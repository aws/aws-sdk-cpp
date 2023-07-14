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

        static const int ResourceReference_HASH = HashingUtils::HashString("ResourceReference");
        static const int ParameterReference_HASH = HashingUtils::HashString("ParameterReference");
        static const int ResourceAttribute_HASH = HashingUtils::HashString("ResourceAttribute");
        static const int DirectModification_HASH = HashingUtils::HashString("DirectModification");
        static const int Automatic_HASH = HashingUtils::HashString("Automatic");


        ChangeSource GetChangeSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
