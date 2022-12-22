/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/StartReadSetActivationJobSourceItem.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class StartReadSetActivationJobRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API StartReadSetActivationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReadSetActivationJob"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline StartReadSetActivationJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline StartReadSetActivationJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline StartReadSetActivationJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline StartReadSetActivationJobRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline StartReadSetActivationJobRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline StartReadSetActivationJobRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p>The job's sources.</p>
     */
    inline const Aws::Vector<StartReadSetActivationJobSourceItem>& GetSources() const{ return m_sources; }

    /**
     * <p>The job's sources.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The job's sources.</p>
     */
    inline void SetSources(const Aws::Vector<StartReadSetActivationJobSourceItem>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The job's sources.</p>
     */
    inline void SetSources(Aws::Vector<StartReadSetActivationJobSourceItem>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The job's sources.</p>
     */
    inline StartReadSetActivationJobRequest& WithSources(const Aws::Vector<StartReadSetActivationJobSourceItem>& value) { SetSources(value); return *this;}

    /**
     * <p>The job's sources.</p>
     */
    inline StartReadSetActivationJobRequest& WithSources(Aws::Vector<StartReadSetActivationJobSourceItem>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The job's sources.</p>
     */
    inline StartReadSetActivationJobRequest& AddSources(const StartReadSetActivationJobSourceItem& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The job's sources.</p>
     */
    inline StartReadSetActivationJobRequest& AddSources(StartReadSetActivationJobSourceItem&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::Vector<StartReadSetActivationJobSourceItem> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
