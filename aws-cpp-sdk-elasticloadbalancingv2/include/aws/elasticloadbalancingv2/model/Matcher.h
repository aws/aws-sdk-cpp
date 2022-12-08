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
    AWS_ELASTICLOADBALANCINGV2_API Matcher();
    AWS_ELASTICLOADBALANCINGV2_API Matcher(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API Matcher& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline const Aws::String& GetHttpCode() const{ return m_httpCode; }

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
    inline bool HttpCodeHasBeenSet() const { return m_httpCodeHasBeenSet; }

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
    inline void SetHttpCode(const Aws::String& value) { m_httpCodeHasBeenSet = true; m_httpCode = value; }

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
    inline void SetHttpCode(Aws::String&& value) { m_httpCodeHasBeenSet = true; m_httpCode = std::move(value); }

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
    inline void SetHttpCode(const char* value) { m_httpCodeHasBeenSet = true; m_httpCode.assign(value); }

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
    inline Matcher& WithHttpCode(const Aws::String& value) { SetHttpCode(value); return *this;}

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
    inline Matcher& WithHttpCode(Aws::String&& value) { SetHttpCode(std::move(value)); return *this;}

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
    inline Matcher& WithHttpCode(const char* value) { SetHttpCode(value); return *this;}


    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline const Aws::String& GetGrpcCode() const{ return m_grpcCode; }

    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline bool GrpcCodeHasBeenSet() const { return m_grpcCodeHasBeenSet; }

    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline void SetGrpcCode(const Aws::String& value) { m_grpcCodeHasBeenSet = true; m_grpcCode = value; }

    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline void SetGrpcCode(Aws::String&& value) { m_grpcCodeHasBeenSet = true; m_grpcCode = std::move(value); }

    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline void SetGrpcCode(const char* value) { m_grpcCodeHasBeenSet = true; m_grpcCode.assign(value); }

    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline Matcher& WithGrpcCode(const Aws::String& value) { SetGrpcCode(value); return *this;}

    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline Matcher& WithGrpcCode(Aws::String&& value) { SetGrpcCode(std::move(value)); return *this;}

    /**
     * <p>You can specify values between 0 and 99. You can specify multiple values (for
     * example, "0,1") or a range of values (for example, "0-5"). The default value is
     * 12.</p>
     */
    inline Matcher& WithGrpcCode(const char* value) { SetGrpcCode(value); return *this;}

  private:

    Aws::String m_httpCode;
    bool m_httpCodeHasBeenSet = false;

    Aws::String m_grpcCode;
    bool m_grpcCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
