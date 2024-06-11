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


    ///@{
    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TrafficDistributionGroup& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TrafficDistributionGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TrafficDistributionGroup& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline TrafficDistributionGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline TrafficDistributionGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline TrafficDistributionGroup& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the traffic distribution group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrafficDistributionGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrafficDistributionGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrafficDistributionGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the traffic distribution group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TrafficDistributionGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TrafficDistributionGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TrafficDistributionGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline TrafficDistributionGroup& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline TrafficDistributionGroup& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline TrafficDistributionGroup& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
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
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdateTrafficDistribution.html">UpdateTrafficDistribution</a>
     * operation is still in progress and has not yet completed.</p> </li> </ul>
     */
    inline const TrafficDistributionGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TrafficDistributionGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TrafficDistributionGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TrafficDistributionGroup& WithStatus(const TrafficDistributionGroupStatus& value) { SetStatus(value); return *this;}
    inline TrafficDistributionGroup& WithStatus(TrafficDistributionGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TrafficDistributionGroup& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline TrafficDistributionGroup& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline TrafficDistributionGroup& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline TrafficDistributionGroup& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline TrafficDistributionGroup& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline TrafficDistributionGroup& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline TrafficDistributionGroup& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline TrafficDistributionGroup& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline TrafficDistributionGroup& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether this is the default traffic distribution group created during
     * instance replication. The default traffic distribution group cannot be deleted
     * by the <code>DeleteTrafficDistributionGroup</code> API. The default traffic
     * distribution group is deleted as part of the process for deleting a replica.</p>
     *  <p>The <code>SignInConfig</code> distribution is available only on a
     * default <code>TrafficDistributionGroup</code> (see the <code>IsDefault</code>
     * parameter in the <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_TrafficDistributionGroup.html">TrafficDistributionGroup</a>
     * data type). If you call <code>UpdateTrafficDistribution</code> with a modified
     * <code>SignInConfig</code> and a non-default
     * <code>TrafficDistributionGroup</code>, an <code>InvalidRequestException</code>
     * is returned.</p> 
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline TrafficDistributionGroup& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}
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

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
