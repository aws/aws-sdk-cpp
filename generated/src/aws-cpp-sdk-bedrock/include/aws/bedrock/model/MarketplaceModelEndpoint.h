/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/EndpointConfig.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains details about an endpoint for a model from Amazon Bedrock
   * Marketplace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/MarketplaceModelEndpoint">AWS
   * API Reference</a></p>
   */
  class MarketplaceModelEndpoint
  {
  public:
    AWS_BEDROCK_API MarketplaceModelEndpoint() = default;
    AWS_BEDROCK_API MarketplaceModelEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API MarketplaceModelEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    MarketplaceModelEndpoint& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model from Amazon Bedrock Marketplace that is deployed on this
     * endpoint.</p>
     */
    inline const Aws::String& GetModelSourceIdentifier() const { return m_modelSourceIdentifier; }
    inline bool ModelSourceIdentifierHasBeenSet() const { return m_modelSourceIdentifierHasBeenSet; }
    template<typename ModelSourceIdentifierT = Aws::String>
    void SetModelSourceIdentifier(ModelSourceIdentifierT&& value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier = std::forward<ModelSourceIdentifierT>(value); }
    template<typename ModelSourceIdentifierT = Aws::String>
    MarketplaceModelEndpoint& WithModelSourceIdentifier(ModelSourceIdentifierT&& value) { SetModelSourceIdentifier(std::forward<ModelSourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the endpoint in Amazon Bedrock Marketplace (e.g.,
     * ACTIVE, INACTIVE).</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline MarketplaceModelEndpoint& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the overall status, if available.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    MarketplaceModelEndpoint& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the endpoint was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    MarketplaceModelEndpoint& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the endpoint was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    MarketplaceModelEndpoint& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the endpoint, including the number and type of instances
     * used.</p>
     */
    inline const EndpointConfig& GetEndpointConfig() const { return m_endpointConfig; }
    inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
    template<typename EndpointConfigT = EndpointConfig>
    void SetEndpointConfig(EndpointConfigT&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::forward<EndpointConfigT>(value); }
    template<typename EndpointConfigT = EndpointConfig>
    MarketplaceModelEndpoint& WithEndpointConfig(EndpointConfigT&& value) { SetEndpointConfig(std::forward<EndpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the endpoint (e.g., Creating, InService, Updating,
     * Failed).</p>
     */
    inline const Aws::String& GetEndpointStatus() const { return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    template<typename EndpointStatusT = Aws::String>
    void SetEndpointStatus(EndpointStatusT&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::forward<EndpointStatusT>(value); }
    template<typename EndpointStatusT = Aws::String>
    MarketplaceModelEndpoint& WithEndpointStatus(EndpointStatusT&& value) { SetEndpointStatus(std::forward<EndpointStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the endpoint status, if available.</p>
     */
    inline const Aws::String& GetEndpointStatusMessage() const { return m_endpointStatusMessage; }
    inline bool EndpointStatusMessageHasBeenSet() const { return m_endpointStatusMessageHasBeenSet; }
    template<typename EndpointStatusMessageT = Aws::String>
    void SetEndpointStatusMessage(EndpointStatusMessageT&& value) { m_endpointStatusMessageHasBeenSet = true; m_endpointStatusMessage = std::forward<EndpointStatusMessageT>(value); }
    template<typename EndpointStatusMessageT = Aws::String>
    MarketplaceModelEndpoint& WithEndpointStatusMessage(EndpointStatusMessageT&& value) { SetEndpointStatusMessage(std::forward<EndpointStatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_modelSourceIdentifier;
    bool m_modelSourceIdentifierHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    EndpointConfig m_endpointConfig;
    bool m_endpointConfigHasBeenSet = false;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;

    Aws::String m_endpointStatusMessage;
    bool m_endpointStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
