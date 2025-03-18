/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FailedEntity.h>
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
namespace kendra
{
namespace Model
{
  class AssociateEntitiesToExperienceResult
  {
  public:
    AWS_KENDRA_API AssociateEntitiesToExperienceResult() = default;
    AWS_KENDRA_API AssociateEntitiesToExperienceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API AssociateEntitiesToExperienceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly configure with your Amazon Kendra experience.</p>
     */
    inline const Aws::Vector<FailedEntity>& GetFailedEntityList() const { return m_failedEntityList; }
    template<typename FailedEntityListT = Aws::Vector<FailedEntity>>
    void SetFailedEntityList(FailedEntityListT&& value) { m_failedEntityListHasBeenSet = true; m_failedEntityList = std::forward<FailedEntityListT>(value); }
    template<typename FailedEntityListT = Aws::Vector<FailedEntity>>
    AssociateEntitiesToExperienceResult& WithFailedEntityList(FailedEntityListT&& value) { SetFailedEntityList(std::forward<FailedEntityListT>(value)); return *this;}
    template<typename FailedEntityListT = FailedEntity>
    AssociateEntitiesToExperienceResult& AddFailedEntityList(FailedEntityListT&& value) { m_failedEntityListHasBeenSet = true; m_failedEntityList.emplace_back(std::forward<FailedEntityListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateEntitiesToExperienceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedEntity> m_failedEntityList;
    bool m_failedEntityListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
