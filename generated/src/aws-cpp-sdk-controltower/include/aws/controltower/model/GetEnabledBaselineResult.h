/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledBaselineDetails.h>
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
  class GetEnabledBaselineResult
  {
  public:
    AWS_CONTROLTOWER_API GetEnabledBaselineResult();
    AWS_CONTROLTOWER_API GetEnabledBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetEnabledBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of the <code>EnabledBaseline</code> resource.</p>
     */
    inline const EnabledBaselineDetails& GetEnabledBaselineDetails() const{ return m_enabledBaselineDetails; }

    /**
     * <p>Details of the <code>EnabledBaseline</code> resource.</p>
     */
    inline void SetEnabledBaselineDetails(const EnabledBaselineDetails& value) { m_enabledBaselineDetails = value; }

    /**
     * <p>Details of the <code>EnabledBaseline</code> resource.</p>
     */
    inline void SetEnabledBaselineDetails(EnabledBaselineDetails&& value) { m_enabledBaselineDetails = std::move(value); }

    /**
     * <p>Details of the <code>EnabledBaseline</code> resource.</p>
     */
    inline GetEnabledBaselineResult& WithEnabledBaselineDetails(const EnabledBaselineDetails& value) { SetEnabledBaselineDetails(value); return *this;}

    /**
     * <p>Details of the <code>EnabledBaseline</code> resource.</p>
     */
    inline GetEnabledBaselineResult& WithEnabledBaselineDetails(EnabledBaselineDetails&& value) { SetEnabledBaselineDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEnabledBaselineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEnabledBaselineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEnabledBaselineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EnabledBaselineDetails m_enabledBaselineDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
