/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateRunGroupRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateRunGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRunGroup"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The maximum number of CPUs to use in the group.</p>
     */
    inline int GetMaxCpus() const{ return m_maxCpus; }

    /**
     * <p>The maximum number of CPUs to use in the group.</p>
     */
    inline bool MaxCpusHasBeenSet() const { return m_maxCpusHasBeenSet; }

    /**
     * <p>The maximum number of CPUs to use in the group.</p>
     */
    inline void SetMaxCpus(int value) { m_maxCpusHasBeenSet = true; m_maxCpus = value; }

    /**
     * <p>The maximum number of CPUs to use in the group.</p>
     */
    inline CreateRunGroupRequest& WithMaxCpus(int value) { SetMaxCpus(value); return *this;}


    /**
     * <p>A max duration for the group.</p>
     */
    inline int GetMaxDuration() const{ return m_maxDuration; }

    /**
     * <p>A max duration for the group.</p>
     */
    inline bool MaxDurationHasBeenSet() const { return m_maxDurationHasBeenSet; }

    /**
     * <p>A max duration for the group.</p>
     */
    inline void SetMaxDuration(int value) { m_maxDurationHasBeenSet = true; m_maxDuration = value; }

    /**
     * <p>A max duration for the group.</p>
     */
    inline CreateRunGroupRequest& WithMaxDuration(int value) { SetMaxDuration(value); return *this;}


    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline int GetMaxRuns() const{ return m_maxRuns; }

    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline bool MaxRunsHasBeenSet() const { return m_maxRunsHasBeenSet; }

    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline void SetMaxRuns(int value) { m_maxRunsHasBeenSet = true; m_maxRuns = value; }

    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline CreateRunGroupRequest& WithMaxRuns(int value) { SetMaxRuns(value); return *this;}


    /**
     * <p>A name for the group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the group.</p>
     */
    inline CreateRunGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the group.</p>
     */
    inline CreateRunGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the group.</p>
     */
    inline CreateRunGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A request ID for the group.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>A request ID for the group.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>A request ID for the group.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>A request ID for the group.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>A request ID for the group.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>A request ID for the group.</p>
     */
    inline CreateRunGroupRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>A request ID for the group.</p>
     */
    inline CreateRunGroupRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>A request ID for the group.</p>
     */
    inline CreateRunGroupRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>Tags for the group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags for the group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags for the group.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags for the group.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the group.</p>
     */
    inline CreateRunGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    int m_maxCpus;
    bool m_maxCpusHasBeenSet = false;

    int m_maxDuration;
    bool m_maxDurationHasBeenSet = false;

    int m_maxRuns;
    bool m_maxRunsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
