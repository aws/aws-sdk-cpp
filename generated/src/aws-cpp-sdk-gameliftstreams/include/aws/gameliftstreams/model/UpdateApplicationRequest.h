/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

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
    inline UpdateApplicationRequest& WithApplicationLogOutputUri(const Aws::String& value) { SetApplicationLogOutputUri(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationLogOutputUri(Aws::String&& value) { SetApplicationLogOutputUri(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithApplicationLogOutputUri(const char* value) { SetApplicationLogOutputUri(value); return *this;}
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
    inline UpdateApplicationRequest& WithApplicationLogPaths(const Aws::Vector<Aws::String>& value) { SetApplicationLogPaths(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationLogPaths(Aws::Vector<Aws::String>&& value) { SetApplicationLogPaths(std::move(value)); return *this;}
    inline UpdateApplicationRequest& AddApplicationLogPaths(const Aws::String& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths.push_back(value); return *this; }
    inline UpdateApplicationRequest& AddApplicationLogPaths(Aws::String&& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths.push_back(std::move(value)); return *this; }
    inline UpdateApplicationRequest& AddApplicationLogPaths(const char* value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateApplicationRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateApplicationRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationLogOutputUri;
    bool m_applicationLogOutputUriHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationLogPaths;
    bool m_applicationLogPathsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
