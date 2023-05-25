/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TrafficDistributionGroupStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about a traffic distribution group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TrafficDistributionGroup">AWS
   * API Reference</a></p>
   */
  class TrafficDistributionGroup
  {
  public:
    AWS_CONNECT_API TrafficDistributionGroup();
    AWS_CONNECT_API TrafficDistributionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TrafficDistributionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline TrafficDistributionGroup& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline TrafficDistributionGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline TrafficDistributionGroup& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline TrafficDistributionGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline TrafficDistributionGroup& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline TrafficDistributionGroup& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline TrafficDistributionGroup& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The status of the traffic distribution group.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>ACTIVE</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has succeeded.</p> </li> <li> <p> <code>CREATION_FAILED</code>
     * indicates that the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>PENDING_DELETION</code> means the
     * previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>DELETION_FAILED</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> means
     * the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdateTrafficDistributionGroup.html">UpdateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> </ul>
     */
    inline const TrafficDistributionGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the traffic distribution group.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>ACTIVE</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has succeeded.</p> </li> <li> <p> <code>CREATION_FAILED</code>
     * indicates that the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>PENDING_DELETION</code> means the
     * previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>DELETION_FAILED</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> means
     * the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdateTrafficDistributionGroup.html">UpdateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the traffic distribution group.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>ACTIVE</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has succeeded.</p> </li> <li> <p> <code>CREATION_FAILED</code>
     * indicates that the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>PENDING_DELETION</code> means the
     * previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>DELETION_FAILED</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> means
     * the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdateTrafficDistributionGroup.html">UpdateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> </ul>
     */
    inline void SetStatus(const TrafficDistributionGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the traffic distribution group.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>ACTIVE</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has succeeded.</p> </li> <li> <p> <code>CREATION_FAILED</code>
     * indicates that the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>PENDING_DELETION</code> means the
     * previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>DELETION_FAILED</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> means
     * the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdateTrafficDistributionGroup.html">UpdateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> </ul>
     */
    inline void SetStatus(TrafficDistributionGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the traffic distribution group.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>ACTIVE</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has succeeded.</p> </li> <li> <p> <code>CREATION_FAILED</code>
     * indicates that the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>PENDING_DELETION</code> means the
     * previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>DELETION_FAILED</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> means
     * the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdateTrafficDistributionGroup.html">UpdateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> </ul>
     */
    inline TrafficDistributionGroup& WithStatus(const TrafficDistributionGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the traffic distribution group.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>ACTIVE</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has succeeded.</p> </li> <li> <p> <code>CREATION_FAILED</code>
     * indicates that the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateTrafficDistributionGroup.html">CreateTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>PENDING_DELETION</code> means the
     * previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> <li> <p>
     * <code>DELETION_FAILED</code> means the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteTrafficDistributionGroup.html">DeleteTrafficDistributionGroup</a>
     * operation has failed.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> means
     * the previous <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdateTrafficDistributionGroup.html">UpdateTrafficDistributionGroup</a>
     * operation is still in progress and has not yet completed.</p> </li> </ul>
     */
    inline TrafficDistributionGroup& WithStatus(TrafficDistributionGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline TrafficDistributionGroup& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    TrafficDistributionGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
