/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/StreamClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_GAMELIFTSTREAMS_API CreateStreamGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamGroup"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A descriptive label for the stream group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateStreamGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
     * Server 2022 Base and supports DirectX 12. Compatible with Unreal Engine versions
     * up through 5.4, 32 and 64-bit applications, and anti-cheat technology. Uses
     * NVIDIA A10G Tensor GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li>
     * <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload specifications:
     * 8 vCPUs, 32 GB RAM, 24 GB VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent
     * stream session</p> </li> </ul> </li> <li> <p> <b> <code>gen5n_high</code>
     * (NVIDIA, high)</b> Supports applications with moderate to high 3D scene
     * complexity. Uses NVIDIA A10G Tensor GPU.</p> <ul> <li> <p>Reference resolution:
     * 1080p</p> </li> <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload
     * specifications: 4 vCPUs, 16 GB RAM, 12 GB VRAM</p> </li> <li> <p>Tenancy:
     * Supports up to 2 concurrent stream sessions</p> </li> </ul> </li> <li> <p> <b>
     * <code>gen5n_ultra</code> (NVIDIA, ultra)</b> Supports applications with
     * extremely high 3D scene complexity. Uses dedicated NVIDIA A10G Tensor GPU.</p>
     * <ul> <li> <p>Reference resolution: 1080p</p> </li> <li> <p>Reference frame rate:
     * 60 fps</p> </li> <li> <p>Workload specifications: 8 vCPUs, 32 GB RAM, 24 GB
     * VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent stream session</p> </li>
     * </ul> </li> <li> <p> <b> <code>gen4n_win2022</code> (NVIDIA, ultra)</b> Supports
     * applications with extremely high 3D scene complexity. Runs applications on
     * Microsoft Windows Server 2022 Base and supports DirectX 12. Compatible with
     * Unreal Engine versions up through 5.4, 32 and 64-bit applications, and
     * anti-cheat technology. Uses NVIDIA T4 Tensor GPU.</p> <ul> <li> <p>Reference
     * resolution: 1080p</p> </li> <li> <p>Reference frame rate: 60 fps</p> </li> <li>
     * <p>Workload specifications: 8 vCPUs, 32 GB RAM, 16 GB VRAM</p> </li> <li>
     * <p>Tenancy: Supports 1 concurrent stream session</p> </li> </ul> </li> <li> <p>
     * <b> <code>gen4n_high</code> (NVIDIA, high)</b> Supports applications with
     * moderate to high 3D scene complexity. Uses NVIDIA T4 Tensor GPU.</p> <ul> <li>
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
    inline StreamClass GetStreamClass() const { return m_streamClass; }
    inline bool StreamClassHasBeenSet() const { return m_streamClassHasBeenSet; }
    inline void SetStreamClass(StreamClass value) { m_streamClassHasBeenSet = true; m_streamClass = value; }
    inline CreateStreamGroupRequest& WithStreamClass(StreamClass value) { SetStreamClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon GameLift Streams application that you
     * want to set as the default application in a stream group. The application that
     * you specify must be in <code>READY</code> status. The default application is
     * pre-cached on always-on compute resources, reducing stream startup times. Other
     * applications are automatically cached as needed.</p> <p>If you do not link an
     * application when you create a stream group, you will need to link one later,
     * before you can start streaming, using <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_AssociateApplications.html">AssociateApplications</a>.</p>
     * <p>This value is an <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
     * Example ID: <code>a-9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetDefaultApplicationIdentifier() const { return m_defaultApplicationIdentifier; }
    inline bool DefaultApplicationIdentifierHasBeenSet() const { return m_defaultApplicationIdentifierHasBeenSet; }
    template<typename DefaultApplicationIdentifierT = Aws::String>
    void SetDefaultApplicationIdentifier(DefaultApplicationIdentifierT&& value) { m_defaultApplicationIdentifierHasBeenSet = true; m_defaultApplicationIdentifier = std::forward<DefaultApplicationIdentifierT>(value); }
    template<typename DefaultApplicationIdentifierT = Aws::String>
    CreateStreamGroupRequest& WithDefaultApplicationIdentifier(DefaultApplicationIdentifierT&& value) { SetDefaultApplicationIdentifier(std::forward<DefaultApplicationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of one or more locations and the streaming capacity for each location.
     * </p>
     */
    inline const Aws::Vector<LocationConfiguration>& GetLocationConfigurations() const { return m_locationConfigurations; }
    inline bool LocationConfigurationsHasBeenSet() const { return m_locationConfigurationsHasBeenSet; }
    template<typename LocationConfigurationsT = Aws::Vector<LocationConfiguration>>
    void SetLocationConfigurations(LocationConfigurationsT&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations = std::forward<LocationConfigurationsT>(value); }
    template<typename LocationConfigurationsT = Aws::Vector<LocationConfiguration>>
    CreateStreamGroupRequest& WithLocationConfigurations(LocationConfigurationsT&& value) { SetLocationConfigurations(std::forward<LocationConfigurationsT>(value)); return *this;}
    template<typename LocationConfigurationsT = LocationConfiguration>
    CreateStreamGroupRequest& AddLocationConfigurations(LocationConfigurationsT&& value) { m_locationConfigurationsHasBeenSet = true; m_locationConfigurations.emplace_back(std::forward<LocationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the new stream group resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management and cost allocation. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>. You can use <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_TagResource.html">TagResource</a>
     * to add tags, <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_UntagResource.html">UntagResource</a>
     * to remove tags, and <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_ListTagsForResource.html">ListTagsForResource</a>
     * to view tags on existing resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateStreamGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateStreamGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> A unique identifier that represents a client request. The request is
     * idempotent, which ensures that an API request completes only once. When users
     * send a request, Amazon GameLift Streams automatically populates this field. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateStreamGroupRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StreamClass m_streamClass{StreamClass::NOT_SET};
    bool m_streamClassHasBeenSet = false;

    Aws::String m_defaultApplicationIdentifier;
    bool m_defaultApplicationIdentifierHasBeenSet = false;

    Aws::Vector<LocationConfiguration> m_locationConfigurations;
    bool m_locationConfigurationsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
