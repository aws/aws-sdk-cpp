/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedWebAppCustomization.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{
  class DescribeWebAppCustomizationResult
  {
  public:
    AWS_TRANSFER_API DescribeWebAppCustomizationResult() = default;
    AWS_TRANSFER_API DescribeWebAppCustomizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeWebAppCustomizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a structure that contains the details of the web app
     * customizations.</p>
     */
    inline const DescribedWebAppCustomization& GetWebAppCustomization() const { return m_webAppCustomization; }
    template<typename WebAppCustomizationT = DescribedWebAppCustomization>
    void SetWebAppCustomization(WebAppCustomizationT&& value) { m_webAppCustomizationHasBeenSet = true; m_webAppCustomization = std::forward<WebAppCustomizationT>(value); }
    template<typename WebAppCustomizationT = DescribedWebAppCustomization>
    DescribeWebAppCustomizationResult& WithWebAppCustomization(WebAppCustomizationT&& value) { SetWebAppCustomization(std::forward<WebAppCustomizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWebAppCustomizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DescribedWebAppCustomization m_webAppCustomization;
    bool m_webAppCustomizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
