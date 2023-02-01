/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/VpcEndpointStatus.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Summary information for an Amazon OpenSearch Service-managed VPC
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/VpcEndpointSummary">AWS
   * API Reference</a></p>
   */
  class VpcEndpointSummary
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API VpcEndpointSummary();
    AWS_ELASTICSEARCHSERVICE_API VpcEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API VpcEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpointSummary& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpointSummary& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline VpcEndpointSummary& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The creator of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const{ return m_vpcEndpointOwner; }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline void SetVpcEndpointOwner(const Aws::String& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = value; }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline void SetVpcEndpointOwner(Aws::String&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::move(value); }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline void SetVpcEndpointOwner(const char* value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner.assign(value); }

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline VpcEndpointSummary& WithVpcEndpointOwner(const Aws::String& value) { SetVpcEndpointOwner(value); return *this;}

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline VpcEndpointSummary& WithVpcEndpointOwner(Aws::String&& value) { SetVpcEndpointOwner(std::move(value)); return *this;}

    /**
     * <p>The creator of the endpoint.</p>
     */
    inline VpcEndpointSummary& WithVpcEndpointOwner(const char* value) { SetVpcEndpointOwner(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline void SetDomainArn(const Aws::String& value) { m_domainArnHasBeenSet = true; m_domainArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline void SetDomainArn(Aws::String&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline void SetDomainArn(const char* value) { m_domainArnHasBeenSet = true; m_domainArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline VpcEndpointSummary& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline VpcEndpointSummary& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline VpcEndpointSummary& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}


    /**
     * <p>The current status of the endpoint.</p>
     */
    inline const VpcEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline void SetStatus(const VpcEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline void SetStatus(VpcEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline VpcEndpointSummary& WithStatus(const VpcEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline VpcEndpointSummary& WithStatus(VpcEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    VpcEndpointStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
