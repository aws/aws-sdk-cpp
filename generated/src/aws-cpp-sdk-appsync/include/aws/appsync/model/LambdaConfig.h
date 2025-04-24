/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/InvokeType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>The configuration for a Lambda data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/LambdaConfig">AWS
   * API Reference</a></p>
   */
  class LambdaConfig
  {
  public:
    AWS_APPSYNC_API LambdaConfig() = default;
    AWS_APPSYNC_API LambdaConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API LambdaConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The invocation type for a Lambda data source.</p>
     */
    inline InvokeType GetInvokeType() const { return m_invokeType; }
    inline bool InvokeTypeHasBeenSet() const { return m_invokeTypeHasBeenSet; }
    inline void SetInvokeType(InvokeType value) { m_invokeTypeHasBeenSet = true; m_invokeType = value; }
    inline LambdaConfig& WithInvokeType(InvokeType value) { SetInvokeType(value); return *this;}
    ///@}
  private:

    InvokeType m_invokeType{InvokeType::NOT_SET};
    bool m_invokeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
