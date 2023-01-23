/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{
  class CreateWirelessGatewayResult
  {
  public:
    AWS_IOTWIRELESS_API CreateWirelessGatewayResult();
    AWS_IOTWIRELESS_API CreateWirelessGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API CreateWirelessGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline CreateWirelessGatewayResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline CreateWirelessGatewayResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline CreateWirelessGatewayResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the new wireless gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the new wireless gateway.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the new wireless gateway.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the new wireless gateway.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the new wireless gateway.</p>
     */
    inline CreateWirelessGatewayResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the new wireless gateway.</p>
     */
    inline CreateWirelessGatewayResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new wireless gateway.</p>
     */
    inline CreateWirelessGatewayResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
