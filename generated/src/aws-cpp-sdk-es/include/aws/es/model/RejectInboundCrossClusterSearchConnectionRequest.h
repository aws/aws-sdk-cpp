/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>RejectInboundCrossClusterSearchConnection</a></code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RejectInboundCrossClusterSearchConnectionRequest">AWS
   * API Reference</a></p>
   */
  class RejectInboundCrossClusterSearchConnectionRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API RejectInboundCrossClusterSearchConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectInboundCrossClusterSearchConnection"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The id of the inbound connection that you want to reject.</p>
     */
    inline const Aws::String& GetCrossClusterSearchConnectionId() const { return m_crossClusterSearchConnectionId; }
    inline bool CrossClusterSearchConnectionIdHasBeenSet() const { return m_crossClusterSearchConnectionIdHasBeenSet; }
    template<typename CrossClusterSearchConnectionIdT = Aws::String>
    void SetCrossClusterSearchConnectionId(CrossClusterSearchConnectionIdT&& value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId = std::forward<CrossClusterSearchConnectionIdT>(value); }
    template<typename CrossClusterSearchConnectionIdT = Aws::String>
    RejectInboundCrossClusterSearchConnectionRequest& WithCrossClusterSearchConnectionId(CrossClusterSearchConnectionIdT&& value) { SetCrossClusterSearchConnectionId(std::forward<CrossClusterSearchConnectionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_crossClusterSearchConnectionId;
    bool m_crossClusterSearchConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
