/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledControlDetails.h>
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
namespace ControlTower
{
namespace Model
{
  class GetEnabledControlResult
  {
  public:
    AWS_CONTROLTOWER_API GetEnabledControlResult();
    AWS_CONTROLTOWER_API GetEnabledControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetEnabledControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the enabled control.</p>
     */
    inline const EnabledControlDetails& GetEnabledControlDetails() const{ return m_enabledControlDetails; }

    /**
     * <p>Information about the enabled control.</p>
     */
    inline void SetEnabledControlDetails(const EnabledControlDetails& value) { m_enabledControlDetails = value; }

    /**
     * <p>Information about the enabled control.</p>
     */
    inline void SetEnabledControlDetails(EnabledControlDetails&& value) { m_enabledControlDetails = std::move(value); }

    /**
     * <p>Information about the enabled control.</p>
     */
    inline GetEnabledControlResult& WithEnabledControlDetails(const EnabledControlDetails& value) { SetEnabledControlDetails(value); return *this;}

    /**
     * <p>Information about the enabled control.</p>
     */
    inline GetEnabledControlResult& WithEnabledControlDetails(EnabledControlDetails&& value) { SetEnabledControlDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEnabledControlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEnabledControlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEnabledControlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EnabledControlDetails m_enabledControlDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
