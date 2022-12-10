/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/quicksight/model/TemplateVersionDefinition.h>
#include <aws/quicksight/model/TemplateError.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeTemplateDefinitionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeTemplateDefinitionResult();
    AWS_QUICKSIGHT_API DescribeTemplateDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeTemplateDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The descriptive name of the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The descriptive name of the template.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The descriptive name of the template.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The descriptive name of the template.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The descriptive name of the template.</p>
     */
    inline DescribeTemplateDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The descriptive name of the template.</p>
     */
    inline DescribeTemplateDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the template.</p>
     */
    inline DescribeTemplateDefinitionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the template described.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The ID of the template described.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }

    /**
     * <p>The ID of the template described.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }

    /**
     * <p>The ID of the template described.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }

    /**
     * <p>The ID of the template described.</p>
     */
    inline DescribeTemplateDefinitionResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The ID of the template described.</p>
     */
    inline DescribeTemplateDefinitionResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the template described.</p>
     */
    inline DescribeTemplateDefinitionResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>Errors associated with the template version.</p>
     */
    inline const Aws::Vector<TemplateError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors associated with the template version.</p>
     */
    inline void SetErrors(const Aws::Vector<TemplateError>& value) { m_errors = value; }

    /**
     * <p>Errors associated with the template version.</p>
     */
    inline void SetErrors(Aws::Vector<TemplateError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Errors associated with the template version.</p>
     */
    inline DescribeTemplateDefinitionResult& WithErrors(const Aws::Vector<TemplateError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors associated with the template version.</p>
     */
    inline DescribeTemplateDefinitionResult& WithErrors(Aws::Vector<TemplateError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors associated with the template version.</p>
     */
    inline DescribeTemplateDefinitionResult& AddErrors(const TemplateError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Errors associated with the template version.</p>
     */
    inline DescribeTemplateDefinitionResult& AddErrors(TemplateError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>Status associated with the template.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }

    /**
     * <p>Status associated with the template.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatus = value; }

    /**
     * <p>Status associated with the template.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatus = std::move(value); }

    /**
     * <p>Status associated with the template.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline DescribeTemplateDefinitionResult& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>Status associated with the template.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline DescribeTemplateDefinitionResult& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the theme of the template.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The ARN of the theme of the template.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArn = value; }

    /**
     * <p>The ARN of the theme of the template.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArn = std::move(value); }

    /**
     * <p>The ARN of the theme of the template.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArn.assign(value); }

    /**
     * <p>The ARN of the theme of the template.</p>
     */
    inline DescribeTemplateDefinitionResult& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The ARN of the theme of the template.</p>
     */
    inline DescribeTemplateDefinitionResult& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the theme of the template.</p>
     */
    inline DescribeTemplateDefinitionResult& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


    /**
     * <p>The definition of the template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const TemplateVersionDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of the template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(const TemplateVersionDefinition& value) { m_definition = value; }

    /**
     * <p>The definition of the template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(TemplateVersionDefinition&& value) { m_definition = std::move(value); }

    /**
     * <p>The definition of the template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline DescribeTemplateDefinitionResult& WithDefinition(const TemplateVersionDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of the template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline DescribeTemplateDefinitionResult& WithDefinition(TemplateVersionDefinition&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeTemplateDefinitionResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeTemplateDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeTemplateDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeTemplateDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_templateId;

    Aws::Vector<TemplateError> m_errors;

    ResourceStatus m_resourceStatus;

    Aws::String m_themeArn;

    TemplateVersionDefinition m_definition;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
