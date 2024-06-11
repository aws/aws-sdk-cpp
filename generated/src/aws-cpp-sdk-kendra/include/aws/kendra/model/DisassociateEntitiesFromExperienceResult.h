﻿/**
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
  class DisassociateEntitiesFromExperienceResult
  {
  public:
    AWS_KENDRA_API DisassociateEntitiesFromExperienceResult();
    AWS_KENDRA_API DisassociateEntitiesFromExperienceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DisassociateEntitiesFromExperienceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly remove access to your Amazon Kendra experience.</p>
     */
    inline const Aws::Vector<FailedEntity>& GetFailedEntityList() const{ return m_failedEntityList; }
    inline void SetFailedEntityList(const Aws::Vector<FailedEntity>& value) { m_failedEntityList = value; }
    inline void SetFailedEntityList(Aws::Vector<FailedEntity>&& value) { m_failedEntityList = std::move(value); }
    inline DisassociateEntitiesFromExperienceResult& WithFailedEntityList(const Aws::Vector<FailedEntity>& value) { SetFailedEntityList(value); return *this;}
    inline DisassociateEntitiesFromExperienceResult& WithFailedEntityList(Aws::Vector<FailedEntity>&& value) { SetFailedEntityList(std::move(value)); return *this;}
    inline DisassociateEntitiesFromExperienceResult& AddFailedEntityList(const FailedEntity& value) { m_failedEntityList.push_back(value); return *this; }
    inline DisassociateEntitiesFromExperienceResult& AddFailedEntityList(FailedEntity&& value) { m_failedEntityList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisassociateEntitiesFromExperienceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisassociateEntitiesFromExperienceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisassociateEntitiesFromExperienceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FailedEntity> m_failedEntityList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
