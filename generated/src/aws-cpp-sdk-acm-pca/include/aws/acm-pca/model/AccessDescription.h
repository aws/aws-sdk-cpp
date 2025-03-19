/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/AccessMethod.h>
#include <aws/acm-pca/model/GeneralName.h>
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
   * <p>Provides access information used by the <code>authorityInfoAccess</code> and
   * <code>subjectInfoAccess</code> extensions described in <a
   * href="https://datatracker.ietf.org/doc/html/rfc5280">RFC 5280</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/AccessDescription">AWS
   * API Reference</a></p>
   */
  class AccessDescription
  {
  public:
    AWS_ACMPCA_API AccessDescription() = default;
    AWS_ACMPCA_API AccessDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API AccessDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type and format of <code>AccessDescription</code> information.</p>
     */
    inline const AccessMethod& GetAccessMethod() const { return m_accessMethod; }
    inline bool AccessMethodHasBeenSet() const { return m_accessMethodHasBeenSet; }
    template<typename AccessMethodT = AccessMethod>
    void SetAccessMethod(AccessMethodT&& value) { m_accessMethodHasBeenSet = true; m_accessMethod = std::forward<AccessMethodT>(value); }
    template<typename AccessMethodT = AccessMethod>
    AccessDescription& WithAccessMethod(AccessMethodT&& value) { SetAccessMethod(std::forward<AccessMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of <code>AccessDescription</code> information.</p>
     */
    inline const GeneralName& GetAccessLocation() const { return m_accessLocation; }
    inline bool AccessLocationHasBeenSet() const { return m_accessLocationHasBeenSet; }
    template<typename AccessLocationT = GeneralName>
    void SetAccessLocation(AccessLocationT&& value) { m_accessLocationHasBeenSet = true; m_accessLocation = std::forward<AccessLocationT>(value); }
    template<typename AccessLocationT = GeneralName>
    AccessDescription& WithAccessLocation(AccessLocationT&& value) { SetAccessLocation(std::forward<AccessLocationT>(value)); return *this;}
    ///@}
  private:

    AccessMethod m_accessMethod;
    bool m_accessMethodHasBeenSet = false;

    GeneralName m_accessLocation;
    bool m_accessLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
