/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/StartReadSetImportJobSourceItem.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class StartReadSetImportJobRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API StartReadSetImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReadSetImportJob"; }

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
    inline StartReadSetImportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline StartReadSetImportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>To ensure that jobs don't run multiple times, specify a unique token for each
     * job.</p>
     */
    inline StartReadSetImportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A service role for the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>A service role for the job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>A service role for the job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>A service role for the job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>A service role for the job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>A service role for the job.</p>
     */
    inline StartReadSetImportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>A service role for the job.</p>
     */
    inline StartReadSetImportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>A service role for the job.</p>
     */
    inline StartReadSetImportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline StartReadSetImportJobRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline StartReadSetImportJobRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline StartReadSetImportJobRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p>Source files to import.</p>
     */
    inline const Aws::Vector<StartReadSetImportJobSourceItem>& GetSources() const{ return m_sources; }

    /**
     * <p>Source files to import.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>Source files to import.</p>
     */
    inline void SetSources(const Aws::Vector<StartReadSetImportJobSourceItem>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>Source files to import.</p>
     */
    inline void SetSources(Aws::Vector<StartReadSetImportJobSourceItem>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>Source files to import.</p>
     */
    inline StartReadSetImportJobRequest& WithSources(const Aws::Vector<StartReadSetImportJobSourceItem>& value) { SetSources(value); return *this;}

    /**
     * <p>Source files to import.</p>
     */
    inline StartReadSetImportJobRequest& WithSources(Aws::Vector<StartReadSetImportJobSourceItem>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>Source files to import.</p>
     */
    inline StartReadSetImportJobRequest& AddSources(const StartReadSetImportJobSourceItem& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>Source files to import.</p>
     */
    inline StartReadSetImportJobRequest& AddSources(StartReadSetImportJobSourceItem&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::Vector<StartReadSetImportJobSourceItem> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
