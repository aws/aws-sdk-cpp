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

#include <aws/kendra/model/IndexEdition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace IndexEditionMapper
      {

        static const int DEVELOPER_EDITION_HASH = HashingUtils::HashString("DEVELOPER_EDITION");
        static const int ENTERPRISE_EDITION_HASH = HashingUtils::HashString("ENTERPRISE_EDITION");


        IndexEdition GetIndexEditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVELOPER_EDITION_HASH)
          {
            return IndexEdition::DEVELOPER_EDITION;
          }
          else if (hashCode == ENTERPRISE_EDITION_HASH)
          {
            return IndexEdition::ENTERPRISE_EDITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndexEdition>(hashCode);
          }

          return IndexEdition::NOT_SET;
        }

        Aws::String GetNameForIndexEdition(IndexEdition enumValue)
        {
          switch(enumValue)
          {
          case IndexEdition::DEVELOPER_EDITION:
            return "DEVELOPER_EDITION";
          case IndexEdition::ENTERPRISE_EDITION:
            return "ENTERPRISE_EDITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndexEditionMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
