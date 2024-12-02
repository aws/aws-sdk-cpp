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
    AWS_TRANSFER_API DescribeWebAppCustomizationResult();
    AWS_TRANSFER_API DescribeWebAppCustomizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeWebAppCustomizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a structure that contains the details of the web app
     * customizations.</p>
     */
    inline const DescribedWebAppCustomization& GetWebAppCustomization() const{ return m_webAppCustomization; }
    inline void SetWebAppCustomization(const DescribedWebAppCustomization& value) { m_webAppCustomization = value; }
    inline void SetWebAppCustomization(DescribedWebAppCustomization&& value) { m_webAppCustomization = std::move(value); }
    inline DescribeWebAppCustomizationResult& WithWebAppCustomization(const DescribedWebAppCustomization& value) { SetWebAppCustomization(value); return *this;}
    inline DescribeWebAppCustomizationResult& WithWebAppCustomization(DescribedWebAppCustomization&& value) { SetWebAppCustomization(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWebAppCustomizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWebAppCustomizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWebAppCustomizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DescribedWebAppCustomization m_webAppCustomization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
