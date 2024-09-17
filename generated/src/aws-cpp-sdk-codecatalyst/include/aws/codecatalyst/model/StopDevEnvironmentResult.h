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
  class StopDevEnvironmentResult
  {
  public:
    AWS_CODECATALYST_API StopDevEnvironmentResult();
    AWS_CODECATALYST_API StopDevEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API StopDevEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline StopDevEnvironmentResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline StopDevEnvironmentResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline StopDevEnvironmentResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }
    inline StopDevEnvironmentResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline StopDevEnvironmentResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline StopDevEnvironmentResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline StopDevEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StopDevEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StopDevEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline const DevEnvironmentStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DevEnvironmentStatus& value) { m_status = value; }
    inline void SetStatus(DevEnvironmentStatus&& value) { m_status = std::move(value); }
    inline StopDevEnvironmentResult& WithStatus(const DevEnvironmentStatus& value) { SetStatus(value); return *this;}
    inline StopDevEnvironmentResult& WithStatus(DevEnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StopDevEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StopDevEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StopDevEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_id;

    DevEnvironmentStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
