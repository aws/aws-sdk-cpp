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


        ObjectLambdaTransformationConfigurationAction GetObjectLambdaTransformationConfigurationActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GetObject_HASH)
          {
            return ObjectLambdaTransformationConfigurationAction::GetObject;
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
