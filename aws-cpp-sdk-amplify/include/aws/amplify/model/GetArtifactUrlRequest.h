/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> Returns the request structure for the get artifact request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetArtifactUrlRequest">AWS
   * API Reference</a></p>
   */
  class GetArtifactUrlRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API GetArtifactUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetArtifactUrl"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique ID for an artifact. </p>
     */
    inline const Aws::String& GetArtifactId() const{ return m_artifactId; }

    /**
     * <p> The unique ID for an artifact. </p>
     */
    inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }

    /**
     * <p> The unique ID for an artifact. </p>
     */
    inline void SetArtifactId(const Aws::String& value) { m_artifactIdHasBeenSet = true; m_artifactId = value; }

    /**
     * <p> The unique ID for an artifact. </p>
     */
    inline void SetArtifactId(Aws::String&& value) { m_artifactIdHasBeenSet = true; m_artifactId = std::move(value); }

    /**
     * <p> The unique ID for an artifact. </p>
     */
    inline void SetArtifactId(const char* value) { m_artifactIdHasBeenSet = true; m_artifactId.assign(value); }

    /**
     * <p> The unique ID for an artifact. </p>
     */
    inline GetArtifactUrlRequest& WithArtifactId(const Aws::String& value) { SetArtifactId(value); return *this;}

    /**
     * <p> The unique ID for an artifact. </p>
     */
    inline GetArtifactUrlRequest& WithArtifactId(Aws::String&& value) { SetArtifactId(std::move(value)); return *this;}

    /**
     * <p> The unique ID for an artifact. </p>
     */
    inline GetArtifactUrlRequest& WithArtifactId(const char* value) { SetArtifactId(value); return *this;}

  private:

    Aws::String m_artifactId;
    bool m_artifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
