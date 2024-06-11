﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/Trail.h>
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
namespace CloudTrail
{
namespace Model
{
  /**
   * <p>Returns the objects or data listed below if successful. Otherwise, returns an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrailsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeTrailsResult
  {
  public:
    AWS_CLOUDTRAIL_API DescribeTrailsResult();
    AWS_CLOUDTRAIL_API DescribeTrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API DescribeTrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of trail objects. Trail objects with string values are only returned
     * if values for the objects exist in a trail's configuration. For example,
     * <code>SNSTopicName</code> and <code>SNSTopicARN</code> are only returned in
     * results if a trail is configured to send SNS notifications. Similarly,
     * <code>KMSKeyId</code> only appears in results if a trail's log files are
     * encrypted with KMS customer managed keys.</p>
     */
    inline const Aws::Vector<Trail>& GetTrailList() const{ return m_trailList; }
    inline void SetTrailList(const Aws::Vector<Trail>& value) { m_trailList = value; }
    inline void SetTrailList(Aws::Vector<Trail>&& value) { m_trailList = std::move(value); }
    inline DescribeTrailsResult& WithTrailList(const Aws::Vector<Trail>& value) { SetTrailList(value); return *this;}
    inline DescribeTrailsResult& WithTrailList(Aws::Vector<Trail>&& value) { SetTrailList(std::move(value)); return *this;}
    inline DescribeTrailsResult& AddTrailList(const Trail& value) { m_trailList.push_back(value); return *this; }
    inline DescribeTrailsResult& AddTrailList(Trail&& value) { m_trailList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTrailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTrailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTrailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Trail> m_trailList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
