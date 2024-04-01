/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AwsCredentials.h>
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
namespace deadline
{
namespace Model
{
  class AssumeQueueRoleForWorkerResult
  {
  public:
    AWS_DEADLINE_API AssumeQueueRoleForWorkerResult();
    AWS_DEADLINE_API AssumeQueueRoleForWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API AssumeQueueRoleForWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services credentials for the role that the worker is
     * assuming.</p>
     */
    inline const AwsCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The Amazon Web Services credentials for the role that the worker is
     * assuming.</p>
     */
    inline void SetCredentials(const AwsCredentials& value) { m_credentials = value; }

    /**
     * <p>The Amazon Web Services credentials for the role that the worker is
     * assuming.</p>
     */
    inline void SetCredentials(AwsCredentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>The Amazon Web Services credentials for the role that the worker is
     * assuming.</p>
     */
    inline AssumeQueueRoleForWorkerResult& WithCredentials(const AwsCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The Amazon Web Services credentials for the role that the worker is
     * assuming.</p>
     */
    inline AssumeQueueRoleForWorkerResult& WithCredentials(AwsCredentials&& value) { SetCredentials(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssumeQueueRoleForWorkerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssumeQueueRoleForWorkerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssumeQueueRoleForWorkerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AwsCredentials m_credentials;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
