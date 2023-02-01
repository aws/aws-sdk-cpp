/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Destination.h>
#include <aws/cloudtrail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class CreateChannelRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API CreateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the partner or external event source. You cannot change this name
     * after you create the channel. A maximum of one channel is allowed per
     * source.</p> <p> A source can be either <code>Custom</code> for all valid
     * non-Amazon Web Services events, or the name of a partner event source. For
     * information about the source names for available partners, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-event-data-store-integration.html#cloudtrail-lake-partner-information">Additional
     * information about integration partners</a> in the CloudTrail User Guide. </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The name of the partner or external event source. You cannot change this name
     * after you create the channel. A maximum of one channel is allowed per
     * source.</p> <p> A source can be either <code>Custom</code> for all valid
     * non-Amazon Web Services events, or the name of a partner event source. For
     * information about the source names for available partners, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-event-data-store-integration.html#cloudtrail-lake-partner-information">Additional
     * information about integration partners</a> in the CloudTrail User Guide. </p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The name of the partner or external event source. You cannot change this name
     * after you create the channel. A maximum of one channel is allowed per
     * source.</p> <p> A source can be either <code>Custom</code> for all valid
     * non-Amazon Web Services events, or the name of a partner event source. For
     * information about the source names for available partners, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-event-data-store-integration.html#cloudtrail-lake-partner-information">Additional
     * information about integration partners</a> in the CloudTrail User Guide. </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The name of the partner or external event source. You cannot change this name
     * after you create the channel. A maximum of one channel is allowed per
     * source.</p> <p> A source can be either <code>Custom</code> for all valid
     * non-Amazon Web Services events, or the name of a partner event source. For
     * information about the source names for available partners, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-event-data-store-integration.html#cloudtrail-lake-partner-information">Additional
     * information about integration partners</a> in the CloudTrail User Guide. </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The name of the partner or external event source. You cannot change this name
     * after you create the channel. A maximum of one channel is allowed per
     * source.</p> <p> A source can be either <code>Custom</code> for all valid
     * non-Amazon Web Services events, or the name of a partner event source. For
     * information about the source names for available partners, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-event-data-store-integration.html#cloudtrail-lake-partner-information">Additional
     * information about integration partners</a> in the CloudTrail User Guide. </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The name of the partner or external event source. You cannot change this name
     * after you create the channel. A maximum of one channel is allowed per
     * source.</p> <p> A source can be either <code>Custom</code> for all valid
     * non-Amazon Web Services events, or the name of a partner event source. For
     * information about the source names for available partners, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-event-data-store-integration.html#cloudtrail-lake-partner-information">Additional
     * information about integration partners</a> in the CloudTrail User Guide. </p>
     */
    inline CreateChannelRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The name of the partner or external event source. You cannot change this name
     * after you create the channel. A maximum of one channel is allowed per
     * source.</p> <p> A source can be either <code>Custom</code> for all valid
     * non-Amazon Web Services events, or the name of a partner event source. For
     * information about the source names for available partners, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-event-data-store-integration.html#cloudtrail-lake-partner-information">Additional
     * information about integration partners</a> in the CloudTrail User Guide. </p>
     */
    inline CreateChannelRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The name of the partner or external event source. You cannot change this name
     * after you create the channel. A maximum of one channel is allowed per
     * source.</p> <p> A source can be either <code>Custom</code> for all valid
     * non-Amazon Web Services events, or the name of a partner event source. For
     * information about the source names for available partners, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-event-data-store-integration.html#cloudtrail-lake-partner-information">Additional
     * information about integration partners</a> in the CloudTrail User Guide. </p>
     */
    inline CreateChannelRequest& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>One or more event data stores to which events arriving through a channel will
     * be logged.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>One or more event data stores to which events arriving through a channel will
     * be logged.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>One or more event data stores to which events arriving through a channel will
     * be logged.</p>
     */
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>One or more event data stores to which events arriving through a channel will
     * be logged.</p>
     */
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>One or more event data stores to which events arriving through a channel will
     * be logged.</p>
     */
    inline CreateChannelRequest& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>One or more event data stores to which events arriving through a channel will
     * be logged.</p>
     */
    inline CreateChannelRequest& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>One or more event data stores to which events arriving through a channel will
     * be logged.</p>
     */
    inline CreateChannelRequest& AddDestinations(const Destination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>One or more event data stores to which events arriving through a channel will
     * be logged.</p>
     */
    inline CreateChannelRequest& AddDestinations(Destination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateChannelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateChannelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateChannelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateChannelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Destination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
