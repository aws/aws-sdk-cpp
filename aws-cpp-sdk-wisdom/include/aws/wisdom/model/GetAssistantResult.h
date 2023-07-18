﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/AssistantData.h>
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
  class AWS_CONNECTWISDOMSERVICE_API GetAssistantResult
  {
  public:
    GetAssistantResult();
    GetAssistantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAssistantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the assistant.</p>
     */
    inline const AssistantData& GetAssistant() const{ return m_assistant; }

    /**
     * <p>Information about the assistant.</p>
     */
    inline void SetAssistant(const AssistantData& value) { m_assistant = value; }

    /**
     * <p>Information about the assistant.</p>
     */
    inline void SetAssistant(AssistantData&& value) { m_assistant = std::move(value); }

    /**
     * <p>Information about the assistant.</p>
     */
    inline GetAssistantResult& WithAssistant(const AssistantData& value) { SetAssistant(value); return *this;}

    /**
     * <p>Information about the assistant.</p>
     */
    inline GetAssistantResult& WithAssistant(AssistantData&& value) { SetAssistant(std::move(value)); return *this;}

  private:

    AssistantData m_assistant;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
