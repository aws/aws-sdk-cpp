/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/model/StreamClass.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/gameliftstreams/model/LocationConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class CreateStreamGroupRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API CreateStreamGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamGroup"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A unique identifier that represents a client request. The request is
     * idempotent, which ensures that an API request completes only once. When users
     * send a request, Amazon GameLift Streams automatically populates this field. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateStreamGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateStreamGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateStreamGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon GameLift Streams application that you
     * want to associate to a stream group as the default application. The application
     * must be in <code>READY</code> status. By setting the default application
     * identifier, you will optimize startup performance of this application in your
     * stream group. Once set, this application cannot be disassociated from the stream
     * group, unlike applications that are associated using AssociateApplications. If
     * not set when creating a stream group, you will need to call
     * AssociateApplications later, before you can start streaming.</p>
     */
    inline const Aws::String& GetDefaultApplicationIdentifier() const{ return m_defaultApplicationIdentifier; }
    inline bool DefaultApplicationIdentifierHasBeenSet() const { return m_defaultApplicationIdentifierHasBeenSet; }
    inline void SetDefaultApplicationIdentifier(const Aws::String& value) { m_defaultApplicationIdentifierHasBeenSet = true; m_defaultApplicationIdentifier = value; }
    inline void SetDefaultApplicationIdentifier(Aws::String&& value) { m_defaultApplicationIdentifierHasBeenSet = true; m_defaultApplicationIdentifier = std::move(value); }
    inline void SetDefaultApplicationIdentifier(const char* value) { m_defaultApplicationIdentifierHasBeenSet = true; m_defaultApplicationIdentifier.assign(value); }
    inline CreateStreamGroupRequest& WithDefaultApplicationIdentifier(const Aws::String& value) { SetDefaultApplicationIdentifier(value); return *this;}
    inline CreateStreamGroupRequest& WithDefaultApplicationIdentifier(Aws::String&& value) { SetDefaultApplicationIdentifier(std::move(value)); return *this;}
    inline CreateStreamGroupRequest& WithDefaultApplicationIdentifier(const char* value) { SetDefaultApplicationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the stream group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateStreamGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStreamGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStreamGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of one or more locations and the streaming capacity for each location.
     * </p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocationConfigurations() const{ return m_locationConfigurations; }
    inline bool LocationConfigurationsHasBeenSet() const { return m_locationConfigurationsHasBeenSet; }
    inline void SetLocationConfigurations(const Aws::Vector<LocationConfiguration>& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations = value; }
    inline void SetLocationConfigurations(Aws::Vector<LocationConfiguration>&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations = std::move(value); }
    inline CreateStreamGroupRequest& WithLocationConfigurations(const Aws::Vector<LocationConfiguration>& value) { SetLocationConfigurations(value); return *this;}
    inline CreateStreamGroupRequest& WithLocationConfigurations(Aws::Vector<LocationConfiguration>&& value) { SetLocationConfigurations(std::move(value)); return *this;}
    inline CreateStreamGroupRequest& AddLocationConfigurations(const LocationConfiguration& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations.push_back(value); return *this; }
    inline CreateStreamGroupRequest& AddLocationConfigurations(LocationConfiguration&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target stream quality for sessions that are hosted in this stream group.
     * Set a stream class that is appropriate to the type of content that you're
     * streaming. Stream class determines the type of computing resources Amazon
     * GameLift Streams uses and impacts the cost of streaming. The following options
     * are available: </p> <p>A stream class can be one of the following:</p> <ul> <li>
     * <p> <b> <code>gen5n_win2022</code> (NVIDIA, ultra)</b> Supports applications
     * with extremely high 3D scene complexity. Runs applications on Microsoft Windows
     * Server 2022 Base and supports DirectX 12. Compatible with most Unreal Engine 5.x
     * builds, 32-bit applications, and anti-cheat technology. Uses NVIDIA A10G Tensor
     * GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li> <li> <p>Reference
     * frame rate: 60 fps</p> </li> <li> <p>Workload specifications: 8 vCPUs, 32 GB
     * RAM, 24 GB VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent stream
     * session</p> </li> </ul> </li> <li> <p> <b> <code>gen5n_high</code> (NVIDIA,
     * high)</b> Supports applications with moderate to high 3D scene complexity. Uses
     * NVIDIA A10G Tensor GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li>
     * <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload specifications:
     * 4 vCPUs, 16 GB RAM, 12 GB VRAM</p> </li> <li> <p>Tenancy: Supports up to 2
     * concurrent stream sessions</p> </li> </ul> </li> <li> <p> <b>
     * <code>gen5n_ultra</code> (NVIDIA, ultra)</b> Supports applications with
     * extremely high 3D scene complexity. Uses dedicated NVIDIA A10G Tensor GPU.</p>
     * <ul> <li> <p>Reference resolution: 1080p</p> </li> <li> <p>Reference frame rate:
     * 60 fps</p> </li> <li> <p>Workload specifications: 8 vCPUs, 32 GB RAM, 24 GB
     * VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent stream session</p> </li>
     * </ul> </li> <li> <p> <b> <code>gen4n_win2022</code> (NVIDIA, ultra)</b> Supports
     * applications with extremely high 3D scene complexity. Runs applications on
     * Microsoft Windows Server 2022 Base and supports DirectX 12. Compatible with most
     * Unreal Engine 5.2 and 5.3 builds, 32-bit applications, and anti-cheat
     * technology. Uses NVIDIA T4 Tensor GPU.</p> <ul> <li> <p>Reference resolution:
     * 1080p</p> </li> <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload
     * specifications: 8 vCPUs, 32 GB RAM, 16 GB VRAM</p> </li> <li> <p>Tenancy:
     * Supports 1 concurrent stream session</p> </li> </ul> </li> <li> <p> <b>
     * <code>gen4n_high</code> (NVIDIA, high)</b> Supports applications with moderate
     * to high 3D scene complexity. Uses NVIDIA T4 Tensor GPU.</p> <ul> <li>
     * <p>Reference resolution: 1080p</p> </li> <li> <p>Reference frame rate: 60
     * fps</p> </li> <li> <p>Workload specifications: 4 vCPUs, 16 GB RAM, 8 GB VRAM</p>
     * </li> <li> <p>Tenancy: Supports up to 2 concurrent stream sessions</p> </li>
     * </ul> </li> <li> <p> <b> <code>gen4n_ultra</code> (NVIDIA, ultra)</b> Supports
     * applications with high 3D scene complexity. Uses dedicated NVIDIA T4 Tensor
     * GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li> <li> <p>Reference
     * frame rate: 60 fps</p> </li> <li> <p>Workload specifications: 8 vCPUs, 32 GB
     * RAM, 16 GB VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent stream
     * session</p> </li> </ul> </li> </ul>
     */
    inline const StreamClass& GetStreamClass() const{ return m_streamClass; }
    inline bool StreamClassHasBeenSet() const { return m_streamClassHasBeenSet; }
    inline void SetStreamClass(const StreamClass& value) { m_streamClassHasBeenSet = true; m_streamClass = value; }
    inline void SetStreamClass(StreamClass&& value) { m_streamClassHasBeenSet = true; m_streamClass = std::move(value); }
    inline CreateStreamGroupRequest& WithStreamClass(const StreamClass& value) { SetStreamClass(value); return *this;}
    inline CreateStreamGroupRequest& WithStreamClass(StreamClass&& value) { SetStreamClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the new stream group resource. Tags are
     * developer-defined key-value pairs. It is useful to tag Amazon Web Services
     * resources for resource management, access management, and cost allocation. See
     * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">
     * Tagging Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>. You can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags on existing resources.
     * The maximum tag limit might be lower than stated. See the <i>Amazon Web Services
     * </i> for actual tagging limits.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateStreamGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateStreamGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStreamGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateStreamGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStreamGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStreamGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateStreamGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStreamGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStreamGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_defaultApplicationIdentifier;
    bool m_defaultApplicationIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locationConfigurations;
    bool m_locationConfigurationsHasBeenSet = false;

    StreamClass m_streamClass;
    bool m_streamClassHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
