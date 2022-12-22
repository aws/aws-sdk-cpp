/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/quicksight/model/AnalysisDefinition.h>
#include <aws/quicksight/model/AnalysisError.h>
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
  class DescribeAnalysisDefinitionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAnalysisDefinitionResult();
    AWS_QUICKSIGHT_API DescribeAnalysisDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAnalysisDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the analysis described.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID of the analysis described.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }

    /**
     * <p>The ID of the analysis described.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }

    /**
     * <p>The ID of the analysis described.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }

    /**
     * <p>The ID of the analysis described.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID of the analysis described.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the analysis described.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}


    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline const Aws::Vector<AnalysisError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline void SetErrors(const Aws::Vector<AnalysisError>& value) { m_errors = value; }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline void SetErrors(Aws::Vector<AnalysisError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithErrors(const Aws::Vector<AnalysisError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithErrors(Aws::Vector<AnalysisError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& AddErrors(const AnalysisError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& AddErrors(AnalysisError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>Status associated with the analysis.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }

    /**
     * <p>Status associated with the analysis.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatus = value; }

    /**
     * <p>Status associated with the analysis.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatus = std::move(value); }

    /**
     * <p>Status associated with the analysis.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline DescribeAnalysisDefinitionResult& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>Status associated with the analysis.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline DescribeAnalysisDefinitionResult& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArn = value; }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArn = std::move(value); }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArn.assign(value); }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const AnalysisDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(const AnalysisDefinition& value) { m_definition = value; }

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(AnalysisDefinition&& value) { m_definition = std::move(value); }

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithDefinition(const AnalysisDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithDefinition(AnalysisDefinition&& value) { SetDefinition(std::move(value)); return *this;}


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
    inline DescribeAnalysisDefinitionResult& WithStatus(int value) { SetStatus(value); return *this;}


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
    inline DescribeAnalysisDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAnalysisDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_analysisId;

    Aws::String m_name;

    Aws::Vector<AnalysisError> m_errors;

    ResourceStatus m_resourceStatus;

    Aws::String m_themeArn;

    AnalysisDefinition m_definition;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
