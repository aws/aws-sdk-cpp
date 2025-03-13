/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Defines a <code>PolicyInformation</code> qualifier. Amazon Web Services
   * Private CA supports the <a
   * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.4">certification
   * practice statement (CPS) qualifier</a> defined in RFC 5280. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/Qualifier">AWS
   * API Reference</a></p>
   */
  class Qualifier
  {
  public:
    AWS_ACMPCA_API Qualifier() = default;
    AWS_ACMPCA_API Qualifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Qualifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline const Aws::String& GetCpsUri() const { return m_cpsUri; }
    inline bool CpsUriHasBeenSet() const { return m_cpsUriHasBeenSet; }
    template<typename CpsUriT = Aws::String>
    void SetCpsUri(CpsUriT&& value) { m_cpsUriHasBeenSet = true; m_cpsUri = std::forward<CpsUriT>(value); }
    template<typename CpsUriT = Aws::String>
    Qualifier& WithCpsUri(CpsUriT&& value) { SetCpsUri(std::forward<CpsUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cpsUri;
    bool m_cpsUriHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
