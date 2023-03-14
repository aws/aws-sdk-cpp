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
  class DisassociateServiceRoleFromAccountResult
  {
  public:
    AWS_GREENGRASSV2_API DisassociateServiceRoleFromAccountResult();
    AWS_GREENGRASSV2_API DisassociateServiceRoleFromAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API DisassociateServiceRoleFromAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time when the service role was disassociated from IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDisassociatedAt() const{ return m_disassociatedAt; }

    /**
     * <p>The time when the service role was disassociated from IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetDisassociatedAt(const Aws::String& value) { m_disassociatedAt = value; }

    /**
     * <p>The time when the service role was disassociated from IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetDisassociatedAt(Aws::String&& value) { m_disassociatedAt = std::move(value); }

    /**
     * <p>The time when the service role was disassociated from IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline void SetDisassociatedAt(const char* value) { m_disassociatedAt.assign(value); }

    /**
     * <p>The time when the service role was disassociated from IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(const Aws::String& value) { SetDisassociatedAt(value); return *this;}

    /**
     * <p>The time when the service role was disassociated from IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(Aws::String&& value) { SetDisassociatedAt(std::move(value)); return *this;}

    /**
     * <p>The time when the service role was disassociated from IoT Greengrass for your
     * Amazon Web Services account in this Amazon Web Services Region.</p>
     */
    inline DisassociateServiceRoleFromAccountResult& WithDisassociatedAt(const char* value) { SetDisassociatedAt(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateServiceRoleFromAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateServiceRoleFromAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateServiceRoleFromAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_disassociatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
