/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedHostKey.h>
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

  private:

    DescribedHostKey m_hostKey;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
