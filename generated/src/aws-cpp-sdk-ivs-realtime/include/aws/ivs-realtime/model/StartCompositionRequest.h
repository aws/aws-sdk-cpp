/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/LayoutConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ivs-realtime/model/DestinationConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class StartCompositionRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API StartCompositionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartComposition"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>Array of destination configuration.</p>
     */
    inline const Aws::Vector<DestinationConfiguration>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>Array of destination configuration.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>Array of destination configuration.</p>
     */
    inline void SetDestinations(const Aws::Vector<DestinationConfiguration>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>Array of destination configuration.</p>
     */
    inline void SetDestinations(Aws::Vector<DestinationConfiguration>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>Array of destination configuration.</p>
     */
    inline StartCompositionRequest& WithDestinations(const Aws::Vector<DestinationConfiguration>& value) { SetDestinations(value); return *this;}

    /**
     * <p>Array of destination configuration.</p>
     */
    inline StartCompositionRequest& WithDestinations(Aws::Vector<DestinationConfiguration>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>Array of destination configuration.</p>
     */
    inline StartCompositionRequest& AddDestinations(const DestinationConfiguration& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>Array of destination configuration.</p>
     */
    inline StartCompositionRequest& AddDestinations(DestinationConfiguration&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>Idempotency token.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Idempotency token.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>Idempotency token.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Idempotency token.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>Idempotency token.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Idempotency token.</p>
     */
    inline StartCompositionRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Idempotency token.</p>
     */
    inline StartCompositionRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>Idempotency token.</p>
     */
    inline StartCompositionRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>Layout object to configure composition parameters.</p>
     */
    inline const LayoutConfiguration& GetLayout() const{ return m_layout; }

    /**
     * <p>Layout object to configure composition parameters.</p>
     */
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }

    /**
     * <p>Layout object to configure composition parameters.</p>
     */
    inline void SetLayout(const LayoutConfiguration& value) { m_layoutHasBeenSet = true; m_layout = value; }

    /**
     * <p>Layout object to configure composition parameters.</p>
     */
    inline void SetLayout(LayoutConfiguration&& value) { m_layoutHasBeenSet = true; m_layout = std::move(value); }

    /**
     * <p>Layout object to configure composition parameters.</p>
     */
    inline StartCompositionRequest& WithLayout(const LayoutConfiguration& value) { SetLayout(value); return *this;}

    /**
     * <p>Layout object to configure composition parameters.</p>
     */
    inline StartCompositionRequest& WithLayout(LayoutConfiguration&& value) { SetLayout(std::move(value)); return *this;}


    /**
     * <p>ARN of the stage to be used for compositing.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }

    /**
     * <p>ARN of the stage to be used for compositing.</p>
     */
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }

    /**
     * <p>ARN of the stage to be used for compositing.</p>
     */
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }

    /**
     * <p>ARN of the stage to be used for compositing.</p>
     */
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }

    /**
     * <p>ARN of the stage to be used for compositing.</p>
     */
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }

    /**
     * <p>ARN of the stage to be used for compositing.</p>
     */
    inline StartCompositionRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}

    /**
     * <p>ARN of the stage to be used for compositing.</p>
     */
    inline StartCompositionRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the stage to be used for compositing.</p>
     */
    inline StartCompositionRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}


    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StartCompositionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<DestinationConfiguration> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    LayoutConfiguration m_layout;
    bool m_layoutHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
