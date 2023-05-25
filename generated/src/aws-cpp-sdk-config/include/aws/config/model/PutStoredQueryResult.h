/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  class PutStoredQueryResult
  {
  public:
    AWS_CONFIGSERVICE_API PutStoredQueryResult();
    AWS_CONFIGSERVICE_API PutStoredQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutStoredQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline const Aws::String& GetQueryArn() const{ return m_queryArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline void SetQueryArn(const Aws::String& value) { m_queryArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline void SetQueryArn(Aws::String&& value) { m_queryArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline void SetQueryArn(const char* value) { m_queryArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline PutStoredQueryResult& WithQueryArn(const Aws::String& value) { SetQueryArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline PutStoredQueryResult& WithQueryArn(Aws::String&& value) { SetQueryArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the query. For example,
     * arn:partition:service:region:account-id:resource-type/resource-name/resource-id.</p>
     */
    inline PutStoredQueryResult& WithQueryArn(const char* value) { SetQueryArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutStoredQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutStoredQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutStoredQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_queryArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
