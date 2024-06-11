/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/DestinationConfiguration.h>
#include <aws/iottwinmaker/model/SourceConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class CreateMetadataTransferJobRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API CreateMetadataTransferJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMetadataTransferJob"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline const Aws::String& GetMetadataTransferJobId() const{ return m_metadataTransferJobId; }
    inline bool MetadataTransferJobIdHasBeenSet() const { return m_metadataTransferJobIdHasBeenSet; }
    inline void SetMetadataTransferJobId(const Aws::String& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = value; }
    inline void SetMetadataTransferJobId(Aws::String&& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = std::move(value); }
    inline void SetMetadataTransferJobId(const char* value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId.assign(value); }
    inline CreateMetadataTransferJobRequest& WithMetadataTransferJobId(const Aws::String& value) { SetMetadataTransferJobId(value); return *this;}
    inline CreateMetadataTransferJobRequest& WithMetadataTransferJobId(Aws::String&& value) { SetMetadataTransferJobId(std::move(value)); return *this;}
    inline CreateMetadataTransferJobRequest& WithMetadataTransferJobId(const char* value) { SetMetadataTransferJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateMetadataTransferJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateMetadataTransferJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateMetadataTransferJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline const Aws::Vector<SourceConfiguration>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<SourceConfiguration>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<SourceConfiguration>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline CreateMetadataTransferJobRequest& WithSources(const Aws::Vector<SourceConfiguration>& value) { SetSources(value); return *this;}
    inline CreateMetadataTransferJobRequest& WithSources(Aws::Vector<SourceConfiguration>&& value) { SetSources(std::move(value)); return *this;}
    inline CreateMetadataTransferJobRequest& AddSources(const SourceConfiguration& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline CreateMetadataTransferJobRequest& AddSources(SourceConfiguration&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job destination.</p>
     */
    inline const DestinationConfiguration& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const DestinationConfiguration& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(DestinationConfiguration&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline CreateMetadataTransferJobRequest& WithDestination(const DestinationConfiguration& value) { SetDestination(value); return *this;}
    inline CreateMetadataTransferJobRequest& WithDestination(DestinationConfiguration&& value) { SetDestination(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_metadataTransferJobId;
    bool m_metadataTransferJobIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<SourceConfiguration> m_sources;
    bool m_sourcesHasBeenSet = false;

    DestinationConfiguration m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
