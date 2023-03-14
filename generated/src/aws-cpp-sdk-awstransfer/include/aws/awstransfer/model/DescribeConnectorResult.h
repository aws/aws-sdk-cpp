/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedConnector.h>
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
  class DescribeConnectorResult
  {
  public:
    AWS_TRANSFER_API DescribeConnectorResult();
    AWS_TRANSFER_API DescribeConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The structure that contains the details of the connector.</p>
     */
    inline const DescribedConnector& GetConnector() const{ return m_connector; }

    /**
     * <p>The structure that contains the details of the connector.</p>
     */
    inline void SetConnector(const DescribedConnector& value) { m_connector = value; }

    /**
     * <p>The structure that contains the details of the connector.</p>
     */
    inline void SetConnector(DescribedConnector&& value) { m_connector = std::move(value); }

    /**
     * <p>The structure that contains the details of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnector(const DescribedConnector& value) { SetConnector(value); return *this;}

    /**
     * <p>The structure that contains the details of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnector(DescribedConnector&& value) { SetConnector(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DescribedConnector m_connector;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
