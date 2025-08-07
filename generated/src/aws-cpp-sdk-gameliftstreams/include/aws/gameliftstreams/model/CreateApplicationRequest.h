/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/RuntimeEnvironment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateApplicationRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API CreateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A human-readable label for the application. You can update this value
     * later.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApplicationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings that identify the operating system for an application
     * resource. This can also include a compatibility layer and other drivers.</p>
     * <p>A runtime environment can be one of the following:</p> <ul> <li> <p> For
     * Linux applications </p> <ul> <li> <p> Ubuntu 22.04 LTS (<code>Type=UBUNTU,
     * Version=22_04_LTS</code>) </p> </li> </ul> </li> <li> <p> For Windows
     * applications </p> <ul> <li> <p>Microsoft Windows Server 2022 Base
     * (<code>Type=WINDOWS, Version=2022</code>)</p> </li> <li> <p>Proton 9.0-2
     * (<code>Type=PROTON, Version=20250516</code>)</p> </li> <li> <p>Proton 8.0-5
     * (<code>Type=PROTON, Version=20241007</code>)</p> </li> <li> <p>Proton 8.0-2c
     * (<code>Type=PROTON, Version=20230704</code>)</p> </li> </ul> </li> </ul>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const { return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    template<typename RuntimeEnvironmentT = RuntimeEnvironment>
    void SetRuntimeEnvironment(RuntimeEnvironmentT&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::forward<RuntimeEnvironmentT>(value); }
    template<typename RuntimeEnvironmentT = RuntimeEnvironment>
    CreateApplicationRequest& WithRuntimeEnvironment(RuntimeEnvironmentT&& value) { SetRuntimeEnvironment(std::forward<RuntimeEnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path and file name of the executable file that launches the content for
     * streaming. Enter a path value that is relative to the location set in
     * <code>ApplicationSourceUri</code>.</p>
     */
    inline const Aws::String& GetExecutablePath() const { return m_executablePath; }
    inline bool ExecutablePathHasBeenSet() const { return m_executablePathHasBeenSet; }
    template<typename ExecutablePathT = Aws::String>
    void SetExecutablePath(ExecutablePathT&& value) { m_executablePathHasBeenSet = true; m_executablePath = std::forward<ExecutablePathT>(value); }
    template<typename ExecutablePathT = Aws::String>
    CreateApplicationRequest& WithExecutablePath(ExecutablePathT&& value) { SetExecutablePath(std::forward<ExecutablePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the content that you want to stream. Enter an Amazon S3 URI
     * to a bucket that contains your game or other application. The location can have
     * a multi-level prefix structure, but it must include all the files needed to run
     * the content. Amazon GameLift Streams copies everything under the specified
     * location.</p> <p>This value is immutable. To designate a different content
     * location, create a new application.</p>  <p>The Amazon S3 bucket and the
     * Amazon GameLift Streams application must be in the same Amazon Web Services
     * Region.</p> 
     */
    inline const Aws::String& GetApplicationSourceUri() const { return m_applicationSourceUri; }
    inline bool ApplicationSourceUriHasBeenSet() const { return m_applicationSourceUriHasBeenSet; }
    template<typename ApplicationSourceUriT = Aws::String>
    void SetApplicationSourceUri(ApplicationSourceUriT&& value) { m_applicationSourceUriHasBeenSet = true; m_applicationSourceUri = std::forward<ApplicationSourceUriT>(value); }
    template<typename ApplicationSourceUriT = Aws::String>
    CreateApplicationRequest& WithApplicationSourceUri(ApplicationSourceUriT&& value) { SetApplicationSourceUri(std::forward<ApplicationSourceUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Locations of log files that your content generates during a stream session.
     * Enter path values that are relative to the <code>ApplicationSourceUri</code>
     * location. You can specify up to 10 log paths. Amazon GameLift Streams uploads
     * designated log files to the Amazon S3 bucket that you specify in
     * <code>ApplicationLogOutputUri</code> at the end of a stream session. To retrieve
     * stored log files, call <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_GetStreamSession.html">GetStreamSession</a>
     * and get the <code>LogFileLocationUri</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationLogPaths() const { return m_applicationLogPaths; }
    inline bool ApplicationLogPathsHasBeenSet() const { return m_applicationLogPathsHasBeenSet; }
    template<typename ApplicationLogPathsT = Aws::Vector<Aws::String>>
    void SetApplicationLogPaths(ApplicationLogPathsT&& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths = std::forward<ApplicationLogPathsT>(value); }
    template<typename ApplicationLogPathsT = Aws::Vector<Aws::String>>
    CreateApplicationRequest& WithApplicationLogPaths(ApplicationLogPathsT&& value) { SetApplicationLogPaths(std::forward<ApplicationLogPathsT>(value)); return *this;}
    template<typename ApplicationLogPathsT = Aws::String>
    CreateApplicationRequest& AddApplicationLogPaths(ApplicationLogPathsT&& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths.emplace_back(std::forward<ApplicationLogPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 URI to a bucket where you would like Amazon GameLift Streams to
     * save application logs. Required if you specify one or more
     * <code>ApplicationLogPaths</code>.</p>  <p>The log bucket must have
     * permissions that give Amazon GameLift Streams access to write the log files. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/applications.html#application-bucket-permission-template">Application
     * log bucket permission policy</a> in the <i>Amazon GameLift Streams Developer
     * Guide</i>.</p> 
     */
    inline const Aws::String& GetApplicationLogOutputUri() const { return m_applicationLogOutputUri; }
    inline bool ApplicationLogOutputUriHasBeenSet() const { return m_applicationLogOutputUriHasBeenSet; }
    template<typename ApplicationLogOutputUriT = Aws::String>
    void SetApplicationLogOutputUri(ApplicationLogOutputUriT&& value) { m_applicationLogOutputUriHasBeenSet = true; m_applicationLogOutputUri = std::forward<ApplicationLogOutputUriT>(value); }
    template<typename ApplicationLogOutputUriT = Aws::String>
    CreateApplicationRequest& WithApplicationLogOutputUri(ApplicationLogOutputUriT&& value) { SetApplicationLogOutputUri(std::forward<ApplicationLogOutputUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the new application resource. Tags are
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
    CreateApplicationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateApplicationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
    CreateApplicationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet = false;

    Aws::String m_executablePath;
    bool m_executablePathHasBeenSet = false;

    Aws::String m_applicationSourceUri;
    bool m_applicationSourceUriHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationLogPaths;
    bool m_applicationLogPathsHasBeenSet = false;

    Aws::String m_applicationLogOutputUri;
    bool m_applicationLogOutputUriHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
