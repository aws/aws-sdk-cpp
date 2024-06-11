/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
  class CreateSourceRepositoryResult
  {
  public:
    AWS_CODECATALYST_API CreateSourceRepositoryResult();
    AWS_CODECATALYST_API CreateSourceRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API CreateSourceRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline CreateSourceRepositoryResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline CreateSourceRepositoryResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline CreateSourceRepositoryResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }
    inline CreateSourceRepositoryResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline CreateSourceRepositoryResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline CreateSourceRepositoryResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateSourceRepositoryResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSourceRepositoryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSourceRepositoryResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the source repository.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSourceRepositoryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSourceRepositoryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSourceRepositoryResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSourceRepositoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSourceRepositoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSourceRepositoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
