/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/Status.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides a summary of an endpoint for a model from Amazon Bedrock
   * Marketplace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/MarketplaceModelEndpointSummary">AWS
   * API Reference</a></p>
   */
  class MarketplaceModelEndpointSummary
  {
  public:
    AWS_BEDROCK_API MarketplaceModelEndpointSummary();
    AWS_BEDROCK_API MarketplaceModelEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API MarketplaceModelEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MarketplaceModelEndpointSummary& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline MarketplaceModelEndpointSummary& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline MarketplaceModelEndpointSummary& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
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
    inline MarketplaceModelEndpointSummary& WithModelSourceIdentifier(const Aws::String& value) { SetModelSourceIdentifier(value); return *this;}
    inline MarketplaceModelEndpointSummary& WithModelSourceIdentifier(Aws::String&& value) { SetModelSourceIdentifier(std::move(value)); return *this;}
    inline MarketplaceModelEndpointSummary& WithModelSourceIdentifier(const char* value) { SetModelSourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the endpoint in Amazon Bedrock Marketplace.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MarketplaceModelEndpointSummary& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline MarketplaceModelEndpointSummary& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
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
    inline MarketplaceModelEndpointSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline MarketplaceModelEndpointSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline MarketplaceModelEndpointSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline MarketplaceModelEndpointSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline MarketplaceModelEndpointSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the endpoint was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline MarketplaceModelEndpointSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline MarketplaceModelEndpointSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
