/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the configuration of the HTTP endpoint to which Kinesis Firehose
   * delivers data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/HttpEndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class HttpEndpointConfiguration
  {
  public:
    AWS_FIREHOSE_API HttpEndpointConfiguration() = default;
    AWS_FIREHOSE_API HttpEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API HttpEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the HTTP endpoint selected as the destination.</p> 
     * <p>If you choose an HTTP endpoint as your destination, review and follow the
     * instructions in the <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/httpdeliveryrequestresponse.html">Appendix
     * - HTTP Endpoint Delivery Request and Response Specifications</a>.</p>
     * 
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    HttpEndpointConfiguration& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the HTTP endpoint selected as the destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    HttpEndpointConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access key required for Kinesis Firehose to authenticate with the HTTP
     * endpoint selected as the destination.</p>
     */
    inline const Aws::String& GetAccessKey() const { return m_accessKey; }
    inline bool AccessKeyHasBeenSet() const { return m_accessKeyHasBeenSet; }
    template<typename AccessKeyT = Aws::String>
    void SetAccessKey(AccessKeyT&& value) { m_accessKeyHasBeenSet = true; m_accessKey = std::forward<AccessKeyT>(value); }
    template<typename AccessKeyT = Aws::String>
    HttpEndpointConfiguration& WithAccessKey(AccessKeyT&& value) { SetAccessKey(std::forward<AccessKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_accessKey;
    bool m_accessKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
