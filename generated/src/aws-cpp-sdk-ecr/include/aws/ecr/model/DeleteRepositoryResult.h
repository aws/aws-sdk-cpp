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
  class DeleteRepositoryResult
  {
  public:
    AWS_ECR_API DeleteRepositoryResult();
    AWS_ECR_API DeleteRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DeleteRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The repository that was deleted.</p>
     */
    inline const Repository& GetRepository() const{ return m_repository; }
    inline void SetRepository(const Repository& value) { m_repository = value; }
    inline void SetRepository(Repository&& value) { m_repository = std::move(value); }
    inline DeleteRepositoryResult& WithRepository(const Repository& value) { SetRepository(value); return *this;}
    inline DeleteRepositoryResult& WithRepository(Repository&& value) { SetRepository(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteRepositoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteRepositoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteRepositoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Repository m_repository;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
