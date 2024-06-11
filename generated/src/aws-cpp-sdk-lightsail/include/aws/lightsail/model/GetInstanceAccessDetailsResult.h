﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceAccessDetails.h>
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
namespace Lightsail
{
namespace Model
{
  class GetInstanceAccessDetailsResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult();
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline const InstanceAccessDetails& GetAccessDetails() const{ return m_accessDetails; }
    inline void SetAccessDetails(const InstanceAccessDetails& value) { m_accessDetails = value; }
    inline void SetAccessDetails(InstanceAccessDetails&& value) { m_accessDetails = std::move(value); }
    inline GetInstanceAccessDetailsResult& WithAccessDetails(const InstanceAccessDetails& value) { SetAccessDetails(value); return *this;}
    inline GetInstanceAccessDetailsResult& WithAccessDetails(InstanceAccessDetails&& value) { SetAccessDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInstanceAccessDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInstanceAccessDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInstanceAccessDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    InstanceAccessDetails m_accessDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
