/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_NETWORKMANAGER_API DisassociateLinkResult
  {
  public:
    DisassociateLinkResult();
    DisassociateLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisassociateLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the link association.</p>
     */
    inline const LinkAssociation& GetLinkAssociation() const{ return m_linkAssociation; }

    /**
     * <p>Information about the link association.</p>
     */
    inline void SetLinkAssociation(const LinkAssociation& value) { m_linkAssociation = value; }

    /**
     * <p>Information about the link association.</p>
     */
    inline void SetLinkAssociation(LinkAssociation&& value) { m_linkAssociation = std::move(value); }

    /**
     * <p>Information about the link association.</p>
     */
    inline DisassociateLinkResult& WithLinkAssociation(const LinkAssociation& value) { SetLinkAssociation(value); return *this;}

    /**
     * <p>Information about the link association.</p>
     */
    inline DisassociateLinkResult& WithLinkAssociation(LinkAssociation&& value) { SetLinkAssociation(std::move(value)); return *this;}

  private:

    LinkAssociation m_linkAssociation;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
