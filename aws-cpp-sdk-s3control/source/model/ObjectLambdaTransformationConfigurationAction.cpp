/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaTransformationConfigurationAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace ObjectLambdaTransformationConfigurationActionMapper
      {

        static const int GetObject_HASH = HashingUtils::HashString("GetObject");
        static const int HeadObject_HASH = HashingUtils::HashString("HeadObject");
        static const int ListObjects_HASH = HashingUtils::HashString("ListObjects");
        static const int ListObjectsV2_HASH = HashingUtils::HashString("ListObjectsV2");


        ObjectLambdaTransformationConfigurationAction GetObjectLambdaTransformationConfigurationActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GetObject_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::GetObject;
          }
          else if (hashCode == HeadObject_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::HeadObject;
          }
          else if (hashCode == ListObjects_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::ListObjects;
          }
          else if (hashCode == ListObjectsV2_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::ListObjectsV2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectLambdaTransformationConfigurationAction>(hashCode);
          }

          return ObjectLambdaTransformationConfigurationAction::NOT_SET;
        }

        Aws::String GetNameForObjectLambdaTransformationConfigurationAction(ObjectLambdaTransformationConfigurationAction enumValue)
        {
          switch(enumValue)
          {
          case ObjectLambdaTransformationConfigurationAction::GetObject:
            return "GetObject";
          case ObjectLambdaTransformationConfigurationAction::HeadObject:
            return "HeadObject";
          case ObjectLambdaTransformationConfigurationAction::ListObjects:
            return "ListObjects";
          case ObjectLambdaTransformationConfigurationAction::ListObjectsV2:
            return "ListObjectsV2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectLambdaTransformationConfigurationActionMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
