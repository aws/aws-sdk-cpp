/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>The codes to use when checking for a successful response from a target. If
   * the protocol version is gRPC, these are gRPC codes. Otherwise, these are HTTP
   * codes. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/Matcher">AWS
   * API Reference</a></p>
   */
  class Matcher
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API Matcher() = default;
    AWS_ELASTICLOADBALANCINGV2_API Matcher(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API Matcher& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>For Application Load Balancers, you can specify values between 200 and 499,
     * with the default value being 200. You can specify multiple values (for example,
     * "200,202") or a range of values (for example, "200-299").</p> <p>For Network
     * Load Balancers, you can specify values between 200 and 599, with the default
     * value being 200-399. You can specify multiple values (for example, "200,202") or
     * a range of values (for example, "200-299").</p> <p>For Gateway Load Balancers,
     * this must be "200–399".</p> <p>Note that when using shorthand syntax, some
     * values such as commas need to be escaped.</p>
     */
    inline const Aws::String& GetHttpCode() const { return m_httpCode; }
    inline bool HttpCodeHasBeenSet() const { return m_httpCodeHasBeenSet; }
    template<typename HttpCodeT = Aws::String>
    void SetHttpCode(HttpCodeT&& value) { m_httpCodeHasBeenSet = true; m_httpCode = std::forward<HttpCodeT>(value); }
    template<typename HttpCodeT = Aws::String>
    Matcher& WithHttpCode(HttpCodeT&& value) { SetHttpCode(std::forward<HttpCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline const Aws::String& GetGrpcCode() const { return m_grpcCode; }
    inline bool GrpcCodeHasBeenSet() const { return m_grpcCodeHasBeenSet; }
    template<typename GrpcCodeT = Aws::String>
    void SetGrpcCode(GrpcCodeT&& value) { m_grpcCodeHasBeenSet = true; m_grpcCode = std::forward<GrpcCodeT>(value); }
    template<typename GrpcCodeT = Aws::String>
    Matcher& WithGrpcCode(GrpcCodeT&& value) { SetGrpcCode(std::forward<GrpcCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_httpCode;
    bool m_httpCodeHasBeenSet = false;

    Aws::String m_grpcCode;
    bool m_grpcCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
