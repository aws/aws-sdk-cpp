/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/DevEnvironmentStatus.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class StartDevEnvironmentResult
  {
  public:
    AWS_CODECATALYST_API StartDevEnvironmentResult();
    AWS_CODECATALYST_API StartDevEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API StartDevEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline StartDevEnvironmentResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline StartDevEnvironmentResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline StartDevEnvironmentResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline StartDevEnvironmentResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline StartDevEnvironmentResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline StartDevEnvironmentResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline StartDevEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline StartDevEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline StartDevEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline const DevEnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline void SetStatus(const DevEnvironmentStatus& value) { m_status = value; }

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline void SetStatus(DevEnvironmentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline StartDevEnvironmentResult& WithStatus(const DevEnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline StartDevEnvironmentResult& WithStatus(DevEnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_id;

    DevEnvironmentStatus m_status;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
