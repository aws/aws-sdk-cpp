/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/AutoTerminationPolicy.h>
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
namespace EMR
{
namespace Model
{
  class GetAutoTerminationPolicyResult
  {
  public:
    AWS_EMR_API GetAutoTerminationPolicyResult();
    AWS_EMR_API GetAutoTerminationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetAutoTerminationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the auto-termination policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline const AutoTerminationPolicy& GetAutoTerminationPolicy() const{ return m_autoTerminationPolicy; }

    /**
     * <p>Specifies the auto-termination policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline void SetAutoTerminationPolicy(const AutoTerminationPolicy& value) { m_autoTerminationPolicy = value; }

    /**
     * <p>Specifies the auto-termination policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline void SetAutoTerminationPolicy(AutoTerminationPolicy&& value) { m_autoTerminationPolicy = std::move(value); }

    /**
     * <p>Specifies the auto-termination policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline GetAutoTerminationPolicyResult& WithAutoTerminationPolicy(const AutoTerminationPolicy& value) { SetAutoTerminationPolicy(value); return *this;}

    /**
     * <p>Specifies the auto-termination policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline GetAutoTerminationPolicyResult& WithAutoTerminationPolicy(AutoTerminationPolicy&& value) { SetAutoTerminationPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAutoTerminationPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAutoTerminationPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAutoTerminationPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AutoTerminationPolicy m_autoTerminationPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
