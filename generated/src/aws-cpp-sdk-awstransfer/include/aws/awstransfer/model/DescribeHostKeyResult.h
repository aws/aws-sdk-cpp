/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedHostKey.h>
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
  class DescribeHostKeyResult
  {
  public:
    AWS_TRANSFER_API DescribeHostKeyResult();
    AWS_TRANSFER_API DescribeHostKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeHostKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the details for the specified host key.</p>
     */
    inline const DescribedHostKey& GetHostKey() const{ return m_hostKey; }

    /**
     * <p>Returns the details for the specified host key.</p>
     */
    inline void SetHostKey(const DescribedHostKey& value) { m_hostKey = value; }

    /**
     * <p>Returns the details for the specified host key.</p>
     */
    inline void SetHostKey(DescribedHostKey&& value) { m_hostKey = std::move(value); }

    /**
     * <p>Returns the details for the specified host key.</p>
     */
    inline DescribeHostKeyResult& WithHostKey(const DescribedHostKey& value) { SetHostKey(value); return *this;}

    /**
     * <p>Returns the details for the specified host key.</p>
     */
    inline DescribeHostKeyResult& WithHostKey(DescribedHostKey&& value) { SetHostKey(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeHostKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeHostKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeHostKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DescribedHostKey m_hostKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
