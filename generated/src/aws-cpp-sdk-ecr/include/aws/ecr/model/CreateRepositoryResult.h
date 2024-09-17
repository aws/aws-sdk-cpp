/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/Repository.h>
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
namespace ECR
{
namespace Model
{
  class CreateRepositoryResult
  {
  public:
    AWS_ECR_API CreateRepositoryResult();
    AWS_ECR_API CreateRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API CreateRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The repository that was created.</p>
     */
    inline const Repository& GetRepository() const{ return m_repository; }
    inline void SetRepository(const Repository& value) { m_repository = value; }
    inline void SetRepository(Repository&& value) { m_repository = std::move(value); }
    inline CreateRepositoryResult& WithRepository(const Repository& value) { SetRepository(value); return *this;}
    inline CreateRepositoryResult& WithRepository(Repository&& value) { SetRepository(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRepositoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRepositoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRepositoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Repository m_repository;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
