/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>The list of endpoint objects. For custom routing, this is a list of virtual
   * private cloud (VPC) subnet IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CustomRoutingEndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomRoutingEndpointConfiguration
  {
  public:
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointConfiguration();
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline CustomRoutingEndpointConfiguration& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline CustomRoutingEndpointConfiguration& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID. </p>
     */
    inline CustomRoutingEndpointConfiguration& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints to accelerators.</p>
     */
    inline const Aws::String& GetAttachmentArn() const{ return m_attachmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints to accelerators.</p>
     */
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints to accelerators.</p>
     */
    inline void SetAttachmentArn(const Aws::String& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints to accelerators.</p>
     */
    inline void SetAttachmentArn(Aws::String&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints to accelerators.</p>
     */
    inline void SetAttachmentArn(const char* value) { m_attachmentArnHasBeenSet = true; m_attachmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints to accelerators.</p>
     */
    inline CustomRoutingEndpointConfiguration& WithAttachmentArn(const Aws::String& value) { SetAttachmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints to accelerators.</p>
     */
    inline CustomRoutingEndpointConfiguration& WithAttachmentArn(Aws::String&& value) { SetAttachmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the endpoints (resources) that can be added to accelerators and principals that
     * have permission to add the endpoints to accelerators.</p>
     */
    inline CustomRoutingEndpointConfiguration& WithAttachmentArn(const char* value) { SetAttachmentArn(value); return *this;}

  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_attachmentArn;
    bool m_attachmentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
