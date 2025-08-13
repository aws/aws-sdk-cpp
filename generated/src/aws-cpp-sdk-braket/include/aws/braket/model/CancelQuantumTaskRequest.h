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
    AWS_BRAKET_API CancelQuantumTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelQuantumTask"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the quantum task to cancel.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const { return m_quantumTaskArn; }
    inline bool QuantumTaskArnHasBeenSet() const { return m_quantumTaskArnHasBeenSet; }
    template<typename QuantumTaskArnT = Aws::String>
    void SetQuantumTaskArn(QuantumTaskArnT&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::forward<QuantumTaskArnT>(value); }
    template<typename QuantumTaskArnT = Aws::String>
    CancelQuantumTaskRequest& WithQuantumTaskArn(QuantumTaskArnT&& value) { SetQuantumTaskArn(std::forward<QuantumTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token associated with the cancellation request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CancelQuantumTaskRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
