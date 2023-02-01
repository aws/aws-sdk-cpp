/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/model/DevEnvironmentAccessDetails.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class StartDevEnvironmentSessionResult
  {
  public:
    AWS_CODECATALYST_API StartDevEnvironmentSessionResult();
    AWS_CODECATALYST_API StartDevEnvironmentSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API StartDevEnvironmentSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const DevEnvironmentAccessDetails& GetAccessDetails() const{ return m_accessDetails; }

    
    inline void SetAccessDetails(const DevEnvironmentAccessDetails& value) { m_accessDetails = value; }

    
    inline void SetAccessDetails(DevEnvironmentAccessDetails&& value) { m_accessDetails = std::move(value); }

    
    inline StartDevEnvironmentSessionResult& WithAccessDetails(const DevEnvironmentAccessDetails& value) { SetAccessDetails(value); return *this;}

    
    inline StartDevEnvironmentSessionResult& WithAccessDetails(DevEnvironmentAccessDetails&& value) { SetAccessDetails(std::move(value)); return *this;}


    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline StartDevEnvironmentSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline StartDevEnvironmentSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment session.</p>
     */
    inline StartDevEnvironmentSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


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
    inline StartDevEnvironmentSessionResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline StartDevEnvironmentSessionResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline StartDevEnvironmentSessionResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


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
    inline StartDevEnvironmentSessionResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline StartDevEnvironmentSessionResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline StartDevEnvironmentSessionResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline StartDevEnvironmentSessionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline StartDevEnvironmentSessionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment.</p>
     */
    inline StartDevEnvironmentSessionResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    DevEnvironmentAccessDetails m_accessDetails;

    Aws::String m_sessionId;

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_id;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
