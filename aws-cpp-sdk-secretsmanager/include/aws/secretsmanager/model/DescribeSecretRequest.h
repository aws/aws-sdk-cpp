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

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API DescribeSecretRequest : public SecretsManagerRequest
  {
  public:
    DescribeSecretRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSecret"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the secret whose details you want to retrieve. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The identifier of the secret whose details you want to retrieve. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The identifier of the secret whose details you want to retrieve. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The identifier of the secret whose details you want to retrieve. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The identifier of the secret whose details you want to retrieve. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline DescribeSecretRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The identifier of the secret whose details you want to retrieve. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline DescribeSecretRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the secret whose details you want to retrieve. You can
     * specify either the Amazon Resource Name (ARN) or the friendly name of the
     * secret.</p>
     */
    inline DescribeSecretRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
