/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
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
namespace GreengrassV2
{
namespace Model
{
  class GetServiceRoleForAccountResult
  {
  public:
    AWS_GREENGRASSV2_API GetServiceRoleForAccountResult();
    AWS_GREENGRASSV2_API GetServiceRoleForAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API GetServiceRoleForAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAssociatedAt() const{ return m_associatedAt; }

    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetAssociatedAt(const Aws::String& value) { m_associatedAt = value; }

    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetAssociatedAt(Aws::String&& value) { m_associatedAt = std::move(value); }

    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetAssociatedAt(const char* value) { m_associatedAt.assign(value); }

    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(const Aws::String& value) { SetAssociatedAt(value); return *this;}

    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(Aws::String&& value) { SetAssociatedAt(std::move(value)); return *this;}

    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline GetServiceRoleForAccountResult& WithAssociatedAt(const char* value) { SetAssociatedAt(value); return *this;}


    /**
     * <p>The ARN of the service role that is associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the service role that is associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the service role that is associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the service role that is associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the service role that is associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the service role that is associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the service role that is associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline GetServiceRoleForAccountResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_associatedAt;

    Aws::String m_roleArn;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
