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
  class AssociateServiceRoleToAccountResult
  {
  public:
    AWS_GREENGRASSV2_API AssociateServiceRoleToAccountResult();
    AWS_GREENGRASSV2_API AssociateServiceRoleToAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API AssociateServiceRoleToAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline AssociateServiceRoleToAccountResult& WithAssociatedAt(const Aws::String& value) { SetAssociatedAt(value); return *this;}

    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline AssociateServiceRoleToAccountResult& WithAssociatedAt(Aws::String&& value) { SetAssociatedAt(std::move(value)); return *this;}

    /**
     * <p>The time when the service role was associated with IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline AssociateServiceRoleToAccountResult& WithAssociatedAt(const char* value) { SetAssociatedAt(value); return *this;}

  private:

    Aws::String m_associatedAt;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
