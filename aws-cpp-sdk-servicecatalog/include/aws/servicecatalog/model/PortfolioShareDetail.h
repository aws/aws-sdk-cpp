/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/DescribePortfolioShareType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about the portfolio share.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/PortfolioShareDetail">AWS
   * API Reference</a></p>
   */
  class PortfolioShareDetail
  {
  public:
    AWS_SERVICECATALOG_API PortfolioShareDetail();
    AWS_SERVICECATALOG_API PortfolioShareDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API PortfolioShareDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline PortfolioShareDetail& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline PortfolioShareDetail& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the recipient entity that received the portfolio share. The
     * recipient entity can be one of the following:</p> <p>1. An external account.</p>
     * <p>2. An organziation member account.</p> <p>3. An organzational unit (OU).</p>
     * <p>4. The organization itself. (This shares with every account in the
     * organization).</p>
     */
    inline PortfolioShareDetail& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The type of the portfolio share.</p>
     */
    inline const DescribePortfolioShareType& GetType() const{ return m_type; }

    /**
     * <p>The type of the portfolio share.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the portfolio share.</p>
     */
    inline void SetType(const DescribePortfolioShareType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the portfolio share.</p>
     */
    inline void SetType(DescribePortfolioShareType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the portfolio share.</p>
     */
    inline PortfolioShareDetail& WithType(const DescribePortfolioShareType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the portfolio share.</p>
     */
    inline PortfolioShareDetail& WithType(DescribePortfolioShareType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the shared portfolio is imported by the recipient account.
     * If the recipient is in an organization node, the share is automatically
     * imported, and the field is always set to true.</p>
     */
    inline bool GetAccepted() const{ return m_accepted; }

    /**
     * <p>Indicates whether the shared portfolio is imported by the recipient account.
     * If the recipient is in an organization node, the share is automatically
     * imported, and the field is always set to true.</p>
     */
    inline bool AcceptedHasBeenSet() const { return m_acceptedHasBeenSet; }

    /**
     * <p>Indicates whether the shared portfolio is imported by the recipient account.
     * If the recipient is in an organization node, the share is automatically
     * imported, and the field is always set to true.</p>
     */
    inline void SetAccepted(bool value) { m_acceptedHasBeenSet = true; m_accepted = value; }

    /**
     * <p>Indicates whether the shared portfolio is imported by the recipient account.
     * If the recipient is in an organization node, the share is automatically
     * imported, and the field is always set to true.</p>
     */
    inline PortfolioShareDetail& WithAccepted(bool value) { SetAccepted(value); return *this;}


    /**
     * <p>Indicates whether TagOptions sharing is enabled or disabled for the portfolio
     * share.</p>
     */
    inline bool GetShareTagOptions() const{ return m_shareTagOptions; }

    /**
     * <p>Indicates whether TagOptions sharing is enabled or disabled for the portfolio
     * share.</p>
     */
    inline bool ShareTagOptionsHasBeenSet() const { return m_shareTagOptionsHasBeenSet; }

    /**
     * <p>Indicates whether TagOptions sharing is enabled or disabled for the portfolio
     * share.</p>
     */
    inline void SetShareTagOptions(bool value) { m_shareTagOptionsHasBeenSet = true; m_shareTagOptions = value; }

    /**
     * <p>Indicates whether TagOptions sharing is enabled or disabled for the portfolio
     * share.</p>
     */
    inline PortfolioShareDetail& WithShareTagOptions(bool value) { SetShareTagOptions(value); return *this;}


    /**
     * <p>Indicates if <code>Principal</code> sharing is enabled or disabled for the
     * portfolio share. </p>
     */
    inline bool GetSharePrincipals() const{ return m_sharePrincipals; }

    /**
     * <p>Indicates if <code>Principal</code> sharing is enabled or disabled for the
     * portfolio share. </p>
     */
    inline bool SharePrincipalsHasBeenSet() const { return m_sharePrincipalsHasBeenSet; }

    /**
     * <p>Indicates if <code>Principal</code> sharing is enabled or disabled for the
     * portfolio share. </p>
     */
    inline void SetSharePrincipals(bool value) { m_sharePrincipalsHasBeenSet = true; m_sharePrincipals = value; }

    /**
     * <p>Indicates if <code>Principal</code> sharing is enabled or disabled for the
     * portfolio share. </p>
     */
    inline PortfolioShareDetail& WithSharePrincipals(bool value) { SetSharePrincipals(value); return *this;}

  private:

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    DescribePortfolioShareType m_type;
    bool m_typeHasBeenSet = false;

    bool m_accepted;
    bool m_acceptedHasBeenSet = false;

    bool m_shareTagOptions;
    bool m_shareTagOptionsHasBeenSet = false;

    bool m_sharePrincipals;
    bool m_sharePrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
