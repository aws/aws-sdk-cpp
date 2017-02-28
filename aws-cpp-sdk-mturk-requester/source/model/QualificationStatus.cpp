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
#include <aws/mturk-requester/model/QualificationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace QualificationStatusMapper
      {

        static const int Granted_HASH = HashingUtils::HashString("Granted");
        static const int Revoked_HASH = HashingUtils::HashString("Revoked");


        QualificationStatus GetQualificationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Granted_HASH)
          {
            return QualificationStatus::Granted;
          }
          else if (hashCode == Revoked_HASH)
          {
            return QualificationStatus::Revoked;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QualificationStatus>(hashCode);
          }

          return QualificationStatus::NOT_SET;
        }

        Aws::String GetNameForQualificationStatus(QualificationStatus enumValue)
        {
          switch(enumValue)
          {
          case QualificationStatus::Granted:
            return "Granted";
          case QualificationStatus::Revoked:
            return "Revoked";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace QualificationStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
