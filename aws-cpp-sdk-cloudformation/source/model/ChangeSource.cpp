/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

            return "";
          }
        }

      } // namespace ChangeSourceMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
