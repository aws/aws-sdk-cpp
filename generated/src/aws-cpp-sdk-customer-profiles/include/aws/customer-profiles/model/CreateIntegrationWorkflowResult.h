/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class CreateIntegrationWorkflowResult
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateIntegrationWorkflowResult();
    AWS_CUSTOMERPROFILES_API CreateIntegrationWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API CreateIntegrationWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline CreateIntegrationWorkflowResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline CreateIntegrationWorkflowResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline CreateIntegrationWorkflowResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>A message indicating create request was received.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message indicating create request was received.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>A message indicating create request was received.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>A message indicating create request was received.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>A message indicating create request was received.</p>
     */
    inline CreateIntegrationWorkflowResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message indicating create request was received.</p>
     */
    inline CreateIntegrationWorkflowResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message indicating create request was received.</p>
     */
    inline CreateIntegrationWorkflowResult& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_workflowId;

    Aws::String m_message;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
