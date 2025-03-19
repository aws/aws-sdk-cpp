/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class StopModelCustomizationJobRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API StopModelCustomizationJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopModelCustomizationJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Job identifier of the job to stop.</p>
     */
    inline const Aws::String& GetJobIdentifier() const { return m_jobIdentifier; }
    inline bool JobIdentifierHasBeenSet() const { return m_jobIdentifierHasBeenSet; }
    template<typename JobIdentifierT = Aws::String>
    void SetJobIdentifier(JobIdentifierT&& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = std::forward<JobIdentifierT>(value); }
    template<typename JobIdentifierT = Aws::String>
    StopModelCustomizationJobRequest& WithJobIdentifier(JobIdentifierT&& value) { SetJobIdentifier(std::forward<JobIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobIdentifier;
    bool m_jobIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
