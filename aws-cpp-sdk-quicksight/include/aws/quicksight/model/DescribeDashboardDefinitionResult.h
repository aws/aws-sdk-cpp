/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/quicksight/model/DashboardVersionDefinition.h>
#include <aws/quicksight/model/DashboardError.h>
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
  class DescribeDashboardDefinitionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult();
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardId = value; }

    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardId = std::move(value); }

    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardId.assign(value); }

    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline DescribeDashboardDefinitionResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline DescribeDashboardDefinitionResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline DescribeDashboardDefinitionResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline const Aws::Vector<DashboardError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline void SetErrors(const Aws::Vector<DashboardError>& value) { m_errors = value; }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline void SetErrors(Aws::Vector<DashboardError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline DescribeDashboardDefinitionResult& WithErrors(const Aws::Vector<DashboardError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline DescribeDashboardDefinitionResult& WithErrors(Aws::Vector<DashboardError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline DescribeDashboardDefinitionResult& AddErrors(const DashboardError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline DescribeDashboardDefinitionResult& AddErrors(DashboardError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The display name of the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline DescribeDashboardDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline DescribeDashboardDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline DescribeDashboardDefinitionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Status associated with the dashboard version.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }

    /**
     * <p>Status associated with the dashboard version.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatus = value; }

    /**
     * <p>Status associated with the dashboard version.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatus = std::move(value); }

    /**
     * <p>Status associated with the dashboard version.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline DescribeDashboardDefinitionResult& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>Status associated with the dashboard version.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline DescribeDashboardDefinitionResult& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArn = value; }

    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArn = std::move(value); }

    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArn.assign(value); }

    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline DescribeDashboardDefinitionResult& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline DescribeDashboardDefinitionResult& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline DescribeDashboardDefinitionResult& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const DashboardVersionDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(const DashboardVersionDefinition& value) { m_definition = value; }

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(DashboardVersionDefinition&& value) { m_definition = std::move(value); }

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline DescribeDashboardDefinitionResult& WithDefinition(const DashboardVersionDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline DescribeDashboardDefinitionResult& WithDefinition(DashboardVersionDefinition&& value) { SetDefinition(std::move(value)); return *this;}


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
    inline DescribeDashboardDefinitionResult& WithStatus(int value) { SetStatus(value); return *this;}


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
    inline DescribeDashboardDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDashboardDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDashboardDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dashboardId;

    Aws::Vector<DashboardError> m_errors;

    Aws::String m_name;

    ResourceStatus m_resourceStatus;

    Aws::String m_themeArn;

    DashboardVersionDefinition m_definition;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
