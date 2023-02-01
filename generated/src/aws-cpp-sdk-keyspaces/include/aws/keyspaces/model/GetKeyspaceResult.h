/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{
  class GetKeyspaceResult
  {
  public:
    AWS_KEYSPACES_API GetKeyspaceResult();
    AWS_KEYSPACES_API GetKeyspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API GetKeyspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceName = value; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceName = std::move(value); }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(const char* value) { m_keyspaceName.assign(value); }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline GetKeyspaceResult& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}

    /**
     * <p>The name of the keyspace.</p>
     */
    inline GetKeyspaceResult& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the keyspace.</p>
     */
    inline GetKeyspaceResult& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}


    /**
     * <p>The ARN of the keyspace.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the keyspace.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The ARN of the keyspace.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the keyspace.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the keyspace.</p>
     */
    inline GetKeyspaceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the keyspace.</p>
     */
    inline GetKeyspaceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the keyspace.</p>
     */
    inline GetKeyspaceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_keyspaceName;

    Aws::String m_resourceArn;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
