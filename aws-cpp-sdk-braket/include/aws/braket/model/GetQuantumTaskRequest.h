/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Braket
{
namespace Model
{

  /**
   */
  class GetQuantumTaskRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API GetQuantumTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQuantumTask"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    /**
     * <p>the ARN of the task to retrieve.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const{ return m_quantumTaskArn; }

    /**
     * <p>the ARN of the task to retrieve.</p>
     */
    inline bool QuantumTaskArnHasBeenSet() const { return m_quantumTaskArnHasBeenSet; }

    /**
     * <p>the ARN of the task to retrieve.</p>
     */
    inline void SetQuantumTaskArn(const Aws::String& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = value; }

    /**
     * <p>the ARN of the task to retrieve.</p>
     */
    inline void SetQuantumTaskArn(Aws::String&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::move(value); }

    /**
     * <p>the ARN of the task to retrieve.</p>
     */
    inline void SetQuantumTaskArn(const char* value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn.assign(value); }

    /**
     * <p>the ARN of the task to retrieve.</p>
     */
    inline GetQuantumTaskRequest& WithQuantumTaskArn(const Aws::String& value) { SetQuantumTaskArn(value); return *this;}

    /**
     * <p>the ARN of the task to retrieve.</p>
     */
    inline GetQuantumTaskRequest& WithQuantumTaskArn(Aws::String&& value) { SetQuantumTaskArn(std::move(value)); return *this;}

    /**
     * <p>the ARN of the task to retrieve.</p>
     */
    inline GetQuantumTaskRequest& WithQuantumTaskArn(const char* value) { SetQuantumTaskArn(value); return *this;}

  private:

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
