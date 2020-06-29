/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AppTypeMapper
      {

        static const int JupyterServer_HASH = HashingUtils::HashString("JupyterServer");
        static const int KernelGateway_HASH = HashingUtils::HashString("KernelGateway");
        static const int TensorBoard_HASH = HashingUtils::HashString("TensorBoard");


        AppType GetAppTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JupyterServer_HASH)
          {
            return AppType::JupyterServer;
          }
          else if (hashCode == KernelGateway_HASH)
          {
            return AppType::KernelGateway;
          }
          else if (hashCode == TensorBoard_HASH)
          {
            return AppType::TensorBoard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppType>(hashCode);
          }

          return AppType::NOT_SET;
        }

        Aws::String GetNameForAppType(AppType enumValue)
        {
          switch(enumValue)
          {
          case AppType::JupyterServer:
            return "JupyterServer";
          case AppType::KernelGateway:
            return "KernelGateway";
          case AppType::TensorBoard:
            return "TensorBoard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
