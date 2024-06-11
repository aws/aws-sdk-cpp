﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateTrafficDistributionGroupResult
  {
  public:
    AWS_CONNECT_API CreateTrafficDistributionGroupResult();
    AWS_CONNECT_API CreateTrafficDistributionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateTrafficDistributionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateTrafficDistributionGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateTrafficDistributionGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateTrafficDistributionGroupResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateTrafficDistributionGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateTrafficDistributionGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateTrafficDistributionGroupResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTrafficDistributionGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTrafficDistributionGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTrafficDistributionGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
