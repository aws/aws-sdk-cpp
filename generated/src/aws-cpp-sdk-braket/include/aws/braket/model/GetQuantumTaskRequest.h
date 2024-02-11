/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BRAKET_API GetQuantumTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQuantumTask"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;

    AWS_BRAKET_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline const Aws::Vector<QuantumTaskAdditionalAttributeName>& GetAdditionalAttributeNames() const{ return m_additionalAttributeNames; }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline bool AdditionalAttributeNamesHasBeenSet() const { return m_additionalAttributeNamesHasBeenSet; }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline void SetAdditionalAttributeNames(const Aws::Vector<QuantumTaskAdditionalAttributeName>& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames = value; }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline void SetAdditionalAttributeNames(Aws::Vector<QuantumTaskAdditionalAttributeName>&& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames = std::move(value); }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline GetQuantumTaskRequest& WithAdditionalAttributeNames(const Aws::Vector<QuantumTaskAdditionalAttributeName>& value) { SetAdditionalAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline GetQuantumTaskRequest& WithAdditionalAttributeNames(Aws::Vector<QuantumTaskAdditionalAttributeName>&& value) { SetAdditionalAttributeNames(std::move(value)); return *this;}

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline GetQuantumTaskRequest& AddAdditionalAttributeNames(const QuantumTaskAdditionalAttributeName& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames.push_back(value); return *this; }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline GetQuantumTaskRequest& AddAdditionalAttributeNames(QuantumTaskAdditionalAttributeName&& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the task to retrieve.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const{ return m_quantumTaskArn; }

    /**
     * <p>The ARN of the task to retrieve.</p>
     */
    inline bool QuantumTaskArnHasBeenSet() const { return m_quantumTaskArnHasBeenSet; }

    /**
     * <p>The ARN of the task to retrieve.</p>
     */
    inline void SetQuantumTaskArn(const Aws::String& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = value; }

    /**
     * <p>The ARN of the task to retrieve.</p>
     */
    inline void SetQuantumTaskArn(Aws::String&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::move(value); }

    /**
     * <p>The ARN of the task to retrieve.</p>
     */
    inline void SetQuantumTaskArn(const char* value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn.assign(value); }

    /**
     * <p>The ARN of the task to retrieve.</p>
     */
    inline GetQuantumTaskRequest& WithQuantumTaskArn(const Aws::String& value) { SetQuantumTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task to retrieve.</p>
     */
    inline GetQuantumTaskRequest& WithQuantumTaskArn(Aws::String&& value) { SetQuantumTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task to retrieve.</p>
     */
    inline GetQuantumTaskRequest& WithQuantumTaskArn(const char* value) { SetQuantumTaskArn(value); return *this;}

  private:

    Aws::Vector<QuantumTaskAdditionalAttributeName> m_additionalAttributeNames;
    bool m_additionalAttributeNamesHasBeenSet = false;

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
