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
  class DeleteSourceRepositoryResult
  {
  public:
    AWS_CODECATALYST_API DeleteSourceRepositoryResult();
    AWS_CODECATALYST_API DeleteSourceRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API DeleteSourceRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline DeleteSourceRepositoryResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline DeleteSourceRepositoryResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline DeleteSourceRepositoryResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }
    inline DeleteSourceRepositoryResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DeleteSourceRepositoryResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DeleteSourceRepositoryResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DeleteSourceRepositoryResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteSourceRepositoryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteSourceRepositoryResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteSourceRepositoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteSourceRepositoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteSourceRepositoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
