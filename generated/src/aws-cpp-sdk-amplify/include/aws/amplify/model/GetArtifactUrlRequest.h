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
   * <p>Returns the request structure for the get artifact request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetArtifactUrlRequest">AWS
   * API Reference</a></p>
   */
  class GetArtifactUrlRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API GetArtifactUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetArtifactUrl"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for an artifact. </p>
     */
    inline const Aws::String& GetArtifactId() const { return m_artifactId; }
    inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }
    template<typename ArtifactIdT = Aws::String>
    void SetArtifactId(ArtifactIdT&& value) { m_artifactIdHasBeenSet = true; m_artifactId = std::forward<ArtifactIdT>(value); }
    template<typename ArtifactIdT = Aws::String>
    GetArtifactUrlRequest& WithArtifactId(ArtifactIdT&& value) { SetArtifactId(std::forward<ArtifactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_artifactId;
    bool m_artifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
