/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/PersistentAppUI.h>
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
  class DescribePersistentAppUIResult
  {
  public:
    AWS_EMR_API DescribePersistentAppUIResult() = default;
    AWS_EMR_API DescribePersistentAppUIResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API DescribePersistentAppUIResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The persistent application user interface.</p>
     */
    inline const PersistentAppUI& GetPersistentAppUI() const { return m_persistentAppUI; }
    template<typename PersistentAppUIT = PersistentAppUI>
    void SetPersistentAppUI(PersistentAppUIT&& value) { m_persistentAppUIHasBeenSet = true; m_persistentAppUI = std::forward<PersistentAppUIT>(value); }
    template<typename PersistentAppUIT = PersistentAppUI>
    DescribePersistentAppUIResult& WithPersistentAppUI(PersistentAppUIT&& value) { SetPersistentAppUI(std::forward<PersistentAppUIT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePersistentAppUIResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PersistentAppUI m_persistentAppUI;
    bool m_persistentAppUIHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
