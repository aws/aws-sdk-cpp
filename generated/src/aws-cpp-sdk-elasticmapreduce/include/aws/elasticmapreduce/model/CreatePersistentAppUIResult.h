/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
  class CreatePersistentAppUIResult
  {
  public:
    AWS_EMR_API CreatePersistentAppUIResult() = default;
    AWS_EMR_API CreatePersistentAppUIResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API CreatePersistentAppUIResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The persistent application user interface identifier.</p>
     */
    inline const Aws::String& GetPersistentAppUIId() const { return m_persistentAppUIId; }
    template<typename PersistentAppUIIdT = Aws::String>
    void SetPersistentAppUIId(PersistentAppUIIdT&& value) { m_persistentAppUIIdHasBeenSet = true; m_persistentAppUIId = std::forward<PersistentAppUIIdT>(value); }
    template<typename PersistentAppUIIdT = Aws::String>
    CreatePersistentAppUIResult& WithPersistentAppUIId(PersistentAppUIIdT&& value) { SetPersistentAppUIId(std::forward<PersistentAppUIIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents if the EMR on EC2 cluster that the persisent application user
     * interface is created for is a runtime role enabled cluster or not.</p>
     */
    inline bool GetRuntimeRoleEnabledCluster() const { return m_runtimeRoleEnabledCluster; }
    inline void SetRuntimeRoleEnabledCluster(bool value) { m_runtimeRoleEnabledClusterHasBeenSet = true; m_runtimeRoleEnabledCluster = value; }
    inline CreatePersistentAppUIResult& WithRuntimeRoleEnabledCluster(bool value) { SetRuntimeRoleEnabledCluster(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePersistentAppUIResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_persistentAppUIId;
    bool m_persistentAppUIIdHasBeenSet = false;

    bool m_runtimeRoleEnabledCluster{false};
    bool m_runtimeRoleEnabledClusterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
