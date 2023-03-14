/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedProfile.h>
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
  class DescribeProfileResult
  {
  public:
    AWS_TRANSFER_API DescribeProfileResult();
    AWS_TRANSFER_API DescribeProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the specified profile, returned as an object.</p>
     */
    inline const DescribedProfile& GetProfile() const{ return m_profile; }

    /**
     * <p>The details of the specified profile, returned as an object.</p>
     */
    inline void SetProfile(const DescribedProfile& value) { m_profile = value; }

    /**
     * <p>The details of the specified profile, returned as an object.</p>
     */
    inline void SetProfile(DescribedProfile&& value) { m_profile = std::move(value); }

    /**
     * <p>The details of the specified profile, returned as an object.</p>
     */
    inline DescribeProfileResult& WithProfile(const DescribedProfile& value) { SetProfile(value); return *this;}

    /**
     * <p>The details of the specified profile, returned as an object.</p>
     */
    inline DescribeProfileResult& WithProfile(DescribedProfile&& value) { SetProfile(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DescribedProfile m_profile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
