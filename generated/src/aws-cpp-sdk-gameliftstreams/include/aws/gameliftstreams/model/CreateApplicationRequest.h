/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/model/RuntimeEnvironment.h>
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
    AWS_GAMELIFTSTREAMS_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An Amazon S3 URI to a bucket where you would like Amazon GameLift Streams to
     * save application logs. Use the following format for the URI: <code>s3://[bucket
     * name]/[prefix]</code>. Required if you specify one or more
     * <code>LogPaths</code>.</p>  <p>The log bucket must have permissions that
     * give Amazon GameLift Streams access to write the log files. For more
     * information, see <b>Getting Started</b> in the Amazon GameLift Streams Developer
     * Guide. </p> 
     */
    inline const Aws::String& GetApplicationLogOutputUri() const{ return m_applicationLogOutputUri; }
    inline bool ApplicationLogOutputUriHasBeenSet() const { return m_applicationLogOutputUriHasBeenSet; }
    inline void SetApplicationLogOutputUri(const Aws::String& value) { m_applicationLogOutputUriHasBeenSet = true; m_applicationLogOutputUri = value; }
    inline void SetApplicationLogOutputUri(Aws::String&& value) { m_applicationLogOutputUriHasBeenSet = true; m_applicationLogOutputUri = std::move(value); }
    inline void SetApplicationLogOutputUri(const char* value) { m_applicationLogOutputUriHasBeenSet = true; m_applicationLogOutputUri.assign(value); }
    inline CreateApplicationRequest& WithApplicationLogOutputUri(const Aws::String& value) { SetApplicationLogOutputUri(value); return *this;}
    inline CreateApplicationRequest& WithApplicationLogOutputUri(Aws::String&& value) { SetApplicationLogOutputUri(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithApplicationLogOutputUri(const char* value) { SetApplicationLogOutputUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Locations of log files that your content generates during a stream session.
     * Enter path values that are relative to the <code>ApplicationSourceUri</code>
     * location. You can specify up to 10 log locations. Amazon GameLift Streams
     * uploads designated log files to the Amazon S3 bucket that you specify in
     * <code>ApplicationLogOutputUri</code> at the end of a stream session. To retrieve
     * stored log files, call <a>GetStreamSession</a> and get the
     * <code>LogFileLocationUri</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationLogPaths() const{ return m_applicationLogPaths; }
    inline bool ApplicationLogPathsHasBeenSet() const { return m_applicationLogPathsHasBeenSet; }
    inline void SetApplicationLogPaths(const Aws::Vector<Aws::String>& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths = value; }
    inline void SetApplicationLogPaths(Aws::Vector<Aws::String>&& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths = std::move(value); }
    inline CreateApplicationRequest& WithApplicationLogPaths(const Aws::Vector<Aws::String>& value) { SetApplicationLogPaths(value); return *this;}
    inline CreateApplicationRequest& WithApplicationLogPaths(Aws::Vector<Aws::String>&& value) { SetApplicationLogPaths(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddApplicationLogPaths(const Aws::String& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths.push_back(value); return *this; }
    inline CreateApplicationRequest& AddApplicationLogPaths(Aws::String&& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths.push_back(std::move(value)); return *this; }
    inline CreateApplicationRequest& AddApplicationLogPaths(const char* value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location of the content that you want to stream. Enter the URI of an
     * Amazon S3 location (bucket name and prefixes) that contains your content. Use
     * the following format for the URI: <code>s3://[bucket name]/[prefix]</code>. The
     * location can have a multi-level prefix structure, but it must include all the
     * files needed to run the content. Amazon GameLift Streams copies everything under
     * the specified location.</p> <p>This value is immutable. To designate a different
     * content location, create a new application.</p>  <p>The S3 bucket and the
     * Amazon GameLift Streams application must be in the same Amazon Web Services
     * Region.</p> 
     */
    inline const Aws::String& GetApplicationSourceUri() const{ return m_applicationSourceUri; }
    inline bool ApplicationSourceUriHasBeenSet() const { return m_applicationSourceUriHasBeenSet; }
    inline void SetApplicationSourceUri(const Aws::String& value) { m_applicationSourceUriHasBeenSet = true; m_applicationSourceUri = value; }
    inline void SetApplicationSourceUri(Aws::String&& value) { m_applicationSourceUriHasBeenSet = true; m_applicationSourceUri = std::move(value); }
    inline void SetApplicationSourceUri(const char* value) { m_applicationSourceUriHasBeenSet = true; m_applicationSourceUri.assign(value); }
    inline CreateApplicationRequest& WithApplicationSourceUri(const Aws::String& value) { SetApplicationSourceUri(value); return *this;}
    inline CreateApplicationRequest& WithApplicationSourceUri(Aws::String&& value) { SetApplicationSourceUri(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithApplicationSourceUri(const char* value) { SetApplicationSourceUri(value); return *this;}
    ///@}

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
    inline CreateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the application. You can update this value
     * later.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path and file name of the executable file that launches the content for
     * streaming. Enter a path value that is relative to the location set in
     * <code>ApplicationSourceUri</code>.</p>
     */
    inline const Aws::String& GetExecutablePath() const{ return m_executablePath; }
    inline bool ExecutablePathHasBeenSet() const { return m_executablePathHasBeenSet; }
    inline void SetExecutablePath(const Aws::String& value) { m_executablePathHasBeenSet = true; m_executablePath = value; }
    inline void SetExecutablePath(Aws::String&& value) { m_executablePathHasBeenSet = true; m_executablePath = std::move(value); }
    inline void SetExecutablePath(const char* value) { m_executablePathHasBeenSet = true; m_executablePath.assign(value); }
    inline CreateApplicationRequest& WithExecutablePath(const Aws::String& value) { SetExecutablePath(value); return *this;}
    inline CreateApplicationRequest& WithExecutablePath(Aws::String&& value) { SetExecutablePath(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithExecutablePath(const char* value) { SetExecutablePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of configuration settings to run the application on a stream group.
     * This configures the operating system, and can include compatibility layers and
     * other drivers.</p> <p>A runtime environment can be one of the following:</p>
     * <ul> <li> <p> For Linux applications </p> <ul> <li> <p> Ubuntu 22.04
     * LTS(<code>Type=UBUNTU, Version=22_04_LTS</code>) </p> </li> </ul> </li> <li> <p>
     * For Windows applications </p> <ul> <li> <p>Microsoft Windows Server 2022 Base
     * (<code>Type=WINDOWS, Version=2022</code>)</p> </li> <li> <p>Proton 8.0-5
     * (<code>Type=PROTON, Version=20241007</code>)</p> </li> <li> <p>Proton 8.0-2c
     * (<code>Type=PROTON, Version=20230704</code>)</p> </li> </ul> </li> </ul>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const{ return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    inline void SetRuntimeEnvironment(const RuntimeEnvironment& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }
    inline void SetRuntimeEnvironment(RuntimeEnvironment&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::move(value); }
    inline CreateApplicationRequest& WithRuntimeEnvironment(const RuntimeEnvironment& value) { SetRuntimeEnvironment(value); return *this;}
    inline CreateApplicationRequest& WithRuntimeEnvironment(RuntimeEnvironment&& value) { SetRuntimeEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the new application resource. Tags are
     * developer-defined key-value pairs. Tagging Amazon Web Services resources is
     * useful for resource management, access management and cost allocation. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>. You can use <a>TagResource</a> to add tags, <a>UntagResource</a>
     * to remove tags, and <a>ListTagsForResource</a> to view tags on existing
     * resources. The maximum tag limit might be lower than stated. See the <i>Amazon
     * Web Services General Reference</i> for actual tagging limits.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_applicationLogOutputUri;
    bool m_applicationLogOutputUriHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationLogPaths;
    bool m_applicationLogPathsHasBeenSet = false;

    Aws::String m_applicationSourceUri;
    bool m_applicationSourceUriHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_executablePath;
    bool m_executablePathHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
