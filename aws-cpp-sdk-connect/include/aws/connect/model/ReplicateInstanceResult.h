/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class ReplicateInstanceResult
  {
  public:
    AWS_CONNECT_API ReplicateInstanceResult();
    AWS_CONNECT_API ReplicateInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ReplicateInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the replicated instance. You can find the
     * <code>instanceId</code> in the ARN of the instance. The replicated instance has
     * the same identifier as the instance it was replicated from.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the replicated instance. You can find the
     * <code>instanceId</code> in the ARN of the instance. The replicated instance has
     * the same identifier as the instance it was replicated from.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the replicated instance. You can find the
     * <code>instanceId</code> in the ARN of the instance. The replicated instance has
     * the same identifier as the instance it was replicated from.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the replicated instance. You can find the
     * <code>instanceId</code> in the ARN of the instance. The replicated instance has
     * the same identifier as the instance it was replicated from.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the replicated instance. You can find the
     * <code>instanceId</code> in the ARN of the instance. The replicated instance has
     * the same identifier as the instance it was replicated from.</p>
     */
    inline ReplicateInstanceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the replicated instance. You can find the
     * <code>instanceId</code> in the ARN of the instance. The replicated instance has
     * the same identifier as the instance it was replicated from.</p>
     */
    inline ReplicateInstanceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the replicated instance. You can find the
     * <code>instanceId</code> in the ARN of the instance. The replicated instance has
     * the same identifier as the instance it was replicated from.</p>
     */
    inline ReplicateInstanceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the replicated instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated instance.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated instance.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated instance.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated instance.</p>
     */
    inline ReplicateInstanceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated instance.</p>
     */
    inline ReplicateInstanceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated instance.</p>
     */
    inline ReplicateInstanceResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
