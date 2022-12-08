/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/LinkAssociation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{
  class AssociateLinkResult
  {
  public:
    AWS_NETWORKMANAGER_API AssociateLinkResult();
    AWS_NETWORKMANAGER_API AssociateLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API AssociateLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The link association.</p>
     */
    inline const LinkAssociation& GetLinkAssociation() const{ return m_linkAssociation; }

    /**
     * <p>The link association.</p>
     */
    inline void SetLinkAssociation(const LinkAssociation& value) { m_linkAssociation = value; }

    /**
     * <p>The link association.</p>
     */
    inline void SetLinkAssociation(LinkAssociation&& value) { m_linkAssociation = std::move(value); }

    /**
     * <p>The link association.</p>
     */
    inline AssociateLinkResult& WithLinkAssociation(const LinkAssociation& value) { SetLinkAssociation(value); return *this;}

    /**
     * <p>The link association.</p>
     */
    inline AssociateLinkResult& WithLinkAssociation(LinkAssociation&& value) { SetLinkAssociation(std::move(value)); return *this;}

  private:

    LinkAssociation m_linkAssociation;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
