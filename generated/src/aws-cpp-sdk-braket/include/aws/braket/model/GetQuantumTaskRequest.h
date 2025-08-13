/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/QuantumTaskAdditionalAttributeName.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Braket
{
namespace Model
{

  /**
   */
  class GetQuantumTaskRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API GetQuantumTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQuantumTask"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;

    AWS_BRAKET_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARN of the quantum task to retrieve.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const { return m_quantumTaskArn; }
    inline bool QuantumTaskArnHasBeenSet() const { return m_quantumTaskArnHasBeenSet; }
    template<typename QuantumTaskArnT = Aws::String>
    void SetQuantumTaskArn(QuantumTaskArnT&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::forward<QuantumTaskArnT>(value); }
    template<typename QuantumTaskArnT = Aws::String>
    GetQuantumTaskRequest& WithQuantumTaskArn(QuantumTaskArnT&& value) { SetQuantumTaskArn(std::forward<QuantumTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of attributes to return additional information for. Only the QueueInfo
     * additional attribute name is currently supported.</p>
     */
    inline const Aws::Vector<QuantumTaskAdditionalAttributeName>& GetAdditionalAttributeNames() const { return m_additionalAttributeNames; }
    inline bool AdditionalAttributeNamesHasBeenSet() const { return m_additionalAttributeNamesHasBeenSet; }
    template<typename AdditionalAttributeNamesT = Aws::Vector<QuantumTaskAdditionalAttributeName>>
    void SetAdditionalAttributeNames(AdditionalAttributeNamesT&& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames = std::forward<AdditionalAttributeNamesT>(value); }
    template<typename AdditionalAttributeNamesT = Aws::Vector<QuantumTaskAdditionalAttributeName>>
    GetQuantumTaskRequest& WithAdditionalAttributeNames(AdditionalAttributeNamesT&& value) { SetAdditionalAttributeNames(std::forward<AdditionalAttributeNamesT>(value)); return *this;}
    inline GetQuantumTaskRequest& AddAdditionalAttributeNames(QuantumTaskAdditionalAttributeName value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;

    Aws::Vector<QuantumTaskAdditionalAttributeName> m_additionalAttributeNames;
    bool m_additionalAttributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
