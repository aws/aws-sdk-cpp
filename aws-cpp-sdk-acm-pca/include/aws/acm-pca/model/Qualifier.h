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
   * <p>Defines a <code>PolicyInformation</code> qualifier. ACM Private CA supports
   * the <a
   * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.4">certification
   * practice statement (CPS) qualifier</a> defined in RFC 5280. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/Qualifier">AWS
   * API Reference</a></p>
   */
  class Qualifier
  {
  public:
    AWS_ACMPCA_API Qualifier();
    AWS_ACMPCA_API Qualifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Qualifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline const Aws::String& GetCpsUri() const{ return m_cpsUri; }

    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline bool CpsUriHasBeenSet() const { return m_cpsUriHasBeenSet; }

    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline void SetCpsUri(const Aws::String& value) { m_cpsUriHasBeenSet = true; m_cpsUri = value; }

    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline void SetCpsUri(Aws::String&& value) { m_cpsUriHasBeenSet = true; m_cpsUri = std::move(value); }

    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline void SetCpsUri(const char* value) { m_cpsUriHasBeenSet = true; m_cpsUri.assign(value); }

    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline Qualifier& WithCpsUri(const Aws::String& value) { SetCpsUri(value); return *this;}

    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline Qualifier& WithCpsUri(Aws::String&& value) { SetCpsUri(std::move(value)); return *this;}

    /**
     * <p>Contains a pointer to a certification practice statement (CPS) published by
     * the CA.</p>
     */
    inline Qualifier& WithCpsUri(const char* value) { SetCpsUri(value); return *this;}

  private:

    Aws::String m_cpsUri;
    bool m_cpsUriHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
