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
   * <p>The <code>LambdaConflictHandlerConfig</code> object when configuring
   * <code>LAMBDA</code> as the Conflict Handler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/LambdaConflictHandlerConfig">AWS
   * API Reference</a></p>
   */
  class LambdaConflictHandlerConfig
  {
  public:
    AWS_APPSYNC_API LambdaConflictHandlerConfig();
    AWS_APPSYNC_API LambdaConflictHandlerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API LambdaConflictHandlerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function to use as the Conflict
     * Handler.</p>
     */
    inline const Aws::String& GetLambdaConflictHandlerArn() const{ return m_lambdaConflictHandlerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function to use as the Conflict
     * Handler.</p>
     */
    inline bool LambdaConflictHandlerArnHasBeenSet() const { return m_lambdaConflictHandlerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function to use as the Conflict
     * Handler.</p>
     */
    inline void SetLambdaConflictHandlerArn(const Aws::String& value) { m_lambdaConflictHandlerArnHasBeenSet = true; m_lambdaConflictHandlerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function to use as the Conflict
     * Handler.</p>
     */
    inline void SetLambdaConflictHandlerArn(Aws::String&& value) { m_lambdaConflictHandlerArnHasBeenSet = true; m_lambdaConflictHandlerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function to use as the Conflict
     * Handler.</p>
     */
    inline void SetLambdaConflictHandlerArn(const char* value) { m_lambdaConflictHandlerArnHasBeenSet = true; m_lambdaConflictHandlerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function to use as the Conflict
     * Handler.</p>
     */
    inline LambdaConflictHandlerConfig& WithLambdaConflictHandlerArn(const Aws::String& value) { SetLambdaConflictHandlerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function to use as the Conflict
     * Handler.</p>
     */
    inline LambdaConflictHandlerConfig& WithLambdaConflictHandlerArn(Aws::String&& value) { SetLambdaConflictHandlerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function to use as the Conflict
     * Handler.</p>
     */
    inline LambdaConflictHandlerConfig& WithLambdaConflictHandlerArn(const char* value) { SetLambdaConflictHandlerArn(value); return *this;}

  private:

    Aws::String m_lambdaConflictHandlerArn;
    bool m_lambdaConflictHandlerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
