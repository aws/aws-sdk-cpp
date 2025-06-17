/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>Contains information for HTTP-based domain validation of certificates
   * requested through Amazon CloudFront and issued by ACM. This field exists only
   * when the certificate type is <code>AMAZON_ISSUED</code> and the validation
   * method is <code>HTTP</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/HttpRedirect">AWS
   * API Reference</a></p>
   */
  class HttpRedirect
  {
  public:
    AWS_ACM_API HttpRedirect() = default;
    AWS_ACM_API HttpRedirect(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API HttpRedirect& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL including the domain to be validated. The certificate authority sends
     * <code>GET</code> requests here during validation.</p>
     */
    inline const Aws::String& GetRedirectFrom() const { return m_redirectFrom; }
    inline bool RedirectFromHasBeenSet() const { return m_redirectFromHasBeenSet; }
    template<typename RedirectFromT = Aws::String>
    void SetRedirectFrom(RedirectFromT&& value) { m_redirectFromHasBeenSet = true; m_redirectFrom = std::forward<RedirectFromT>(value); }
    template<typename RedirectFromT = Aws::String>
    HttpRedirect& WithRedirectFrom(RedirectFromT&& value) { SetRedirectFrom(std::forward<RedirectFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL hosting the validation token. <code>RedirectFrom</code> must return
     * this content or redirect here.</p>
     */
    inline const Aws::String& GetRedirectTo() const { return m_redirectTo; }
    inline bool RedirectToHasBeenSet() const { return m_redirectToHasBeenSet; }
    template<typename RedirectToT = Aws::String>
    void SetRedirectTo(RedirectToT&& value) { m_redirectToHasBeenSet = true; m_redirectTo = std::forward<RedirectToT>(value); }
    template<typename RedirectToT = Aws::String>
    HttpRedirect& WithRedirectTo(RedirectToT&& value) { SetRedirectTo(std::forward<RedirectToT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_redirectFrom;
    bool m_redirectFromHasBeenSet = false;

    Aws::String m_redirectTo;
    bool m_redirectToHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
