/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/AssistantAssociationData.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class GetAssistantAssociationResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetAssistantAssociationResult();
    AWS_CONNECTWISDOMSERVICE_API GetAssistantAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API GetAssistantAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The assistant association.</p>
     */
    inline const AssistantAssociationData& GetAssistantAssociation() const{ return m_assistantAssociation; }

    /**
     * <p>The assistant association.</p>
     */
    inline void SetAssistantAssociation(const AssistantAssociationData& value) { m_assistantAssociation = value; }

    /**
     * <p>The assistant association.</p>
     */
    inline void SetAssistantAssociation(AssistantAssociationData&& value) { m_assistantAssociation = std::move(value); }

    /**
     * <p>The assistant association.</p>
     */
    inline GetAssistantAssociationResult& WithAssistantAssociation(const AssistantAssociationData& value) { SetAssistantAssociation(value); return *this;}

    /**
     * <p>The assistant association.</p>
     */
    inline GetAssistantAssociationResult& WithAssistantAssociation(AssistantAssociationData&& value) { SetAssistantAssociation(std::move(value)); return *this;}

  private:

    AssistantAssociationData m_assistantAssociation;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
