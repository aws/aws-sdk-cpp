/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DisassociatePersonasFromEntitiesResult
  {
  public:
    AWS_KENDRA_API DisassociatePersonasFromEntitiesResult();
    AWS_KENDRA_API DisassociatePersonasFromEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DisassociatePersonasFromEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly remove access to your Amazon Kendra experience.</p>
     */
    inline const Aws::Vector<FailedEntity>& GetFailedEntityList() const{ return m_failedEntityList; }

    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly remove access to your Amazon Kendra experience.</p>
     */
    inline void SetFailedEntityList(const Aws::Vector<FailedEntity>& value) { m_failedEntityList = value; }

    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly remove access to your Amazon Kendra experience.</p>
     */
    inline void SetFailedEntityList(Aws::Vector<FailedEntity>&& value) { m_failedEntityList = std::move(value); }

    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly remove access to your Amazon Kendra experience.</p>
     */
    inline DisassociatePersonasFromEntitiesResult& WithFailedEntityList(const Aws::Vector<FailedEntity>& value) { SetFailedEntityList(value); return *this;}

    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly remove access to your Amazon Kendra experience.</p>
     */
    inline DisassociatePersonasFromEntitiesResult& WithFailedEntityList(Aws::Vector<FailedEntity>&& value) { SetFailedEntityList(std::move(value)); return *this;}

    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly remove access to your Amazon Kendra experience.</p>
     */
    inline DisassociatePersonasFromEntitiesResult& AddFailedEntityList(const FailedEntity& value) { m_failedEntityList.push_back(value); return *this; }

    /**
     * <p>Lists the users or groups in your IAM Identity Center identity source that
     * failed to properly remove access to your Amazon Kendra experience.</p>
     */
    inline DisassociatePersonasFromEntitiesResult& AddFailedEntityList(FailedEntity&& value) { m_failedEntityList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedEntity> m_failedEntityList;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
