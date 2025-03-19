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
    AWS_ELASTICSEARCHSERVICE_API VpcEndpointSummary() = default;
    AWS_ELASTICSEARCHSERVICE_API VpcEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API VpcEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    VpcEndpointSummary& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creator of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const { return m_vpcEndpointOwner; }
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }
    template<typename VpcEndpointOwnerT = Aws::String>
    void SetVpcEndpointOwner(VpcEndpointOwnerT&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::forward<VpcEndpointOwnerT>(value); }
    template<typename VpcEndpointOwnerT = Aws::String>
    VpcEndpointSummary& WithVpcEndpointOwner(VpcEndpointOwnerT&& value) { SetVpcEndpointOwner(std::forward<VpcEndpointOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the domain associated with the
     * endpoint.</p>
     */
    inline const Aws::String& GetDomainArn() const { return m_domainArn; }
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
    template<typename DomainArnT = Aws::String>
    void SetDomainArn(DomainArnT&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::forward<DomainArnT>(value); }
    template<typename DomainArnT = Aws::String>
    VpcEndpointSummary& WithDomainArn(DomainArnT&& value) { SetDomainArn(std::forward<DomainArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the endpoint.</p>
     */
    inline VpcEndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VpcEndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline VpcEndpointSummary& WithStatus(VpcEndpointStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    VpcEndpointStatus m_status{VpcEndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
