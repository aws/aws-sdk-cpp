/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class CreateCapacityReservationRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API CreateCapacityReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityReservation"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The number of requested data processing units.</p>
     */
    inline int GetTargetDpus() const{ return m_targetDpus; }

    /**
     * <p>The number of requested data processing units.</p>
     */
    inline bool TargetDpusHasBeenSet() const { return m_targetDpusHasBeenSet; }

    /**
     * <p>The number of requested data processing units.</p>
     */
    inline void SetTargetDpus(int value) { m_targetDpusHasBeenSet = true; m_targetDpus = value; }

    /**
     * <p>The number of requested data processing units.</p>
     */
    inline CreateCapacityReservationRequest& WithTargetDpus(int value) { SetTargetDpus(value); return *this;}


    /**
     * <p>The name of the capacity reservation to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the capacity reservation to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the capacity reservation to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the capacity reservation to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the capacity reservation to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the capacity reservation to create.</p>
     */
    inline CreateCapacityReservationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the capacity reservation to create.</p>
     */
    inline CreateCapacityReservationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the capacity reservation to create.</p>
     */
    inline CreateCapacityReservationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags for the capacity reservation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the capacity reservation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the capacity reservation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the capacity reservation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the capacity reservation.</p>
     */
    inline CreateCapacityReservationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the capacity reservation.</p>
     */
    inline CreateCapacityReservationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the capacity reservation.</p>
     */
    inline CreateCapacityReservationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the capacity reservation.</p>
     */
    inline CreateCapacityReservationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    int m_targetDpus;
    bool m_targetDpusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
