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

#include <aws/mediaconvert/model/QueueListBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace QueueListByMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int CREATION_DATE_HASH = HashingUtils::HashString("CREATION_DATE");


        QueueListBy GetQueueListByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return QueueListBy::NAME;
          }
          else if (hashCode == CREATION_DATE_HASH)
          {
            return QueueListBy::CREATION_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueListBy>(hashCode);
          }

          return QueueListBy::NOT_SET;
        }

        Aws::String GetNameForQueueListBy(QueueListBy enumValue)
        {
          switch(enumValue)
          {
          case QueueListBy::NAME:
            return "NAME";
          case QueueListBy::CREATION_DATE:
            return "CREATION_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueListByMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
