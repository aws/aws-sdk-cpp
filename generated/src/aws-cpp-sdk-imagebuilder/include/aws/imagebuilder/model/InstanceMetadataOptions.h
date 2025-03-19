/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The instance metadata options that apply to the HTTP requests that pipeline
   * builds use to launch EC2 build and test instances. For more information about
   * instance metadata options, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-instance-metadata-options.html">Configure
   * the instance metadata options</a> in the <i> <i>Amazon EC2 User Guide</i> </i>
   * for Linux instances, or <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/configuring-instance-metadata-options.html">Configure
   * the instance metadata options</a> in the <i> <i>Amazon EC2 Windows Guide</i>
   * </i> for Windows instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/InstanceMetadataOptions">AWS
   * API Reference</a></p>
   */
  class InstanceMetadataOptions
  {
  public:
    AWS_IMAGEBUILDER_API InstanceMetadataOptions() = default;
    AWS_IMAGEBUILDER_API InstanceMetadataOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API InstanceMetadataOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether a signed token header is required for instance metadata
     * retrieval requests. The values affect the response as follows:</p> <ul> <li> <p>
     * <b>required</b> – When you retrieve the IAM role credentials, version 2.0
     * credentials are returned in all cases.</p> </li> <li> <p> <b>optional</b> – You
     * can include a signed token header in your request to retrieve instance metadata,
     * or you can leave it out. If you include it, version 2.0 credentials are returned
     * for the IAM role. Otherwise, version 1.0 credentials are returned.</p> </li>
     * </ul> <p>The default setting is <b>optional</b>.</p>
     */
    inline const Aws::String& GetHttpTokens() const { return m_httpTokens; }
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }
    template<typename HttpTokensT = Aws::String>
    void SetHttpTokens(HttpTokensT&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::forward<HttpTokensT>(value); }
    template<typename HttpTokensT = Aws::String>
    InstanceMetadataOptions& WithHttpTokens(HttpTokensT&& value) { SetHttpTokens(std::forward<HttpTokensT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limit the number of hops that an instance metadata request can traverse to
     * reach its destination. The default is one hop. However, if HTTP tokens are
     * required, container image builds need a minimum of two hops.</p>
     */
    inline int GetHttpPutResponseHopLimit() const { return m_httpPutResponseHopLimit; }
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }
    inline InstanceMetadataOptions& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_httpTokens;
    bool m_httpTokensHasBeenSet = false;

    int m_httpPutResponseHopLimit{0};
    bool m_httpPutResponseHopLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
