/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Braket
{
namespace Model
{

  /**
   */
  class CancelQuantumTaskRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API CancelQuantumTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelQuantumTask"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    /**
     * <p>The client token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CancelQuantumTaskRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CancelQuantumTaskRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline CancelQuantumTaskRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN of the task to cancel.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const{ return m_quantumTaskArn; }

    /**
     * <p>The ARN of the task to cancel.</p>
     */
    inline bool QuantumTaskArnHasBeenSet() const { return m_quantumTaskArnHasBeenSet; }

    /**
     * <p>The ARN of the task to cancel.</p>
     */
    inline void SetQuantumTaskArn(const Aws::String& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = value; }

    /**
     * <p>The ARN of the task to cancel.</p>
     */
    inline void SetQuantumTaskArn(Aws::String&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::move(value); }

    /**
     * <p>The ARN of the task to cancel.</p>
     */
    inline void SetQuantumTaskArn(const char* value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn.assign(value); }

    /**
     * <p>The ARN of the task to cancel.</p>
     */
    inline CancelQuantumTaskRequest& WithQuantumTaskArn(const Aws::String& value) { SetQuantumTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task to cancel.</p>
     */
    inline CancelQuantumTaskRequest& WithQuantumTaskArn(Aws::String&& value) { SetQuantumTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task to cancel.</p>
     */
    inline CancelQuantumTaskRequest& WithQuantumTaskArn(const char* value) { SetQuantumTaskArn(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
