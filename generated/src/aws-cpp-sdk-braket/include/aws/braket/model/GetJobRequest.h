/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/HybridJobAdditionalAttributeName.h>
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
  class GetJobRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API GetJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJob"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;

    AWS_BRAKET_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARN of the hybrid job to retrieve.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetJobRequest& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of attributes to return additional information for. Only the QueueInfo
     * additional attribute name is currently supported. </p>
     */
    inline const Aws::Vector<HybridJobAdditionalAttributeName>& GetAdditionalAttributeNames() const { return m_additionalAttributeNames; }
    inline bool AdditionalAttributeNamesHasBeenSet() const { return m_additionalAttributeNamesHasBeenSet; }
    template<typename AdditionalAttributeNamesT = Aws::Vector<HybridJobAdditionalAttributeName>>
    void SetAdditionalAttributeNames(AdditionalAttributeNamesT&& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames = std::forward<AdditionalAttributeNamesT>(value); }
    template<typename AdditionalAttributeNamesT = Aws::Vector<HybridJobAdditionalAttributeName>>
    GetJobRequest& WithAdditionalAttributeNames(AdditionalAttributeNamesT&& value) { SetAdditionalAttributeNames(std::forward<AdditionalAttributeNamesT>(value)); return *this;}
    inline GetJobRequest& AddAdditionalAttributeNames(HybridJobAdditionalAttributeName value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::Vector<HybridJobAdditionalAttributeName> m_additionalAttributeNames;
    bool m_additionalAttributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
