/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedWebApp.h>
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
  class DescribeWebAppResult
  {
  public:
    AWS_TRANSFER_API DescribeWebAppResult();
    AWS_TRANSFER_API DescribeWebAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeWebAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a structure that contains the details of the web app.</p>
     */
    inline const DescribedWebApp& GetWebApp() const{ return m_webApp; }
    inline void SetWebApp(const DescribedWebApp& value) { m_webApp = value; }
    inline void SetWebApp(DescribedWebApp&& value) { m_webApp = std::move(value); }
    inline DescribeWebAppResult& WithWebApp(const DescribedWebApp& value) { SetWebApp(value); return *this;}
    inline DescribeWebAppResult& WithWebApp(DescribedWebApp&& value) { SetWebApp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWebAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWebAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWebAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DescribedWebApp m_webApp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
