/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedProfile.h>
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

  private:

    DescribedProfile m_profile;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
