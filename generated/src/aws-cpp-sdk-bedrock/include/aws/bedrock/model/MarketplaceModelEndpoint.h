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
    AWS_BEDROCK_API MarketplaceModelEndpoint();
    AWS_BEDROCK_API MarketplaceModelEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API MarketplaceModelEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }
    inline MarketplaceModelEndpoint& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline MarketplaceModelEndpoint& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline MarketplaceModelEndpoint& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the model from Amazon Bedrock Marketplace that is deployed on this
     * endpoint.</p>
     */
    inline const Aws::String& GetModelSourceIdentifier() const{ return m_modelSourceIdentifier; }
    inline bool ModelSourceIdentifierHasBeenSet() const { return m_modelSourceIdentifierHasBeenSet; }
    inline void SetModelSourceIdentifier(const Aws::String& value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier = value; }
    inline void SetModelSourceIdentifier(Aws::String&& value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier = std::move(value); }
    inline void SetModelSourceIdentifier(const char* value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier.assign(value); }
    inline MarketplaceModelEndpoint& WithModelSourceIdentifier(const Aws::String& value) { SetModelSourceIdentifier(value); return *this;}
    inline MarketplaceModelEndpoint& WithModelSourceIdentifier(Aws::String&& value) { SetModelSourceIdentifier(std::move(value)); return *this;}
    inline MarketplaceModelEndpoint& WithModelSourceIdentifier(const char* value) { SetModelSourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the endpoint in Amazon Bedrock Marketplace (e.g.,
     * ACTIVE, INACTIVE).</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MarketplaceModelEndpoint& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline MarketplaceModelEndpoint& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the overall status, if available.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline MarketplaceModelEndpoint& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline MarketplaceModelEndpoint& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline MarketplaceModelEndpoint& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the endpoint was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline MarketplaceModelEndpoint& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline MarketplaceModelEndpoint& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the endpoint was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline MarketplaceModelEndpoint& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline MarketplaceModelEndpoint& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the endpoint, including the number and type of instances
     * used.</p>
     */
    inline const EndpointConfig& GetEndpointConfig() const{ return m_endpointConfig; }
    inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
    inline void SetEndpointConfig(const EndpointConfig& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = value; }
    inline void SetEndpointConfig(EndpointConfig&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::move(value); }
    inline MarketplaceModelEndpoint& WithEndpointConfig(const EndpointConfig& value) { SetEndpointConfig(value); return *this;}
    inline MarketplaceModelEndpoint& WithEndpointConfig(EndpointConfig&& value) { SetEndpointConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the endpoint (e.g., Creating, InService, Updating,
     * Failed).</p>
     */
    inline const Aws::String& GetEndpointStatus() const{ return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    inline void SetEndpointStatus(const Aws::String& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }
    inline void SetEndpointStatus(Aws::String&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }
    inline void SetEndpointStatus(const char* value) { m_endpointStatusHasBeenSet = true; m_endpointStatus.assign(value); }
    inline MarketplaceModelEndpoint& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}
    inline MarketplaceModelEndpoint& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}
    inline MarketplaceModelEndpoint& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the endpoint status, if available.</p>
     */
    inline const Aws::String& GetEndpointStatusMessage() const{ return m_endpointStatusMessage; }
    inline bool EndpointStatusMessageHasBeenSet() const { return m_endpointStatusMessageHasBeenSet; }
    inline void SetEndpointStatusMessage(const Aws::String& value) { m_endpointStatusMessageHasBeenSet = true; m_endpointStatusMessage = value; }
    inline void SetEndpointStatusMessage(Aws::String&& value) { m_endpointStatusMessageHasBeenSet = true; m_endpointStatusMessage = std::move(value); }
    inline void SetEndpointStatusMessage(const char* value) { m_endpointStatusMessageHasBeenSet = true; m_endpointStatusMessage.assign(value); }
    inline MarketplaceModelEndpoint& WithEndpointStatusMessage(const Aws::String& value) { SetEndpointStatusMessage(value); return *this;}
    inline MarketplaceModelEndpoint& WithEndpointStatusMessage(Aws::String&& value) { SetEndpointStatusMessage(std::move(value)); return *this;}
    inline MarketplaceModelEndpoint& WithEndpointStatusMessage(const char* value) { SetEndpointStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_modelSourceIdentifier;
    bool m_modelSourceIdentifierHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
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
