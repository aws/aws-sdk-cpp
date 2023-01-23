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
    AWS_ACMPCA_API AccessDescription();
    AWS_ACMPCA_API AccessDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API AccessDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type and format of <code>AccessDescription</code> information.</p>
     */
    inline const AccessMethod& GetAccessMethod() const{ return m_accessMethod; }

    /**
     * <p>The type and format of <code>AccessDescription</code> information.</p>
     */
    inline bool AccessMethodHasBeenSet() const { return m_accessMethodHasBeenSet; }

    /**
     * <p>The type and format of <code>AccessDescription</code> information.</p>
     */
    inline void SetAccessMethod(const AccessMethod& value) { m_accessMethodHasBeenSet = true; m_accessMethod = value; }

    /**
     * <p>The type and format of <code>AccessDescription</code> information.</p>
     */
    inline void SetAccessMethod(AccessMethod&& value) { m_accessMethodHasBeenSet = true; m_accessMethod = std::move(value); }

    /**
     * <p>The type and format of <code>AccessDescription</code> information.</p>
     */
    inline AccessDescription& WithAccessMethod(const AccessMethod& value) { SetAccessMethod(value); return *this;}

    /**
     * <p>The type and format of <code>AccessDescription</code> information.</p>
     */
    inline AccessDescription& WithAccessMethod(AccessMethod&& value) { SetAccessMethod(std::move(value)); return *this;}


    /**
     * <p>The location of <code>AccessDescription</code> information.</p>
     */
    inline const GeneralName& GetAccessLocation() const{ return m_accessLocation; }

    /**
     * <p>The location of <code>AccessDescription</code> information.</p>
     */
    inline bool AccessLocationHasBeenSet() const { return m_accessLocationHasBeenSet; }

    /**
     * <p>The location of <code>AccessDescription</code> information.</p>
     */
    inline void SetAccessLocation(const GeneralName& value) { m_accessLocationHasBeenSet = true; m_accessLocation = value; }

    /**
     * <p>The location of <code>AccessDescription</code> information.</p>
     */
    inline void SetAccessLocation(GeneralName&& value) { m_accessLocationHasBeenSet = true; m_accessLocation = std::move(value); }

    /**
     * <p>The location of <code>AccessDescription</code> information.</p>
     */
    inline AccessDescription& WithAccessLocation(const GeneralName& value) { SetAccessLocation(value); return *this;}

    /**
     * <p>The location of <code>AccessDescription</code> information.</p>
     */
    inline AccessDescription& WithAccessLocation(GeneralName&& value) { SetAccessLocation(std::move(value)); return *this;}

  private:

    AccessMethod m_accessMethod;
    bool m_accessMethodHasBeenSet = false;

    GeneralName m_accessLocation;
    bool m_accessLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
