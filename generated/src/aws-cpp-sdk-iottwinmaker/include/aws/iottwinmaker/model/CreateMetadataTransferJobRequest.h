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


    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline const Aws::String& GetMetadataTransferJobId() const{ return m_metadataTransferJobId; }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline bool MetadataTransferJobIdHasBeenSet() const { return m_metadataTransferJobIdHasBeenSet; }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline void SetMetadataTransferJobId(const Aws::String& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = value; }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline void SetMetadataTransferJobId(Aws::String&& value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId = std::move(value); }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline void SetMetadataTransferJobId(const char* value) { m_metadataTransferJobIdHasBeenSet = true; m_metadataTransferJobId.assign(value); }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline CreateMetadataTransferJobRequest& WithMetadataTransferJobId(const Aws::String& value) { SetMetadataTransferJobId(value); return *this;}

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline CreateMetadataTransferJobRequest& WithMetadataTransferJobId(Aws::String&& value) { SetMetadataTransferJobId(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline CreateMetadataTransferJobRequest& WithMetadataTransferJobId(const char* value) { SetMetadataTransferJobId(value); return *this;}


    /**
     * <p>The metadata transfer job description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The metadata transfer job description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The metadata transfer job description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The metadata transfer job description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The metadata transfer job description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The metadata transfer job description.</p>
     */
    inline CreateMetadataTransferJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The metadata transfer job description.</p>
     */
    inline CreateMetadataTransferJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job description.</p>
     */
    inline CreateMetadataTransferJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline const Aws::Vector<SourceConfiguration>& GetSources() const{ return m_sources; }

    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline void SetSources(const Aws::Vector<SourceConfiguration>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline void SetSources(Aws::Vector<SourceConfiguration>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline CreateMetadataTransferJobRequest& WithSources(const Aws::Vector<SourceConfiguration>& value) { SetSources(value); return *this;}

    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline CreateMetadataTransferJobRequest& WithSources(Aws::Vector<SourceConfiguration>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline CreateMetadataTransferJobRequest& AddSources(const SourceConfiguration& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The metadata transfer job sources.</p>
     */
    inline CreateMetadataTransferJobRequest& AddSources(SourceConfiguration&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The metadata transfer job destination.</p>
     */
    inline const DestinationConfiguration& GetDestination() const{ return m_destination; }

    /**
     * <p>The metadata transfer job destination.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The metadata transfer job destination.</p>
     */
    inline void SetDestination(const DestinationConfiguration& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The metadata transfer job destination.</p>
     */
    inline void SetDestination(DestinationConfiguration&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The metadata transfer job destination.</p>
     */
    inline CreateMetadataTransferJobRequest& WithDestination(const DestinationConfiguration& value) { SetDestination(value); return *this;}

    /**
     * <p>The metadata transfer job destination.</p>
     */
    inline CreateMetadataTransferJobRequest& WithDestination(DestinationConfiguration&& value) { SetDestination(std::move(value)); return *this;}

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
