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
#include <aws/codedeploy/model/RevisionLocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace RevisionLocationTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int GitHub_HASH = HashingUtils::HashString("GitHub");


        RevisionLocationType GetRevisionLocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return RevisionLocationType::S3;
          }
          else if (hashCode == GitHub_HASH)
          {
            return RevisionLocationType::GitHub;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RevisionLocationType>(hashCode);
          }

          return RevisionLocationType::NOT_SET;
        }

        Aws::String GetNameForRevisionLocationType(RevisionLocationType enumValue)
        {
          switch(enumValue)
          {
          case RevisionLocationType::S3:
            return "S3";
          case RevisionLocationType::GitHub:
            return "GitHub";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RevisionLocationTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
