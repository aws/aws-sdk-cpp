/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes an Lambda data source configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/LambdaDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class LambdaDataSourceConfig
  {
  public:
    AWS_APPSYNC_API LambdaDataSourceConfig();
    AWS_APPSYNC_API LambdaDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API LambdaDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function.</p>
     */
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function.</p>
     */
    inline LambdaDataSourceConfig& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function.</p>
     */
    inline LambdaDataSourceConfig& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function.</p>
     */
    inline LambdaDataSourceConfig& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}

  private:

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
